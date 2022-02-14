
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {char** exclude; int exclude_count; } ;


 scalar_t__ FUNC_0 (char const* const,char const*,int) ;

int
FUNC_1 (struct exclude const *VAR_0, char const *VAR_1, int VAR_2)
{
  char const * const *VAR_3 = VAR_0->exclude;
  int VAR_4 = VAR_0->exclude_count;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    if (FUNC_0 (VAR_3[VAR_5], VAR_1, VAR_2) == 0)
      return 1;

  return 0;
}
