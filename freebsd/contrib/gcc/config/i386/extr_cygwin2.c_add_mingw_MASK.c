
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7 (void)
{
  char **VAR_2;
  char *VAR_3;
  for (VAR_2 = VAR_1; *VAR_2; VAR_2++)
    {
      int VAR_4 = 0;
      while ((VAR_3 = FUNC_6 (*VAR_2, "-cygwin")))
 {
   char *VAR_5 = VAR_3 + sizeof ("-cygwin") - 1;
   FUNC_2 (VAR_5 + 1, VAR_5, FUNC_5 (VAR_5));
   FUNC_1 (VAR_3, "-mingw32", sizeof("-mingw32") - 1);
   VAR_3 = ++VAR_5;
   while (FUNC_0 (*VAR_3))
     VAR_3++;
   FUNC_4 (VAR_5, VAR_3);
   VAR_4 = 1;
 }
      if (!VAR_4 && !FUNC_6 (*VAR_2, "mingw"))
 FUNC_3 (*VAR_2, VAR_0);
    }
}
