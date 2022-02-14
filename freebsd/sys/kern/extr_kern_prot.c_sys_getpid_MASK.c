
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {int p_pid; } ;
struct getpid_args {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct thread*) ;

int
FUNC_2(struct thread *VAR_1, struct getpid_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;

 VAR_1->td_retval[0] = VAR_3->p_pid;




 return (0);
}
