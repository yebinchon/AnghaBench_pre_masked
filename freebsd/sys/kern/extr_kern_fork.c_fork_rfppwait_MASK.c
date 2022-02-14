
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pflags; int td_dbgflags; struct proc* td_rfppwait_p; struct proc* td_proc; } ;
struct proc {int p_flag; int p_ptevents; int p_mtx; int p_pwait; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct thread*,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;

void
FUNC_7(struct thread *VAR_6)
{
 struct proc *VAR_7, *VAR_8;

 FUNC_0(VAR_6->td_pflags & VAR_4);

 VAR_7 = VAR_6->td_proc;
 VAR_6->td_pflags &= ~VAR_4;
 VAR_8 = VAR_6->td_rfppwait_p;
again:
 FUNC_1(VAR_8);
 while (VAR_8->p_flag & VAR_1) {
  FUNC_1(VAR_7);
  if (FUNC_6()) {
   FUNC_2(VAR_8);
   FUNC_5(0);
   FUNC_2(VAR_7);
   goto again;
  } else {
   FUNC_2(VAR_7);
  }
  FUNC_3(&VAR_8->p_pwait, &VAR_8->p_mtx, VAR_5);
 }
 FUNC_2(VAR_8);

 if (VAR_6->td_dbgflags & VAR_3) {
  FUNC_1(VAR_7);
  if (VAR_7->p_ptevents & VAR_0)
   FUNC_4(VAR_6, VAR_2, ((void*)0));
  VAR_6->td_dbgflags &= ~VAR_3;
  FUNC_2(VAR_7);
 }
}
