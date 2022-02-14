
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 unsigned int FUNC_5 () ;
 int FUNC_6 () ;
 int* VAR_2 ;
 int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 unsigned int FUNC_12 () ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,char*) ;

void
FUNC_15 (

   register int VAR_4 )
{
  register unsigned int VAR_5;
  char *VAR_6;
  if (FUNC_8 ())
    {
      VAR_5 = 0;
      ++VAR_2;
    }
  else
    {
      VAR_5 = ',';
    }


  if (VAR_3 == VAR_0)
    {
      FUNC_3 (FUNC_2("strings must be placed into a section"));
      VAR_5 = 0;
      FUNC_6 ();
    }

  while (VAR_5 == ',' || VAR_5 == '<' || VAR_5 == '"')
    {
      FUNC_1 ();
      switch (*VAR_2)
 {
 case '\"':
   ++VAR_2;
   VAR_6 = VAR_2;
   while (FUNC_7 (VAR_5 = FUNC_12 ()))
     {
       FUNC_0 (VAR_5);
     }
   if (VAR_4)
     {
       FUNC_0 (0);
     }
   FUNC_9 (VAR_2[-1] == '\"');
   break;
 case '<':
   VAR_2++;
   VAR_5 = FUNC_5 ();
   FUNC_0 (VAR_5);
   if (*VAR_2 != '>')
     {
       FUNC_3 (FUNC_2("expected <nn>"));
     }
   VAR_2++;
   break;
 case ',':
   VAR_2++;
   break;
 }
      FUNC_1 ();
      VAR_5 = *VAR_2;
    }

  FUNC_4 ();
}
