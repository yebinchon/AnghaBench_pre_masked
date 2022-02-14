
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xucred {int cr_pid; } ;
struct thread {TYPE_1__* td_proc; int td_ucred; } ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (int ,struct xucred*) ;

void
FUNC_1(struct thread *VAR_0, struct xucred *VAR_1)
{

 FUNC_0(VAR_0->td_ucred, VAR_1);
 VAR_1->cr_pid = VAR_0->td_proc->p_pid;
}
