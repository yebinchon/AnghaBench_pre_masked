
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct sched_param {int dummy; } ;
struct linux_sched_setscheduler_args {int policy; int pid; int param; } ;
typedef int sched_param ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct sched_param*,int) ;
 int FUNC_2 (struct thread*,struct thread*,int,struct sched_param*) ;
 struct thread* FUNC_3 (struct thread*,int ,int) ;

int
FUNC_4(struct thread *VAR_5,
    struct linux_sched_setscheduler_args *VAR_6)
{
 struct sched_param VAR_7;
 struct thread *VAR_8;
 int VAR_9, VAR_10;

 switch (VAR_6->policy) {
 case 129:
  VAR_10 = VAR_3;
  break;
 case 130:
  VAR_10 = VAR_2;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  return (VAR_0);
 }

 VAR_9 = FUNC_1(VAR_6->param, &VAR_7, sizeof(VAR_7));
 if (VAR_9)
  return (VAR_9);

 VAR_8 = FUNC_3(VAR_5, VAR_6->pid, -1);
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_10, &VAR_7);
 FUNC_0(VAR_8->td_proc);
 return (VAR_9);
}
