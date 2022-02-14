
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int
FUNC_2 (const char *VAR_0)
{
  int VAR_1;
  if (VAR_0[0] == 'X')
    {
      VAR_0 += 1;
      while (VAR_0[0] != '_' && VAR_0[0] != '\0')
 {
   if (VAR_0[0] != 'n' && VAR_0[0] != 'b')
     return 0;
   VAR_0 += 1;
 }
    }
  if (VAR_0[0] == '\000')
    return 1;
  if (VAR_0[0] == '_')
    {
      if (VAR_0[1] != '_' || VAR_0[2] == '\000')
 return 0;
      if (VAR_0[2] == '_')
 {
   if (FUNC_0 (VAR_0 + 3, "LJM"))
     return 1;
   if (VAR_0[3] != 'X')
     return 0;
   if (VAR_0[4] == 'F' || VAR_0[4] == 'D' || VAR_0[4] == 'B' ||
       VAR_0[4] == 'U' || VAR_0[4] == 'P')
     return 1;
   if (VAR_0[4] == 'R' && VAR_0[5] != 'T')
     return 1;
   return 0;
 }
      for (VAR_1 = 2; VAR_0[VAR_1] != '\0'; VAR_1 += 1)
 if (!FUNC_1 (VAR_0[VAR_1]))
   return 0;
      return 1;
    }
  if (VAR_0[0] == '$' && VAR_0[1] != '\000')
    {
      for (VAR_1 = 1; VAR_0[VAR_1] != '\0'; VAR_1 += 1)
 if (!FUNC_1 (VAR_0[VAR_1]))
   return 0;
      return 1;
    }
  return 0;
}
