
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

char *
FUNC_1 (char *__restrict__ VAR_0, const char *__restrict__ VAR_1,
              size_t VAR_2)
{
  char *VAR_3 = VAR_0;
  const char *VAR_4 = VAR_1;
  char VAR_5;

  do
    {
      if (VAR_2-- == 0)
        FUNC_0 ();
      VAR_5 = *VAR_3++;
    }
  while (VAR_5 != '\0');

  ++VAR_2;
  VAR_3 -= 2;

  do
    {
      if (VAR_2-- == 0)
        FUNC_0 ();
      VAR_5 = *VAR_4++;
      *++VAR_3 = VAR_5;
    }
  while (VAR_5 != '\0');

  return VAR_0;
}
