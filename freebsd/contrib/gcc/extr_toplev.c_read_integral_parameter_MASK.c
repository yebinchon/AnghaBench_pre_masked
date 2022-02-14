
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

int
FUNC_3 (const char *VAR_0, const char *VAR_1, const int VAR_2)
{
  const char *VAR_3 = VAR_0;

  while (*VAR_3)
    {
      if (FUNC_0 (*VAR_3))
 VAR_3++;
      else
 break;
    }

  if (*VAR_3 != 0)
    {
      if (VAR_1 != 0)
 FUNC_2 ("invalid option argument %qs", VAR_1);
      return VAR_2;
    }

  return FUNC_1 (VAR_0);
}
