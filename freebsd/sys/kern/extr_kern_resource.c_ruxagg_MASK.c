
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_sticks; scalar_t__ td_iticks; scalar_t__ td_uticks; scalar_t__ td_incruntime; int td_rux; } ;
struct proc {int p_rux; } ;


 int FUNC_0 (int *,struct thread*) ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*) ;

void
FUNC_3(struct proc *VAR_0, struct thread *VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(&VAR_0->p_rux, VAR_1);
 FUNC_0(&VAR_1->td_rux, VAR_1);
 VAR_1->td_incruntime = 0;
 VAR_1->td_uticks = 0;
 VAR_1->td_iticks = 0;
 VAR_1->td_sticks = 0;
 FUNC_2(VAR_1);
}
