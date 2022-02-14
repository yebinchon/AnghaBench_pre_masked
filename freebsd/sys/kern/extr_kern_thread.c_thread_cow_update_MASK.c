
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int td_cowgen; struct plimit* td_limit; struct ucred* td_ucred; struct proc* td_proc; } ;
struct proc {int p_cowgen; struct plimit* p_limit; struct ucred* p_ucred; } ;
struct plimit {int dummy; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct ucred*) ;
 struct ucred* FUNC_3 (struct ucred*) ;
 int FUNC_4 (struct plimit*) ;
 struct plimit* FUNC_5 (struct plimit*) ;

void
FUNC_6(struct thread *VAR_0)
{
 struct proc *VAR_1;
 struct ucred *VAR_2;
 struct plimit *VAR_3;

 VAR_1 = VAR_0->td_proc;
 VAR_2 = ((void*)0);
 VAR_3 = ((void*)0);
 FUNC_0(VAR_1);
 if (VAR_0->td_ucred != VAR_1->p_ucred) {
  VAR_2 = VAR_0->td_ucred;
  VAR_0->td_ucred = FUNC_3(VAR_1->p_ucred);
 }
 if (VAR_0->td_limit != VAR_1->p_limit) {
  VAR_3 = VAR_0->td_limit;
  VAR_0->td_limit = FUNC_5(VAR_1->p_limit);
 }
 VAR_0->td_cowgen = VAR_1->p_cowgen;
 FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);
 if (VAR_3 != ((void*)0))
  FUNC_4(VAR_3);
}
