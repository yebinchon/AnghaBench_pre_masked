
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool
FUNC_0(char *VAR_0, size_t VAR_1, char VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

  if (VAR_0[VAR_3] != VAR_2)
   return 0;
 }

 return 1;
}
