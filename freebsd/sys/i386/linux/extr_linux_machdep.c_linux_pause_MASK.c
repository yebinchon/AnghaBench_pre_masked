
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sigmask; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_pause_args {int dummy; } ;
typedef int sigset_t ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct thread*,int ) ;

int
FUNC_3(struct thread *VAR_0, struct linux_pause_args *VAR_1)
{
 struct proc *VAR_2 = VAR_0->td_proc;
 sigset_t VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = VAR_0->td_sigmask;
 FUNC_1(VAR_2);
 return (FUNC_2(VAR_0, VAR_3));
}
