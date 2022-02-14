
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bpstat ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_8 (char**) ;
 scalar_t__ FUNC_9 () ;

void
FUNC_10 (char *VAR_4, int VAR_5)
{
  int VAR_6 = 0;
  VAR_0;


  if (VAR_4 != ((void*)0))
    VAR_6 = FUNC_8 (&VAR_4);



  if (VAR_2 && VAR_6 && !FUNC_9 ())
    FUNC_3 ("Asynchronous execution not supported on this target.");



  if (VAR_2 && !VAR_6 && FUNC_9 ())
    {

      FUNC_0 ();
    }



  if (VAR_4 != ((void*)0))
    {
      bpstat VAR_7 = VAR_3;
      int VAR_8 = FUNC_1 (&VAR_7);
      if (VAR_8 == 0 && VAR_5)
 {
   FUNC_5
     ("Not stopped at any breakpoint; argument ignored.\n");
 }
      while (VAR_8 != 0)
 {
   FUNC_7 (VAR_8,
       FUNC_4 (VAR_4) - 1,
       VAR_5);


   if (VAR_5)
     FUNC_5 ("  ");
   VAR_8 = FUNC_1 (&VAR_7);
 }
    }

  if (VAR_5)
    FUNC_5 ("Continuing.\n");

  FUNC_2 ();

  FUNC_6 ((CORE_ADDR) -1, VAR_1, 0);
}
