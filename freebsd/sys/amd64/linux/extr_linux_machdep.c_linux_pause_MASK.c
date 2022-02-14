
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sigmask; struct proc* td_proc; } ;
struct proc {int dummy; } ;
struct linux_pause_args {int dummy; } ;
typedef int sigset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct thread*,int ) ;
 int VAR_0 ;

int
FUNC_4(struct thread *VAR_1, struct linux_pause_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 sigset_t VAR_4;

 FUNC_0(VAR_0);

 FUNC_1(VAR_3);
 VAR_4 = VAR_1->td_sigmask;
 FUNC_2(VAR_3);
 return (FUNC_3(VAR_1, VAR_4));
}
