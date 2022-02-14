
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sq_signals; } ;
struct thread {TYPE_2__ td_sigqueue; struct proc* td_proc; } ;
struct sigpending_args {int set; } ;
struct TYPE_3__ {int sq_signals; } ;
struct proc {TYPE_1__ p_sigqueue; } ;
typedef int sigset_t ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;

int
FUNC_4(struct thread *VAR_0, struct sigpending_args *VAR_1)
{
 struct proc *VAR_2 = VAR_0->td_proc;
 sigset_t VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->p_sigqueue.sq_signals;
 FUNC_2(VAR_3, VAR_0->td_sigqueue.sq_signals);
 FUNC_1(VAR_2);
 return (FUNC_3(&VAR_3, VAR_1->set, sizeof(sigset_t)));
}
