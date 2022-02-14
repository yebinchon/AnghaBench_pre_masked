
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int*) ;
 int FUNC_4 () ;
 char* VAR_0 ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (int) ;

__attribute__((used)) static char *
FUNC_9 (void)
{
  char *VAR_1;

  FUNC_0 ();
  if (*VAR_0 == '"')
    {
      int VAR_2;

      VAR_1 = FUNC_3 (&VAR_2);
      if (VAR_1 == ((void*)0))
 {
   FUNC_4 ();
   return ((void*)0);
 }
    }
  else
    {
      char *VAR_3 = VAR_0;

      while (0 == FUNC_6 ("\n\t,; ", *VAR_3))
 VAR_3++;
      if (VAR_3 == VAR_0)
 {
   FUNC_2 (FUNC_1("missing name"));
   FUNC_4 ();
   return ((void*)0);
 }

      VAR_1 = FUNC_8 (VAR_3 - VAR_0 + 1);
      FUNC_5 (VAR_1, VAR_0, VAR_3 - VAR_0);
      VAR_1[VAR_3 - VAR_0] = '\0';



      VAR_0 = VAR_3;
    }
  FUNC_0 ();
  return VAR_1;
}
