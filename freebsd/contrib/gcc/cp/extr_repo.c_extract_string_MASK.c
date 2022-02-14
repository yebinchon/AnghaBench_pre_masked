
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_2 (char **VAR_1)
{
  char *VAR_2 = *VAR_1;
  int VAR_3 = 0;
  int VAR_4 = 0;

  for (;;)
    {
      char VAR_5 = *VAR_2;
      if (VAR_5 == '\0')
 break;
      ++VAR_2;
      if (VAR_3)
 {
   FUNC_0 (&VAR_0, VAR_5);
   VAR_3 = 0;
 }
      else if (! VAR_4 && VAR_5 == ' ')
 break;
      else if (! VAR_4 && VAR_5 == '\\')
 VAR_3 = 1;
      else if (VAR_5 == '\'')
 VAR_4 = !VAR_4;
      else
 FUNC_0 (&VAR_0, VAR_5);
    }

  FUNC_0 (&VAR_0, '\0');
  *VAR_1 = VAR_2;
  return (char *) FUNC_1 (&VAR_0);
}
