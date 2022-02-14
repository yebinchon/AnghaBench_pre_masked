
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union cpu_time_count {scalar_t__ sched; } ;
struct task_struct {int exit_state; int * signal; } ;
struct TYPE_4__ {union cpu_time_count expires; union cpu_time_count incr; struct task_struct* task; } ;
struct TYPE_5__ {TYPE_1__ cpu; } ;
struct k_itimer {int it_sigev_notify; TYPE_2__ it; int it_clock; } ;
struct TYPE_6__ {int tv_sec; int tv_nsec; } ;
struct itimerspec {TYPE_3__ it_value; TYPE_3__ it_interval; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct k_itimer*,union cpu_time_count) ;
 int FUNC_2 (struct k_itimer*,union cpu_time_count) ;
 int FUNC_3 (int ,struct task_struct*,union cpu_time_count*) ;
 scalar_t__ FUNC_4 (int ,union cpu_time_count,union cpu_time_count) ;
 union cpu_time_count FUNC_5 (int ,union cpu_time_count,union cpu_time_count) ;
 int FUNC_6 (int ,struct task_struct*,union cpu_time_count*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,union cpu_time_count,TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct k_itimer *VAR_3, struct itimerspec *VAR_4)
{
 union cpu_time_count VAR_5;
 struct task_struct *VAR_6 = VAR_3->it.cpu.task;
 int VAR_7;




 FUNC_10(VAR_3->it_clock,
      VAR_3->it.cpu.incr, &VAR_4->it_interval);

 if (VAR_3->it.cpu.expires.sched == 0) {
  VAR_4->it_value.tv_sec = VAR_4->it_value.tv_nsec = 0;
  return;
 }

 if (FUNC_12(VAR_6 == ((void*)0))) {




 dead:
  FUNC_10(VAR_3->it_clock, VAR_3->it.cpu.expires,
       &VAR_4->it_value);
  return;
 }




 if (FUNC_0(VAR_3->it_clock)) {
  FUNC_3(VAR_3->it_clock, VAR_6, &VAR_5);
  VAR_7 = VAR_6->exit_state;
 } else {
  FUNC_8(&VAR_2);
  if (FUNC_12(VAR_6->signal == ((void*)0))) {





   FUNC_7(VAR_6);
   VAR_3->it.cpu.task = ((void*)0);
   VAR_3->it.cpu.expires.sched = 0;
   FUNC_9(&VAR_2);
   goto dead;
  } else {
   FUNC_6(VAR_3->it_clock, VAR_6, &VAR_5);
   VAR_7 = (FUNC_12(VAR_6->exit_state) &&
          FUNC_11(VAR_6));
  }
  FUNC_9(&VAR_2);
 }

 if ((VAR_3->it_sigev_notify & ~VAR_1) == VAR_0) {
  if (VAR_3->it.cpu.incr.sched == 0 &&
      FUNC_4(VAR_3->it_clock,
        VAR_3->it.cpu.expires, VAR_5)) {




   VAR_3->it.cpu.expires.sched = 0;
   VAR_4->it_value.tv_sec = VAR_4->it_value.tv_nsec = 0;
   return;
  }




  FUNC_1(VAR_3, VAR_5);
 }

 if (FUNC_12(VAR_7)) {





  FUNC_2(VAR_3, VAR_5);
  goto dead;
 }

 if (FUNC_4(VAR_3->it_clock, VAR_5, VAR_3->it.cpu.expires)) {
  FUNC_10(VAR_3->it_clock,
       FUNC_5(VAR_3->it_clock,
      VAR_3->it.cpu.expires, VAR_5),
       &VAR_4->it_value);
 } else {




  VAR_4->it_value.tv_nsec = 1;
  VAR_4->it_value.tv_sec = 0;
 }
}
