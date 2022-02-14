
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; struct proc* td_proc; } ;
struct proc {int p_suspcount; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*,int ) ;

void
FUNC_6(struct thread *VAR_2)
{
 struct proc *VAR_3;

 VAR_3 = VAR_2->td_proc;
 FUNC_1(VAR_3, VAR_0);
 FUNC_4(VAR_2, VAR_0);
 FUNC_0(!FUNC_2(VAR_2), ("already suspended"));
 VAR_3->p_suspcount++;
 VAR_2->td_flags &= ~VAR_1;
 FUNC_3(VAR_2);
 FUNC_5(VAR_2, 0);
}
