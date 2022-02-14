
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_dbgflags; struct proc* td_proc; } ;
struct proc {int p_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*,int ) ;
 scalar_t__ FUNC_1 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* VAR_3 ;

bool
FUNC_2(void)
{
 struct proc *VAR_4;
 struct thread *VAR_5;

 VAR_5 = VAR_3;
 VAR_4 = VAR_5->td_proc;
 FUNC_0(VAR_4, VAR_0);
 return (FUNC_1(VAR_4) || ((VAR_4->p_flag & VAR_1) != 0 &&
     (VAR_5->td_dbgflags & VAR_2) != 0));
}
