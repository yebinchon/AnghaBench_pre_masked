
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *const VAR_0[], const char *const VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;
 for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
  if (VAR_0[VAR_2][0] == VAR_1[0] && VAR_0[VAR_2][1] == VAR_1[1])
   return 1;
 }

 return 0;
}
