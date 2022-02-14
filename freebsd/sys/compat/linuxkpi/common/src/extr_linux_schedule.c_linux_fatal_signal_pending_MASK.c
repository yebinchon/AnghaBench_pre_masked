
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; int td_siglist; } ;
struct task_struct {struct thread* task_thread; } ;
struct TYPE_3__ {int p_siglist; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;

bool
FUNC_3(struct task_struct *VAR_1)
{
 struct thread *VAR_2;
 bool VAR_3;

 VAR_2 = VAR_1->task_thread;
 FUNC_0(VAR_2->td_proc);
 VAR_3 = FUNC_2(VAR_2->td_siglist, VAR_0) ||
     FUNC_2(VAR_2->td_proc->p_siglist, VAR_0);
 FUNC_1(VAR_2->td_proc);
 return (VAR_3);
}
