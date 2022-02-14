
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_dbgflags; struct proc* td_proc; } ;
struct proc {int p_numthreads; int p_pendingexits; int p_ptevents; } ;


 int FUNC_0 (int ,struct thread*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct thread*,int ,int *) ;
 int FUNC_6 (struct proc*,int ,int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (struct thread*) ;

int
FUNC_11(struct thread *VAR_4)
{
 struct proc *VAR_5;

 VAR_5 = VAR_4->td_proc;
 FUNC_2(VAR_5);
 if (VAR_5->p_numthreads == VAR_5->p_pendingexits + 1) {





  FUNC_4(VAR_5);
  return (0);
 }

 VAR_5->p_pendingexits++;
 VAR_4->td_dbgflags |= VAR_3;
 if (VAR_5->p_ptevents & VAR_0)
  FUNC_5(VAR_4, VAR_2, ((void*)0));
 FUNC_4(VAR_5);
 FUNC_10(VAR_4);
 FUNC_2(VAR_5);
 VAR_5->p_pendingexits--;







 FUNC_1(VAR_5->p_numthreads > 1, ("too few threads"));
 FUNC_6(VAR_5, VAR_1, 1);
 FUNC_7(VAR_4);





 FUNC_3(VAR_5);
 FUNC_9(VAR_5);
 FUNC_8();

}
