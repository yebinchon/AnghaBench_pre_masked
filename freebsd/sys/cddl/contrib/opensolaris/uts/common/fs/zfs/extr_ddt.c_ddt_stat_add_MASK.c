
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
typedef int ddt_stat_t ;


 int FUNC_0 (int) ;

void
FUNC_1(ddt_stat_t *VAR_0, const ddt_stat_t *VAR_1, uint64_t VAR_2)
{
 const uint64_t *VAR_3 = (const uint64_t *)VAR_1;
 uint64_t *VAR_4 = (uint64_t *)VAR_0;
 uint64_t *VAR_5 = (uint64_t *)(VAR_0 + 1);

 FUNC_0(VAR_2 == 0 || VAR_2 == -1ULL);

 while (VAR_4 < VAR_5)
  *VAR_4++ += (*VAR_3++ ^ VAR_2) - VAR_2;
}
