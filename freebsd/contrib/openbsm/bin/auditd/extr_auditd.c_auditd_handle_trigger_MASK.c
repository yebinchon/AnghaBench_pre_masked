
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timezone {int dummy; } ;
struct timeval {scalar_t__ tv_sec; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct timeval*,struct timezone*) ;
 int VAR_4 ;

void
FUNC_12(int VAR_5)
{
 static int VAR_6, VAR_7;
 static time_t VAR_8;
 struct timeval VAR_9;
 struct timezone VAR_10;
 time_t VAR_11;
 int VAR_12;
 int VAR_13 = 0;





 if (FUNC_11(&VAR_9, &VAR_10) == 0) {
  VAR_11 = (time_t)VAR_9.tv_sec;
  switch (VAR_5) {
  case 132:
  case 131:





   if ((VAR_5 == VAR_6) &&
       (VAR_11 < (VAR_8 + VAR_2))) {
    if (VAR_11 >= (VAR_7 + VAR_2))
     FUNC_5(
         "Suppressing duplicate trigger %d",
         VAR_5);
    return;
   }
   VAR_7 = VAR_11;
   break;

  case 129:
  case 128:
  case 130:
  case 135:
  case 133:



   break;
  }






  VAR_6 = VAR_5;
  VAR_8 = VAR_11;
 }

 VAR_12 = FUNC_3();




 switch(VAR_5) {
 case 132:
  FUNC_6("Got low space trigger");
  if (FUNC_9() == -1)
   FUNC_4("Error swapping audit file");
  break;

 case 131:
  FUNC_6("Got no space trigger");
  if (FUNC_9() == -1)
   FUNC_4("Error swapping audit file");
  break;

 case 129:
 case 128:
  FUNC_5("Got open new trigger from %s", VAR_5 ==
      129 ? "kernel" : "user");
  if (VAR_12 == VAR_1 && FUNC_9() == -1)
   FUNC_4("Error swapping audit file");
  break;

 case 130:
  FUNC_5("Got read file trigger");
  if (VAR_12 == VAR_1) {
   if (FUNC_1() == -1)
    FUNC_4("Error setting audit controls");
   else if (FUNC_9() == -1)
    FUNC_4("Error swapping audit file");
  }
  break;

 case 135:
  FUNC_5("Got close and die trigger");
  if (VAR_12 == VAR_1)
   VAR_13 = FUNC_8();




  if (!VAR_4) {
   FUNC_5("auditd exiting.");
   FUNC_10 (VAR_13);
  }
  break;

 case 133:
  FUNC_5("Got audit initialize trigger");
  if (VAR_12 == VAR_0)
   FUNC_0();
  break;

 case 134:
  FUNC_5("Got audit expire trails trigger");
  VAR_13 = FUNC_2(VAR_3);
  if (VAR_13)
   FUNC_4("auditd_expire_trails(): %s",
       FUNC_7(VAR_13));
  break;

 default:
  FUNC_4("Got unknown trigger %d", VAR_5);
  break;
 }
}
