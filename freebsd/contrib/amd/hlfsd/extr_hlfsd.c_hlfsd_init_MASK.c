
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; int (* sa_handler ) (int ) ;} ;
struct itimerval {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int VAR_9 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_16 (int ,int *,struct itimerval*) ;
 int FUNC_17 (int ,struct sigaction*,int *) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,int (*) (int )) ;
 int VAR_12 ;
 int FUNC_21 () ;

__attribute__((used)) static void
FUNC_22(void)
{
  int VAR_13 = 0;







  FUNC_12(VAR_8, "initializing hlfsd file handles");
  FUNC_9();




  if (FUNC_2(VAR_0))
    VAR_13 = FUNC_7();

  if (VAR_13 < 0)
    FUNC_6("fork: %m");

  if (VAR_13 != 0) {
    VAR_9 = VAR_13;
    FUNC_1();
    return;
  }






  FUNC_12(VAR_8, "initializing home directory database");
  FUNC_13();
  FUNC_12(VAR_8, "home directory database initialized");

  VAR_9 = VAR_11 = FUNC_1();
  FUNC_20(VAR_2, FUNC_15);
  FUNC_20(VAR_4, FUNC_15);
  FUNC_20(VAR_5, FUNC_4);
  FUNC_20(VAR_3, FUNC_10);
  FUNC_20(VAR_6, FUNC_0);



  if (FUNC_16(VAR_1, &VAR_10, (struct itimerval *) ((void*)0)) < 0)
    FUNC_6("setitimer: %m");

  FUNC_5(&VAR_12);






  if (FUNC_2(VAR_0)) {



    FUNC_3();





    if (FUNC_11(FUNC_8(), VAR_7) < 0)
      FUNC_6("kill: %m");
    FUNC_12(VAR_8, "starting svc_run");
    FUNC_21();
    FUNC_4(0);
  }

}
