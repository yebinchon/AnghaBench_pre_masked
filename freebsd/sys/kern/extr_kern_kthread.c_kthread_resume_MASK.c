
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int td_flags; struct proc* td_proc; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct thread *VAR_3)
{
 struct proc *VAR_4;

 VAR_4 = VAR_3->td_proc;






 if ((VAR_3->td_pflags & VAR_2) == 0)
  return (VAR_0);

 FUNC_0(VAR_4);
 FUNC_2(VAR_3);
 VAR_3->td_flags &= ~VAR_1;
 FUNC_3(VAR_3);
 FUNC_4(&VAR_3->td_flags);
 FUNC_1(VAR_4);
 return (0);
}
