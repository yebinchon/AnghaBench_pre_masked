
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4 (char **VAR_0, const char *VAR_1,
    const char *VAR_2)
{
  const char *VAR_3, *VAR_4, *VAR_5 = 0;
  char *VAR_6;
  int VAR_7;

  VAR_4 = VAR_1;
  for (VAR_3 = VAR_1; *VAR_3; VAR_3++)
    {
      if (*VAR_3 == '/')
 VAR_4 = VAR_3 + 1;
      else if (*VAR_3 == '.')
 VAR_5 = VAR_3;
    }

  VAR_7 = FUNC_2 (VAR_4) + FUNC_2 (VAR_2) + 2;
  *VAR_0 = (char *) FUNC_3 (VAR_7);

  VAR_6 = *VAR_0;
  *VAR_6++ = '_';

  for (VAR_3 = VAR_4; *VAR_3; VAR_3++)
    {
      if (VAR_3 == VAR_5)
 {
   FUNC_1 (VAR_6, VAR_2);
   VAR_6 += FUNC_2 (VAR_2);
   break;
 }

      else if (FUNC_0 (*VAR_3))
 *VAR_6++ = *VAR_3;
    }

  if (VAR_5 == 0)
    FUNC_1 (VAR_6, VAR_2);
  else
    *VAR_6 = '\0';
}
