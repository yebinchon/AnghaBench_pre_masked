
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_0)
{
  char *VAR_1, *VAR_2;
  int VAR_3;

  VAR_2 = FUNC_5 (VAR_0);
  VAR_1 = FUNC_4 (VAR_2, '=');
  if (!VAR_1)
    FUNC_0 ("%s: --param arguments should be of the form NAME=VALUE", VAR_2);
  else
    {
      VAR_3 = FUNC_2 (VAR_1 + 1);
      if (VAR_3 == -1)
 FUNC_0 ("invalid --param value %qs", VAR_1 + 1);
      else
 {
   *VAR_1 = '\0';
   FUNC_3 (VAR_2, VAR_3);
 }
    }

  FUNC_1 (VAR_2);
}
