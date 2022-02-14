
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0)
{
  int VAR_1 = 0;
  const char *VAR_2;

  for (VAR_2 = VAR_0; *VAR_2; VAR_2++)
    {
      if (*VAR_2 == '\n')
        {
          VAR_1++;
          if (*(VAR_2 + 1) == '\r')
            VAR_2++;
        }
      else if (*VAR_2 == '\r')
        {
          VAR_1++;
          if (*(VAR_2 + 1) == '\n')
            VAR_2++;
        }
    }

  return VAR_1;
}
