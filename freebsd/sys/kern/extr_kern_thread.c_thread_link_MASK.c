
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_slpcallout; int td_sigqueue; int td_epochs; int * td_lprof; int td_contested; int td_flags; struct proc* td_proc; int td_state; } ;
struct proc {int p_numthreads; int p_threads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct proc*) ;
 int VAR_2 ;

void
FUNC_5(struct thread *VAR_3, struct proc *VAR_4)
{






 VAR_3->td_state = VAR_1;
 VAR_3->td_proc = VAR_4;
 VAR_3->td_flags = VAR_0;

 FUNC_0(&VAR_3->td_contested);
 FUNC_0(&VAR_3->td_lprof[0]);
 FUNC_0(&VAR_3->td_lprof[1]);



 FUNC_4(&VAR_3->td_sigqueue, VAR_4);
 FUNC_3(&VAR_3->td_slpcallout, 1);
 FUNC_2(&VAR_4->p_threads, VAR_3, VAR_2);
 VAR_4->p_numthreads++;
}
