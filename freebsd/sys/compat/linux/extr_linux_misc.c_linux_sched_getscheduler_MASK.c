
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; int td_proc; } ;
struct linux_sched_getscheduler_args {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (struct thread*,struct thread*,int*) ;
 struct thread* FUNC_2 (struct thread*,int ,int) ;

int
FUNC_3(struct thread *VAR_4,
    struct linux_sched_getscheduler_args *VAR_5)
{
 struct thread *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_4, VAR_5->pid, -1);
 if (VAR_6 == ((void*)0))
  return (VAR_0);

 VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_8);
 FUNC_0(VAR_6->td_proc);

 switch (VAR_8) {
 case 129:
  VAR_4->td_retval[0] = VAR_2;
  break;
 case 130:
  VAR_4->td_retval[0] = VAR_1;
  break;
 case 128:
  VAR_4->td_retval[0] = VAR_3;
  break;
 }
 return (VAR_7);
}
