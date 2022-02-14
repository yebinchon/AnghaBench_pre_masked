
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, size_t VAR_1, void *VAR_2)
{
 uint64_t *VAR_3 = (uint64_t *)((char *)VAR_0 + VAR_1);
 for (uint64_t *VAR_4 = (uint64_t *)VAR_0; VAR_4 < VAR_3; VAR_4++)
  if (*VAR_4 != 0)
   return (1);

 return (0);
}
