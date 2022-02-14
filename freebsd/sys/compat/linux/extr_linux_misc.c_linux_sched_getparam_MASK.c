
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct sched_param {int dummy; } ;
struct linux_sched_getparam_args {int param; int pid; } ;
typedef int sched_param ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sched_param*,int ,int) ;
 int FUNC_2 (struct thread*,struct thread*,struct sched_param*) ;
 struct thread* FUNC_3 (struct thread*,int ,int) ;

int
FUNC_4(struct thread *VAR_1,
    struct linux_sched_getparam_args *VAR_2)
{
 struct sched_param VAR_3;
 struct thread *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_2->pid, -1);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_1, VAR_4, &VAR_3);
 FUNC_0(VAR_4->td_proc);
 if (VAR_5 == 0)
  VAR_5 = FUNC_1(&VAR_3, VAR_2->param,
      sizeof(VAR_3));
 return (VAR_5);
}
