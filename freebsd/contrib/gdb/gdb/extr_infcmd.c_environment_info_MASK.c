
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_1, int VAR_2)
{
  if (VAR_1)
    {
      char *VAR_3 = FUNC_1 (VAR_0, VAR_1);
      if (VAR_3)
 {
   FUNC_2 (VAR_1);
   FUNC_2 (" = ");
   FUNC_2 (VAR_3);
   FUNC_2 ("\n");
 }
      else
 {
   FUNC_2 ("Environment variable \"");
   FUNC_2 (VAR_1);
   FUNC_2 ("\" not defined.\n");
 }
    }
  else
    {
      char **VAR_4 = FUNC_0 (VAR_0);
      while (*VAR_4)
 {
   FUNC_2 (*VAR_4++);
   FUNC_2 ("\n");
 }
    }
}
