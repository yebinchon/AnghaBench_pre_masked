
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,void (*) (int)) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_4(
     int VAR_11
     )
{
 static unsigned long VAR_12 = 0;


 (void)FUNC_2(VAR_6, FUNC_4);


 FUNC_1();

 VAR_10 += 1<<VAR_0;

 if ((VAR_10 - VAR_8) > VAR_3)
 {



  if (VAR_9 == VAR_7)
  {



   VAR_9 = VAR_5;
   FUNC_3(VAR_1, "DCF77 reception lost (timeout)");
   VAR_12 = VAR_10;
  }
  else



      if ((VAR_10 - VAR_12) > VAR_4)
      {
       FUNC_3(VAR_2, "still not synchronized to DCF77 - check receiver/signal");
       VAR_12 = VAR_10;
      }
 }


 (void) FUNC_0(1<<VAR_0);

}
