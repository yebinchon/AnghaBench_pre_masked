
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_sigmask; int td_sigqueue; struct proc* td_proc; } ;
struct proc {int p_numthreads; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct proc*,int ,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct thread *VAR_1)
{
 struct proc *VAR_2;
 sigset_t VAR_3;

 VAR_2 = VAR_1->td_proc;
 FUNC_0(VAR_2, VAR_0);

 FUNC_4(&VAR_1->td_sigqueue);
 if (VAR_2->p_numthreads == 1)
  return;
 FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_1->td_sigmask);
 FUNC_1(VAR_1->td_sigmask);
 FUNC_3(VAR_2, VAR_3, 0);

}
