
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (scalar_t__,int*,int ) ;

int
FUNC_10()
{
 pid_t VAR_2, VAR_3 = FUNC_7();
 int VAR_4;

 for (;;) {
  if ((VAR_2 = FUNC_6()) == 0)
   FUNC_3(VAR_3);

  while (FUNC_9(VAR_2, &VAR_4, VAR_0) != VAR_2)
   continue;

  if (FUNC_1(VAR_4)) {




   FUNC_4(FUNC_0(VAR_4));
  }




  FUNC_8("badioctl: child died on signal %d; respawning.\n",
      FUNC_2(VAR_4));
  FUNC_5(VAR_1);
 }


 return (0);
}
