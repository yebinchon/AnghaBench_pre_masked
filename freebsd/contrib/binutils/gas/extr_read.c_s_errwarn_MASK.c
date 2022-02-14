
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_0 ;
 int FUNC_6 () ;

void
FUNC_7 (int VAR_1)
{
  int VAR_2;





  char *VAR_3
    = (VAR_1 ? FUNC_0(".error directive invoked in source file")
       : FUNC_0(".warning directive invoked in source file"));

  if (!FUNC_6 ())
    {
      if (*VAR_0 != '\"')
 {
   FUNC_1 (FUNC_0("%s argument must be a string"),
    VAR_1 ? ".error" : ".warning");
   FUNC_5 ();
   return;
 }

      VAR_3 = FUNC_3 (&VAR_2);
      if (VAR_3 == ((void*)0))
 return;
    }

  if (VAR_1)
    FUNC_1 ("%s", VAR_3);
  else
    FUNC_2 ("%s", VAR_3);
  FUNC_4 ();
}
