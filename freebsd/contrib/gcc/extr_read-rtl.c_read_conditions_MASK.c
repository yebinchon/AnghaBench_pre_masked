
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char,int) ;
 int FUNC_3 (char*,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void
FUNC_7 (FILE *VAR_0, char *VAR_1)
{
  int VAR_2;

  VAR_2 = FUNC_5 (VAR_0);
  if (VAR_2 != '[')
    FUNC_2 (VAR_0, '[', VAR_2);

  while ( (VAR_2 = FUNC_5 (VAR_0)) != ']')
    {
      char *VAR_3;
      int VAR_4;

      if (VAR_2 != '(')
 FUNC_2 (VAR_0, '(', VAR_2);

      FUNC_3 (VAR_1, VAR_0);
      FUNC_6 (VAR_0, VAR_1);
      VAR_4 = FUNC_1 (VAR_1);

      VAR_2 = FUNC_5 (VAR_0);
      if (VAR_2 != '"')
 FUNC_2 (VAR_0, '"', VAR_2);
      VAR_3 = FUNC_4 (VAR_0);

      VAR_2 = FUNC_5 (VAR_0);
      if (VAR_2 != ')')
 FUNC_2 (VAR_0, ')', VAR_2);

      FUNC_0 (VAR_3, VAR_4);
    }
  VAR_2 = FUNC_5 (VAR_0);
  if (VAR_2 != ')')
    FUNC_2 (VAR_0, ')', VAR_2);
}
