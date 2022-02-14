
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; int * td_retval; } ;
struct linux_getpid_args {int dummy; } ;
struct TYPE_2__ {int p_pid; } ;



int
FUNC_0(struct thread *VAR_0, struct linux_getpid_args *VAR_1)
{

 VAR_0->td_retval[0] = VAR_0->td_proc->p_pid;

 return (0);
}
