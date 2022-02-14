
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int boolean_t ;



__attribute__((used)) static boolean_t
FUNC_0(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 uint64_t *VAR_3 = VAR_0;
 uint64_t *VAR_4 = (uint64_t *)((uintptr_t)VAR_0 + (uintptr_t)VAR_1);
 uint64_t VAR_5 = 0;

 while (VAR_3 < VAR_4)
  VAR_5 |= (VAR_2 - *VAR_3++);

 return (VAR_5 == 0);
}
