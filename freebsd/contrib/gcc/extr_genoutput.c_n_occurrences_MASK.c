
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0 (int VAR_0, const char *VAR_1)
{
  int VAR_2 = 0;

  if (VAR_1 == 0 || *VAR_1 == '\0')
    return -1;

  while (*VAR_1)
    VAR_2 += (*VAR_1++ == VAR_0);

  return VAR_2;
}
