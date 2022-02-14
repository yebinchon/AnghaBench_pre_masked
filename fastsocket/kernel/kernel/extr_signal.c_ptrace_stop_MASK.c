
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int siginfo_t ;
struct TYPE_9__ {int exit_code; int * last_siginfo; TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_8__ {int siglock; } ;
struct TYPE_7__ {scalar_t__ group_stop_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_4 ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(int VAR_5, int VAR_6, siginfo_t *VAR_7)
{
 if (FUNC_2(VAR_5, VAR_7)) {
  FUNC_13(&VAR_3->sighand->siglock);
  FUNC_1(VAR_5, VAR_7);
  FUNC_12(&VAR_3->sighand->siglock);
  if (FUNC_11(VAR_3))
   return;
 }





 if (VAR_3->signal->group_stop_count > 0)
  --VAR_3->signal->group_stop_count;

 VAR_3->last_siginfo = VAR_7;
 VAR_3->exit_code = VAR_5;


 FUNC_0(VAR_2);
 FUNC_13(&VAR_3->sighand->siglock);
 FUNC_7(&VAR_4);
 if (FUNC_4()) {
  FUNC_3(VAR_3, VAR_0);






  FUNC_5();
  FUNC_8(&VAR_4);
  FUNC_6();
  FUNC_10();
 } else {




  FUNC_0(VAR_1);
  if (VAR_6)
   VAR_3->exit_code = 0;
  FUNC_8(&VAR_4);
 }






 FUNC_14();






 FUNC_12(&VAR_3->sighand->siglock);
 VAR_3->last_siginfo = ((void*)0);






 FUNC_9(VAR_3);
}
