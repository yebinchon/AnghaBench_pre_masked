
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cleanup {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct cleanup*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (scalar_t__) ;
 char* FUNC_6 () ;
 long FUNC_7 () ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 struct cleanup* FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (char*,long,char,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (scalar_t__,char*) ;
 int FUNC_13 (scalar_t__,char*) ;

void
FUNC_14 (void)
{
  struct cleanup *VAR_6;
  char *VAR_7;
  int VAR_8 = FUNC_0 (VAR_4);
  long VAR_9;



  extern int VAR_10;
  extern int VAR_11;

  while (VAR_0 && !FUNC_5 (VAR_0))
    {
      if (&FUNC_13 && VAR_0 == VAR_4)
 FUNC_13) (VAR_0, FUNC_6 ());

      VAR_3 = 0;
      if (VAR_0 == VAR_4 && VAR_8)
 FUNC_10 ();
      VAR_6 = FUNC_8 (VAR_2, 0);


      VAR_7 = FUNC_2 (VAR_0 == VAR_4 ?
        FUNC_6 () : (char *) ((void*)0),
        VAR_0 == VAR_4, "prompt");
      if (VAR_7 == 0)
 return;

      VAR_9 = FUNC_7 ();

      if (VAR_11)
 {




 }

      FUNC_4 (VAR_7, VAR_0 == VAR_4);

      FUNC_1 (&VAR_5);
      FUNC_3 (VAR_6);

      if (VAR_10)
 {
   long VAR_12 = FUNC_7 () - VAR_9;

   FUNC_9 ("Command execution time: %ld.%06ld\n",
        VAR_12 / 1000000, VAR_12 % 1000000);
 }

      if (VAR_11)
 {
 }
    }
}
