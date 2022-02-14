
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
typedef long long uint32_t ;
struct bintime {int frac; scalar_t__ sec; } ;


 int FUNC_0 (struct bintime*) ;

__attribute__((used)) static uint64_t
FUNC_1(void)
{
 struct bintime VAR_0;
 uint64_t VAR_1 = 0x01B21DD213814000LL;

 FUNC_0(&VAR_0);
 VAR_1 += (uint64_t)VAR_0.sec * 10000000LL;
 VAR_1 += (10000000LL * (uint32_t)(VAR_0.frac >> 32)) >> 32;
 return (VAR_1 & ((1LL << 60) - 1LL));
}
