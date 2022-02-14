
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u ;



uint64_t FUNC_0(uint64_t VAR_0) {
  return (
      (((VAR_0)&0xff00000000000000ULL) >> 56) |
      (((VAR_0)&0x00ff000000000000ULL) >> 40) |
      (((VAR_0)&0x0000ff0000000000ULL) >> 24) |
      (((VAR_0)&0x000000ff00000000ULL) >> 8) |
      (((VAR_0)&0x00000000ff000000ULL) << 8) |
      (((VAR_0)&0x0000000000ff0000ULL) << 24) |
      (((VAR_0)&0x000000000000ff00ULL) << 40) |
      (((VAR_0)&0x00000000000000ffULL) << 56));
}
