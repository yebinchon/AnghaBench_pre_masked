
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_slpcallout; int * td_cpuset; } ;
struct proc {int p_numthreads; scalar_t__ p_exitthreads; } ;


 struct thread* FUNC_0 (struct proc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 () ;
 int FUNC_10 (struct thread*) ;

void
FUNC_11(struct proc *VAR_2)
{
 struct thread *VAR_3;

 FUNC_6(&VAR_0, VAR_1);
 FUNC_1(VAR_2->p_numthreads == 1, ("multiple threads in thread_wait()"));
 FUNC_1(VAR_2->p_exitthreads == 0, ("p_exitthreads leaking"));
 VAR_3 = FUNC_0(VAR_2);

 FUNC_8(VAR_3);
 FUNC_10(VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3->td_cpuset);
 VAR_3->td_cpuset = ((void*)0);
 FUNC_3(VAR_3);
 FUNC_7(VAR_3);
 FUNC_2(&VAR_3->td_slpcallout);
 FUNC_9();
}
