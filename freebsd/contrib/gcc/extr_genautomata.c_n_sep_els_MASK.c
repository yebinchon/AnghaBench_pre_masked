
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (const char *VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;
  int VAR_4;

  if (*VAR_0 == '\0')
    return 0;

  for (VAR_4 = 0, VAR_3 = 1; *VAR_0; VAR_0++)
    if (VAR_2 && *VAR_0 == '(')
      VAR_4++;
    else if (VAR_2 && *VAR_0 == ')')
      VAR_4--;
    else if (VAR_4 == 0 && *VAR_0 == VAR_1)
      VAR_3++;

  return (VAR_4 != 0 ? -1 : VAR_3);
}
