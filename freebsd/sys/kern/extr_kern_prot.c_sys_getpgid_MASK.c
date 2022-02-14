
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {TYPE_1__* p_pgrp; } ;
struct getpgid_args {scalar_t__ pid; } ;
struct TYPE_2__ {int pg_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct thread*,struct proc*) ;
 struct proc* FUNC_3 (scalar_t__) ;

int
FUNC_4(struct thread *VAR_1, struct getpgid_args *VAR_2)
{
 struct proc *VAR_3;
 int VAR_4;

 if (VAR_2->pid == 0) {
  VAR_3 = VAR_1->td_proc;
  FUNC_0(VAR_3);
 } else {
  VAR_3 = FUNC_3(VAR_2->pid);
  if (VAR_3 == ((void*)0))
   return (VAR_0);
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4) {
   FUNC_1(VAR_3);
   return (VAR_4);
  }
 }
 VAR_1->td_retval[0] = VAR_3->p_pgrp->pg_id;
 FUNC_1(VAR_3);
 return (0);
}
