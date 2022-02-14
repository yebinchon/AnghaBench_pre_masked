
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char const*,char*,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* VAR_1 ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_7 (char *VAR_2)
{
  char VAR_3;
  char *VAR_4, *VAR_5;
  const char *VAR_6;
  int VAR_7;

  for (;;)
    {
      VAR_3 = VAR_2[0];
      if (VAR_3 != '@' && VAR_3 != '$')
 break;

      for (VAR_7 = 0;
    (VAR_2[VAR_7 + 1] != 0 && !FUNC_0 (VAR_2[VAR_7 + 1]));
    VAR_7++)
 ;

      VAR_4 = (char *) FUNC_1 (VAR_7 + 1);
      FUNC_6 (VAR_4, &VAR_2[1], VAR_7);
      VAR_4[VAR_7] = 0;

      if (VAR_3 == '@')
 {
   VAR_6 = FUNC_4 (VAR_4);
   if (VAR_6 == 0)
     VAR_6 = VAR_1;
 }
      else
 VAR_6 = FUNC_5 (VAR_4);

      if (VAR_6 == 0)
 VAR_6 = VAR_0;






      VAR_5 = VAR_2;
      VAR_2 = FUNC_2 (VAR_6, &VAR_2[VAR_7 + 1], ((void*)0));
      FUNC_3 (VAR_5);
    }

  return VAR_2;
}
