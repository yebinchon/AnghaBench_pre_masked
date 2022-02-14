
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10 (void)
{
  if (!VAR_4)
    return;

  VAR_1++;

  if (VAR_1 >= 2)
    {
      VAR_1 = 0;

      FUNC_8 ();

      if (FUNC_2 ("Interrupted while waiting for the program.\nGive up (and stop debugging it)? "))

 {



   VAR_4 = 0;
   FUNC_0 ();

   FUNC_1 ("Ending remote MIPS debugging.\n");
   FUNC_6 ();

   FUNC_9 (VAR_0);
 }

      FUNC_7 ();
    }

  if (VAR_5 > 0)
    FUNC_1 ("Sending break\n");

  FUNC_3 (VAR_2);
}
