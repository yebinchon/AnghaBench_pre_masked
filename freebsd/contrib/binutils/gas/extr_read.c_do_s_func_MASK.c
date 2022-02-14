
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,char*,...) ;
 char FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 char FUNC_6 () ;
 int FUNC_7 () ;
 char* VAR_2 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int VAR_3 ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11 (int VAR_4, const char *VAR_5)
{



  static char *VAR_6;
  static char *VAR_7;

  if (VAR_4)
    {
      if (VAR_6 == ((void*)0))
 {
   FUNC_2 (FUNC_1("missing .func"));
   FUNC_7 ();
   return;
 }

      if (VAR_1 == VAR_0)
 FUNC_8 (VAR_6, VAR_7);

      VAR_6 = VAR_7 = ((void*)0);
    }
  else
    {
      char *VAR_8, *VAR_9;
      char VAR_10, VAR_11;

      if (VAR_6 != ((void*)0))
 {
   FUNC_2 (FUNC_1(".endfunc missing for previous .func"));
   FUNC_7 ();
   return;
 }

      VAR_8 = VAR_2;
      VAR_10 = FUNC_6 ();
      VAR_8 = FUNC_10 (VAR_8);
      *VAR_2 = VAR_10;
      FUNC_0 ();
      if (*VAR_2 != ',')
 {
   if (VAR_5)
     FUNC_3 (&VAR_9, "%s%s", VAR_5, VAR_8);
   else
     {
       char VAR_12 = FUNC_4 (VAR_3);


       if (VAR_12)
  FUNC_3 (&VAR_9, "%c%s", VAR_12, VAR_8);
       else
  VAR_9 = VAR_8;
     }
 }
      else
 {
   ++VAR_2;
   FUNC_0 ();
   VAR_9 = VAR_2;
   VAR_11 = FUNC_6 ();
   VAR_9 = FUNC_10 (VAR_9);
   *VAR_2 = VAR_11;
 }

      if (VAR_1 == VAR_0)
 FUNC_9 (VAR_8, VAR_9);

      VAR_6 = VAR_8;
      VAR_7 = VAR_9;
    }

  FUNC_5 ();
}
