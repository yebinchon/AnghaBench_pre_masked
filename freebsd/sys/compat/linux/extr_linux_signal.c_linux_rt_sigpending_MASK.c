
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sigmask; int td_siglist; struct proc* td_proc; } ;
struct proc {int p_siglist; } ;
struct linux_rt_sigpending_args {int sigsetsize; int set; } ;
typedef int sigset_t ;
typedef int lset ;
typedef int l_sigset_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int) ;

int
FUNC_6(struct thread *VAR_1, struct linux_rt_sigpending_args *VAR_2)
{
 struct proc *VAR_3 = VAR_1->td_proc;
 sigset_t VAR_4;
 l_sigset_t VAR_5;

 if (VAR_2->sigsetsize > sizeof(VAR_5))
  return (VAR_0);


 FUNC_0(VAR_3);
 VAR_4 = VAR_3->p_siglist;
 FUNC_3(VAR_4, VAR_1->td_siglist);
 FUNC_2(VAR_4, VAR_1->td_sigmask);
 FUNC_1(VAR_3);
 FUNC_4(&VAR_4, &VAR_5);
 return (FUNC_5(&VAR_5, VAR_2->set, VAR_2->sigsetsize));
}
