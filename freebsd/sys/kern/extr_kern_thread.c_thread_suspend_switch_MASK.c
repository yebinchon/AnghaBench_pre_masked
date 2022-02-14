
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; struct proc* td_proc; } ;
struct proc {int p_suspcount; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*,int ) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (struct proc*,int ) ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (struct thread*,int ) ;
 int FUNC_13 (struct thread*) ;
 int FUNC_14 (struct proc*) ;
 int FUNC_15 (struct thread*) ;

void
FUNC_16(struct thread *VAR_4, struct proc *VAR_5)
{

 FUNC_1(!FUNC_9(VAR_4), ("already suspended"));
 FUNC_4(VAR_5, VAR_0);
 FUNC_6(VAR_5, VAR_0);




 if (VAR_5 == VAR_4->td_proc) {
  FUNC_14(VAR_5);
  VAR_5->p_suspcount++;
 }
 FUNC_8(VAR_5);
 FUNC_13(VAR_4);
 VAR_4->td_flags &= ~VAR_3;
 FUNC_10(VAR_4);
 FUNC_12(VAR_4, 0);
 FUNC_7(VAR_5);
 FUNC_0();
 FUNC_11(VAR_2 | VAR_1, ((void*)0));
 FUNC_15(VAR_4);
 FUNC_2();
 FUNC_3(VAR_5);
 FUNC_5(VAR_5);
}
