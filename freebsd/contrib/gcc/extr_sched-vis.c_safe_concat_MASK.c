
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_0 (char *VAR_1, char *VAR_2, const char *VAR_3)
{
  char *VAR_4 = VAR_1 + VAR_0 - 2;
  int VAR_5;

  if (VAR_2 > VAR_4)
    {
      *VAR_4 = '\0';
      return VAR_4;
    }

  while (VAR_2 < VAR_4 && (VAR_5 = *VAR_3++) != '\0')
    *VAR_2++ = VAR_5;

  *VAR_2 = '\0';
  return VAR_2;
}
