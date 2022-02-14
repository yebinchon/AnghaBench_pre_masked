
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2, size_t VAR_3)
{
 int VAR_4;

 if (VAR_2 == 0 || VAR_3 == 0 || VAR_3 > VAR_2)
  return (((void*)0));

 for (VAR_4 = 0; (size_t) VAR_4 <= VAR_2 - VAR_3; VAR_4++) {
  if (VAR_0[VAR_4] != VAR_1[0])
   continue;
  if (VAR_3 == 1)
   return (&VAR_0[VAR_4]);
  if (FUNC_0(&VAR_0[VAR_4 + 1], &VAR_1[1], VAR_3 - 1) == 0)
   return (&VAR_0[VAR_4]);
 }

 return (((void*)0));
}
