
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 char* FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 () ;
 int VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 char* FUNC_15 (int ) ;
 int FUNC_16 (char**) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_19 () ;
 int FUNC_20 (int ,char*,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,char*) ;
 int VAR_5 ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;

__attribute__((used)) static void
FUNC_26 (char *VAR_6, int VAR_7)
{
  char *VAR_8;

  FUNC_4 ();

  if (! FUNC_11 (VAR_2, VAR_3) && VAR_4)
    {
      if (VAR_7
   && !FUNC_12 ("The program being debugged has been started already.\nStart it from the beginning? "))

 FUNC_6 ("Program not restarted.");
      FUNC_19 ();



      FUNC_9 ();
    }

  FUNC_2 ();


  FUNC_10 ();

  FUNC_3 (((void*)0));
  FUNC_13 ();
  FUNC_14 ();

  VAR_8 = (char *) FUNC_7 (0);
  if (!VAR_6)
    {
      if (VAR_0 && FUNC_17 ())
 FUNC_1 ();
    }
  else
    {
      int VAR_9 = FUNC_16 (&VAR_6);



      if (VAR_0 && VAR_9 && !FUNC_17 ())
 FUNC_6 ("Asynchronous execution not supported on this target.");



      if (VAR_0 && !VAR_9 && FUNC_17 ())
 {

   FUNC_1 ();
 }


      if (VAR_6)
 {
          char *VAR_10 = FUNC_15 (FUNC_25 (VAR_6));
          FUNC_24 (VAR_10);
 }
    }

  if (VAR_7)
    {
      FUNC_20 (VAR_5, ((void*)0), "Starting program");
      FUNC_23 (VAR_5, ": ");
      if (VAR_8)
 FUNC_20 (VAR_5, "execfile", VAR_8);
      FUNC_22 (VAR_5, 1);


      FUNC_20 (VAR_5, "infargs", FUNC_8 ());
      FUNC_23 (VAR_5, "\n");
      FUNC_21 (VAR_5);
    }



  FUNC_18 (VAR_8, FUNC_8 (),
     FUNC_5 (VAR_1));
}
