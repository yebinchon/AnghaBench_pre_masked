
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct proc* td_proc; } ;
struct proc {int p_numthreads; } ;


 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (struct thread*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 struct thread* VAR_1 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 () ;
 int VAR_3 ;
 int FUNC_11 (struct thread*) ;
 int FUNC_12 (struct thread*) ;

void
FUNC_13(void)
{
 struct proc *VAR_4;
 struct thread *VAR_5;

 VAR_5 = VAR_1;
 VAR_4 = VAR_5->td_proc;






 FUNC_12(VAR_5);





 FUNC_7(&VAR_3);
 FUNC_3(VAR_4);
 if (VAR_4->p_numthreads == 1) {
  FUNC_5(VAR_4);
  FUNC_8(&VAR_3);
  FUNC_6(0);
 }
 FUNC_0(VAR_5, VAR_2);
 FUNC_8(&VAR_3);
 FUNC_11(VAR_5);
 FUNC_9(VAR_5);
 FUNC_4(VAR_4);
 FUNC_10();
}
