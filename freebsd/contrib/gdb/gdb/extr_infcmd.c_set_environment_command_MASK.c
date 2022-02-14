
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_1, int VAR_2)
{
  char *VAR_3, *VAR_4, *VAR_5;
  int VAR_6 = 0;

  if (VAR_1 == 0)
    FUNC_0 ("environment variable and value");


  VAR_3 = (char *) FUNC_4 (VAR_1, '=');
  VAR_4 = (char *) FUNC_4 (VAR_1, ' ');

  if (VAR_3 != 0 && VAR_4 != 0)
    {



      if (VAR_3 > VAR_4)
 while (*VAR_4 == ' ')
   VAR_4++;



      if (VAR_3 > VAR_4)
 VAR_3 = VAR_4 - 1;
    }
  else if (VAR_4 != 0 && VAR_3 == 0)
    VAR_3 = VAR_4;

  if (VAR_3 == VAR_1)
    FUNC_0 ("environment variable to set");

  if (VAR_3 == 0 || VAR_3[1] == 0)
    {
      VAR_6 = 1;
      if (VAR_3 == 0)
 VAR_3 = VAR_1 + FUNC_5 (VAR_1);
    }
  else
    {

      VAR_4 = VAR_3 + 1;
      while (*VAR_4 == ' ' || *VAR_4 == '\t')
 VAR_4++;
    }

  while (VAR_3 != VAR_1 && (VAR_3[-1] == ' ' || VAR_3[-1] == '\t'))
    VAR_3--;

  VAR_5 = FUNC_2 (VAR_1, VAR_3 - VAR_1);
  if (VAR_6)
    {
      FUNC_1 ("Setting environment variable ");
      FUNC_1 ("\"%s\" to null value.\n", VAR_5);
      FUNC_3 (VAR_0, VAR_5, "");
    }
  else
    FUNC_3 (VAR_0, VAR_5, VAR_4);
  FUNC_6 (VAR_5);
}
