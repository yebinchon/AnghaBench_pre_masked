
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_7 (FILE *VAR_3, int VAR_4)
{
  char *VAR_5;
  int VAR_6 = 0;
  int VAR_7, VAR_8;

  VAR_7 = FUNC_5 (VAR_3);
  if (VAR_7 == '(')
    {
      VAR_6 = 1;
      VAR_7 = FUNC_5 (VAR_3);
    }

  VAR_8 = VAR_1;
  if (VAR_7 == '"')
    VAR_5 = FUNC_4 (VAR_3);
  else if (VAR_7 == '{')
    {
      if (VAR_4)
 FUNC_2 (&VAR_2, '*');
      VAR_5 = FUNC_3 (VAR_3);
    }
  else
    FUNC_1 (VAR_3, "expected `\"' or `{', found `%c'", VAR_7);

  if (VAR_6)
    {
      VAR_7 = FUNC_5 (VAR_3);
      if (VAR_7 != ')')
 FUNC_0 (VAR_3, ')', VAR_7);
    }

  FUNC_6 (VAR_5, VAR_0, VAR_8);
  return VAR_5;
}
