
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symlist {int dummy; } ;
typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,struct symlist**) ;
 int VAR_3 ;
 int FUNC_4 (int ,char const*,...) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (char const*,int ) ;
 scalar_t__ FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,char const*,unsigned int) ;
 int VAR_4 ;
 int FUNC_11 (int ) ;
 char* FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13 (const char *VAR_5, struct symlist **VAR_6)
{
  off_t VAR_7;
  FILE * VAR_8;
  char * VAR_9;
  char * VAR_10;
  unsigned int VAR_11;

  VAR_7 = FUNC_9 (VAR_5);
  if (VAR_7 == 0)
    {
      VAR_4 = 1;
      return;
    }

  VAR_10 = FUNC_12 (VAR_7 + 2);
  VAR_8 = FUNC_7 (VAR_5, VAR_1);
  if (VAR_8 == ((void*)0))
    FUNC_4 (FUNC_2("cannot open '%s': %s"), VAR_5, FUNC_11 (VAR_3));

  if (FUNC_8 (VAR_10, 1, VAR_7, VAR_8) == 0 || FUNC_6 (VAR_8))
    FUNC_4 (FUNC_2("%s: fread failed"), VAR_5);

  FUNC_5 (VAR_8);
  VAR_10 [VAR_7] = '\n';
  VAR_10 [VAR_7 + 1] = '\0';

  VAR_11 = 1;

  for (VAR_9 = VAR_10; * VAR_9 != '\0'; VAR_9 ++)
    {
      char * VAR_12;
      char * VAR_13;
      char * VAR_14;
      int VAR_15 = VAR_0;

      for (VAR_12 = VAR_9;; VAR_12 ++)
 {
   switch (* VAR_12)
     {
     case '\n':
       * VAR_12 = '\0';

       if (VAR_12[1] == '\r')
  ++ VAR_12;
       VAR_15 = VAR_2;
       break;

     case '\r':
       * VAR_12 = '\0';

       if (VAR_12[1] == '\n')
  ++ VAR_12;
       VAR_15 = VAR_2;
       break;

     case 0:
       VAR_15 = VAR_2;
       break;

     case '#':



       * VAR_12 = '\0';
       break;

     default:
       break;
     }

   if (VAR_15)
     break;
 }




      for (VAR_13 = VAR_9; FUNC_1 (* VAR_13); VAR_13 ++)
 ;
      for (VAR_14 = VAR_13;
    (! FUNC_1 (* VAR_14))
    && (! FUNC_0 (* VAR_14));
    VAR_14 ++)
 ;

      if (! FUNC_0 (* VAR_14))
 {
   char * VAR_16;

   for (VAR_16 = VAR_14 + 1; FUNC_1 (* VAR_16); VAR_16 ++)
     ;

   if (! FUNC_0 (* VAR_16))
     FUNC_10 (FUNC_2("%s:%d: Ignoring rubbish found on this line"),
         VAR_5, VAR_11);
 }

      * VAR_14 = '\0';

      if (VAR_14 > VAR_13)
 FUNC_3 (VAR_13, VAR_6);



      VAR_9 = VAR_12;
      VAR_11 ++;
    }
}
