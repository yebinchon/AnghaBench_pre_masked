
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_3__* td_ucred; struct proc* td_proc; } ;
struct proc {int p_sig; TYPE_2__* p_ucred; int p_comm; int p_pid; int p_acflag; } ;
struct TYPE_6__ {int cr_uid; } ;
struct TYPE_5__ {TYPE_1__* cr_prison; } ;
struct TYPE_4__ {int pr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,char*,int ,int ,int ,int ,int,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct proc*,int ) ;

void
FUNC_7(struct thread *VAR_7, int VAR_8)
{
 struct proc *VAR_9 = VAR_7->td_proc;

 FUNC_0(VAR_9, VAR_2);
 VAR_9->p_acflag |= VAR_0;
 if ((FUNC_5(VAR_8) & VAR_3) &&
     FUNC_6(VAR_9, VAR_4) == 0) {
  VAR_9->p_sig = VAR_8;







  if (FUNC_2(VAR_7) == 0)
   VAR_8 |= VAR_5;
  if (VAR_6)
   FUNC_4(VAR_1,
       "pid %d (%s), jid %d, uid %d: exited on "
       "signal %d%s\n", VAR_9->p_pid, VAR_9->p_comm,
       VAR_9->p_ucred->cr_prison->pr_id,
       VAR_7->td_ucred->cr_uid,
       VAR_8 &~ VAR_5,
       VAR_8 & VAR_5 ? " (core dumped)" : "");
 } else
  FUNC_1(VAR_9);
 FUNC_3(VAR_7, 0, VAR_8);

}
