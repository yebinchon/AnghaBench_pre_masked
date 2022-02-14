
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0, const char **VAR_1)
{
  const char *VAR_2 = VAR_0;
  const char *VAR_3 = 0;
  const char *VAR_4 = VAR_0;
  char VAR_5 = *VAR_4;
  while (VAR_5)
    {
      if (FUNC_0(VAR_5))
        {
          VAR_2 = VAR_4 + 1;
          VAR_3 = 0;
        }
      else if (VAR_5 == '.')
        VAR_3 = VAR_4;
      VAR_5 = *++VAR_4;
    }
  if (!VAR_3)
    VAR_3 = VAR_4;
  *VAR_1 = VAR_2;
  return VAR_3 - VAR_2;
}
