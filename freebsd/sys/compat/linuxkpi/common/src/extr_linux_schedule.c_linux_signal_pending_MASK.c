
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; int td_sigmask; int td_siglist; } ;
struct task_struct {struct thread* task_thread; } ;
typedef int sigset_t ;
struct TYPE_3__ {int p_siglist; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

bool
FUNC_5(struct task_struct *VAR_0)
{
 struct thread *VAR_1;
 sigset_t VAR_2;

 VAR_1 = VAR_0->task_thread;
 FUNC_0(VAR_1->td_proc);
 VAR_2 = VAR_1->td_siglist;
 FUNC_4(VAR_2, VAR_1->td_proc->p_siglist);
 FUNC_3(VAR_2, VAR_1->td_sigmask);
 FUNC_1(VAR_1->td_proc);
 return (!FUNC_2(VAR_2));
}
