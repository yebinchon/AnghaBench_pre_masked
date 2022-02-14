
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_pgrp; } ;
struct getpgrp_args {int dummy; } ;
struct TYPE_2__ {int pg_id; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;

int
FUNC_2(struct thread *VAR_0, struct getpgrp_args *VAR_1)
{
 struct proc *VAR_2 = VAR_0->td_proc;

 FUNC_0(VAR_2);
 VAR_0->td_retval[0] = VAR_2->p_pgrp->pg_id;
 FUNC_1(VAR_2);
 return (0);
}
