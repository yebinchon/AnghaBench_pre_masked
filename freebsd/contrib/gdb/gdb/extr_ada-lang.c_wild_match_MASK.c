
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4 (const char *VAR_0, int VAR_1, const char *VAR_2)
{
  int VAR_3;
  int VAR_4, VAR_5;

  VAR_3 = FUNC_3 (VAR_2);
  if (VAR_3 >= VAR_1 + 5 && FUNC_0 (VAR_2, "_ada_", 5)
      && FUNC_0 (VAR_0, VAR_2 + 5, VAR_1)
      && FUNC_1 (VAR_2 + VAR_1 + 5))
    return 1;

  while (VAR_3 >= VAR_1)
    {
      if (FUNC_0 (VAR_0, VAR_2, VAR_1) && FUNC_1 (VAR_2 + VAR_1))
 return 1;
      do
 {
   VAR_2 += 1;
   VAR_3 -= 1;
 }
      while (VAR_3 > 0
      && VAR_2[0] != '.' && (VAR_2[0] != '_' || VAR_2[1] != '_'));
      if (VAR_3 <= 0)
 return 0;
      if (VAR_2[0] == '_')
 {
   if (!FUNC_2 (VAR_2[2]))
     return 0;
   VAR_2 += 2;
   VAR_3 -= 2;
 }
      else
 {
   if (!FUNC_2 (VAR_2[1]))
     return 0;
   VAR_2 += 1;
   VAR_3 -= 1;
 }
    }

  return 0;
}
