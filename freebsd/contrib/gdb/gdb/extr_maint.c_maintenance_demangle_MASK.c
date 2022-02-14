
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_3, int VAR_4)
{
  char *VAR_5;

  if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
    {
      FUNC_1 ("\"maintenance demangle\" takes an argument to demangle.\n");
    }
  else
    {
      VAR_5 = FUNC_0 (VAR_2, VAR_3,
         VAR_0 | VAR_1);
      if (VAR_5 != ((void*)0))
 {
   FUNC_1 ("%s\n", VAR_5);
   FUNC_2 (VAR_5);
 }
      else
 {
   FUNC_1 ("Can't demangle \"%s\"\n", VAR_3);
 }
    }
}
