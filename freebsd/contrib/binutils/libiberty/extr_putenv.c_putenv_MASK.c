
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char const* const,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

int
FUNC_5 (const char *VAR_0)
{
  const char *const VAR_1 = FUNC_3 (VAR_0, '=');

  if (VAR_1)
    {
      char *VAR_2 = (char *) FUNC_0 (VAR_1 - VAR_0 + 1);
      FUNC_1 (VAR_2, VAR_0, VAR_1 - VAR_0);
      VAR_2[VAR_1 - VAR_0] = '\0';
      return FUNC_2 (VAR_2, VAR_1 + 1, 1);
    }

  FUNC_4 (VAR_0);
  return 0;
}
