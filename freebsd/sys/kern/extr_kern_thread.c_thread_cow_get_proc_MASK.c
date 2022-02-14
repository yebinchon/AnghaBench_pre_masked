
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_cowgen; int td_limit; int td_ucred; } ;
struct proc {int p_cowgen; int p_limit; int p_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct thread *VAR_1, struct proc *VAR_2)
{

 FUNC_0(VAR_2, VAR_0);
 VAR_1->td_ucred = FUNC_1(VAR_2->p_ucred);
 VAR_1->td_limit = FUNC_2(VAR_2->p_limit);
 VAR_1->td_cowgen = VAR_2->p_cowgen;
}
