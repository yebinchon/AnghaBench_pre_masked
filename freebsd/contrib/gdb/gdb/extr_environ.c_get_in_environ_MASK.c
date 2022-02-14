
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct environ {char** vector; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

char *
FUNC_2 (const struct environ *VAR_0, const char *VAR_1)
{
  int VAR_2 = FUNC_0 (VAR_1);
  char **VAR_3 = VAR_0->vector;
  char *VAR_4;

  for (; (VAR_4 = *VAR_3) != ((void*)0); VAR_3++)
    if (FUNC_1 (VAR_4, VAR_1, VAR_2) == 0 && VAR_4[VAR_2] == '=')
      return &VAR_4[VAR_2 + 1];

  return 0;
}
