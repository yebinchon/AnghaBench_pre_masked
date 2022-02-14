
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct thread {int td_dbgflags; TYPE_1__ td_sa; struct proc* td_proc; } ;
struct proc {int p_flag; int p_ptevents; } ;


 scalar_t__ FUNC_0 (struct thread*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct proc*,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct thread*,int ,int *) ;
 int FUNC_6 (struct thread*,struct trapframe*) ;

void
FUNC_7(struct thread *VAR_12, struct trapframe *VAR_13)
{
 struct proc *VAR_14;

 VAR_14 = VAR_12->td_proc;
 if (VAR_12->td_dbgflags & VAR_11) {
  FUNC_1(VAR_14);
  if ((VAR_14->p_flag & VAR_2) != 0) {



   VAR_12->td_dbgflags |= VAR_8 | VAR_10 | VAR_9;
   FUNC_5(VAR_12, VAR_3, ((void*)0));
   VAR_12->td_dbgflags &= ~(VAR_8 | VAR_10);
  } else {



   VAR_12->td_dbgflags &= ~VAR_11;
  }
  FUNC_2(VAR_14);
 } else if (VAR_14->p_flag & VAR_2 || VAR_12->td_dbgflags & VAR_7) {




  FUNC_1(VAR_14);
  VAR_12->td_dbgflags |= VAR_10;
  FUNC_3(VAR_14, VAR_6, VAR_12->td_sa.code);
  if ((VAR_14->p_ptevents & VAR_1) != 0 ||
      (VAR_12->td_dbgflags & VAR_7) != 0)
   FUNC_5(VAR_12, VAR_4, ((void*)0));
  VAR_12->td_dbgflags &= ~(VAR_10 | VAR_7);
  FUNC_2(VAR_14);
 }

 FUNC_6(VAR_12, VAR_13);





}
