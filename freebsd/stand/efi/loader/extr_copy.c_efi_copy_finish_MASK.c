
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_0(void)
{
 uint64_t *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = (uint64_t *)(uintptr_t)VAR_1;
 VAR_4 = (uint64_t *)(uintptr_t)(VAR_1 - VAR_0);
 VAR_5 = (uint64_t *)(uintptr_t)VAR_2;

 while (VAR_3 < VAR_5)
  *VAR_4++ = *VAR_3++;
}
