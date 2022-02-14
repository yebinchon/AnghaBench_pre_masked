
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union cpu_time_count {int dummy; } cpu_time_count ;
struct task_struct {int exit_state; int * signal; } ;
struct TYPE_4__ {scalar_t__ sched; } ;
struct TYPE_5__ {TYPE_1__ expires; struct task_struct* task; } ;
struct TYPE_6__ {TYPE_2__ cpu; } ;
struct k_itimer {int it_overrun_last; int it_overrun; int it_requeue_pending; int it_clock; TYPE_3__ it; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct k_itimer*,union cpu_time_count) ;
 int FUNC_2 (struct k_itimer*,union cpu_time_count) ;
 int FUNC_3 (struct k_itimer*,union cpu_time_count) ;
 int FUNC_4 (int ,struct task_struct*,union cpu_time_count*) ;
 int FUNC_5 (int ,struct task_struct*,union cpu_time_count*) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 scalar_t__ FUNC_10 (int ) ;

void FUNC_11(struct k_itimer *VAR_1)
{
 struct task_struct *VAR_2 = VAR_1->it.cpu.task;
 union cpu_time_count VAR_3;

 if (FUNC_10(VAR_2 == ((void*)0)))



  goto out;




 if (FUNC_0(VAR_1->it_clock)) {
  FUNC_4(VAR_1->it_clock, VAR_2, &VAR_3);
  FUNC_2(VAR_1, VAR_3);
  if (FUNC_10(VAR_2->exit_state)) {
   FUNC_3(VAR_1, VAR_3);
   goto out;
  }
  FUNC_7(&VAR_0);
 } else {
  FUNC_7(&VAR_0);
  if (FUNC_10(VAR_2->signal == ((void*)0))) {




   FUNC_6(VAR_2);
   VAR_1->it.cpu.task = VAR_2 = ((void*)0);
   VAR_1->it.cpu.expires.sched = 0;
   goto out_unlock;
  } else if (FUNC_10(VAR_2->exit_state) && FUNC_9(VAR_2)) {





   FUNC_3(VAR_1, VAR_3);
   goto out_unlock;
  }
  FUNC_5(VAR_1->it_clock, VAR_2, &VAR_3);
  FUNC_2(VAR_1, VAR_3);

 }




 FUNC_1(VAR_1, VAR_3);

out_unlock:
 FUNC_8(&VAR_0);

out:
 VAR_1->it_overrun_last = VAR_1->it_overrun;
 VAR_1->it_overrun = -1;
 ++VAR_1->it_requeue_pending;
}
