
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 () ;
 char* VAR_2 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 char* FUNC_12 (int,char*,int*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*,unsigned int) ;
 int VAR_3 ;

void
FUNC_15 (
     register int VAR_4 )
{
  register char *VAR_5;
  int VAR_6;
  register char *VAR_7;
  char VAR_8[VAR_0];

  if (FUNC_10 ())
    {
      FUNC_5 ();
      return;
    }





  do
    {

      FUNC_1 ();





      if (VAR_2[0] == '0'
   && FUNC_0 (VAR_2[1]))
 VAR_2 += 2;



      if (VAR_2[0] == ':')
 {
   ++VAR_2;
   VAR_6 = FUNC_8 (VAR_4, VAR_8);
   if (VAR_6 < 0)
     {
       FUNC_9 ();
       return;
     }
 }
      else
 {
   VAR_7 = FUNC_12 (VAR_4, VAR_8, &VAR_6);
   FUNC_11 (VAR_6 <= VAR_0);
   FUNC_11 (VAR_6 > 0);
   if (VAR_7)
     {
       FUNC_3 (FUNC_2("bad floating literal: %s"), VAR_7);
       FUNC_9 ();
       return;
     }
 }

      if (!VAR_3)
 {
   int VAR_9;

   VAR_9 = 1;
   while (--VAR_9 >= 0)
     {
       VAR_5 = FUNC_7 (VAR_6);
       FUNC_14 (VAR_5, VAR_8, (unsigned int) VAR_6);
     }
 }
      FUNC_1 ();
    }
  while (*VAR_2++ == ',');


  --VAR_2;
  FUNC_5 ();
}
