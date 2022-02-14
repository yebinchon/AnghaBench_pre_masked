
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exp; unsigned long long manh; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;
typedef int uint32_t ;


 int FUNC_0 (int *,int,char const*) ;

long double
FUNC_1(const char *VAR_0)
{
 union {
  union IEEEl2bits ieee;
  uint32_t bits[4];
 } VAR_1;

 FUNC_0(VAR_1.bits, 4, VAR_0);
 VAR_1.ieee.bits.exp = 0x7fff;
 VAR_1.ieee.bits.manh |= 1ULL << 47;
 return (VAR_1.ieee.e);
}
