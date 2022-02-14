
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 () ;

int
FUNC_1 (char *VAR_0, int VAR_1)
{
  int VAR_2;
  char VAR_3;

  VAR_2 = 0;
  while (VAR_2 < VAR_1)
    {
      VAR_3 = FUNC_0 ();

      if (VAR_3 == 0)
 return VAR_2;
      VAR_0[VAR_2] = VAR_3;
      VAR_2++;

    }
  return VAR_2;
}
