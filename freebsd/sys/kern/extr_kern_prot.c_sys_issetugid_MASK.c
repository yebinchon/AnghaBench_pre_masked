
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int* td_retval; struct proc* td_proc; } ;
struct proc {int p_flag; } ;
struct issetugid_args {int dummy; } ;


 int VAR_0 ;

int
FUNC_0(struct thread *VAR_1, struct issetugid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 VAR_1->td_retval[0] = (VAR_3->p_flag & VAR_0) ? 1 : 0;
 return (0);
}
