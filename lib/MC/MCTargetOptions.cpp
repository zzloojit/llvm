//===- lib/MC/MCTargetOptions.cpp - MC Target Options --------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "llvm/MC/MCTargetOptions.h"

namespace llvm {

MCTargetOptions::MCTargetOptions() : SanitizeAddress(false) {}

} // end namespace llvm
