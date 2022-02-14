
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

uint64_t
FUNC_0(uint32_t VAR_3)
{
 uint64_t VAR_4 = VAR_3;

 if (VAR_4 <= 0xff)
  return (((uint64_t)VAR_2 << 56) | (VAR_4 << 48));
 if (VAR_4 <= 0x3fff)
  return (((uint64_t)VAR_1 << 56) | (VAR_4 << 48));
 if (VAR_4 <= 0xffffff)
  return (((uint64_t)(VAR_0 | 0x12) << 56) |
      (VAR_4 << 32));
 return ((((uint64_t)VAR_0 | 0x22) << 56) | (VAR_4 << 16));
}
