
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0, bool *VAR_1)
{
  const char *VAR_2;

  VAR_2 = FUNC_0 (VAR_0);
  if (VAR_2 == ((void*)0))
    return;

  while (FUNC_2 ((unsigned char) *VAR_2))
    ++VAR_2;
  if (FUNC_3 (VAR_2, "true", 4) == 0)
    {
      *VAR_1 = 1;
      VAR_2 += 4;
    }
  else if (FUNC_3 (VAR_2, "false", 5) == 0)
    {
      *VAR_1 = 0;
      VAR_2 += 5;
    }
  else
    VAR_2 = "X";
  while (FUNC_2 ((unsigned char) *VAR_2))
    ++VAR_2;
  if (*VAR_2 != '\0')
    FUNC_1 ("Invalid value for environment variable %s", VAR_0);
}
