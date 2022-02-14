
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_epochs; struct proc* td_proc; } ;
struct proc {int p_numthreads; int p_threads; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct thread*,int ) ;
 int VAR_1 ;

void
FUNC_4(struct thread *VAR_2)
{
 struct proc *VAR_3 = VAR_2->td_proc;

 FUNC_1(VAR_3, VAR_0);




 FUNC_3(&VAR_3->p_threads, VAR_2, VAR_1);
 VAR_3->p_numthreads--;


}
