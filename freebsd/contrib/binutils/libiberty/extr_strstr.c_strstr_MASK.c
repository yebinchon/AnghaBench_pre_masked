
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t const) ;

char *
FUNC_3 (const char *VAR_0, const char *VAR_1)
{
  const char *VAR_2 = VAR_0;
  const size_t VAR_3 = FUNC_1 (VAR_1);

  for (; (VAR_2 = FUNC_0 (VAR_2, *VAR_1)) != 0; VAR_2++)
    {
      if (FUNC_2 (VAR_2, VAR_1, VAR_3) == 0)
 return (char *)VAR_2;
    }
  return (0);
}
