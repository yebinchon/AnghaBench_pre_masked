
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct thread {int td_proc; } ;
struct linux_sched_rr_get_interval_args {scalar_t__ pid; int interval; } ;
struct l_timespec {int dummy; } ;
typedef int lts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct l_timespec*,int ,int) ;
 int FUNC_2 (struct thread*,struct thread*,struct timespec*) ;
 struct thread* FUNC_3 (struct thread*,scalar_t__,int) ;
 int FUNC_4 (struct l_timespec*,struct timespec*) ;

int
FUNC_5(struct thread *VAR_2,
    struct linux_sched_rr_get_interval_args *VAR_3)
{
 struct timespec VAR_4;
 struct l_timespec VAR_5;
 struct thread *VAR_6;
 int VAR_7;





 if (VAR_3->pid < 0)
  return (VAR_0);

 VAR_6 = FUNC_3(VAR_2, VAR_3->pid, -1);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_4);
 FUNC_0(VAR_6->td_proc);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_4(&VAR_5, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);
 return (FUNC_1(&VAR_5, VAR_3->interval, sizeof(VAR_5)));
}
