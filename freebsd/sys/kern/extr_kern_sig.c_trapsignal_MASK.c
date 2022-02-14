
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int td_sigmask; struct proc* td_proc; } ;
struct sigacts {scalar_t__* ps_sigact; int ps_mtx; int ps_sigignore; int ps_sigcatch; } ;
struct proc {int p_flag; int p_sig; TYPE_1__* p_sysent; struct sigacts* p_sigacts; } ;
struct TYPE_7__ {int ksi_signo; int ksi_code; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_6__ {int (* sv_sendsig ) (scalar_t__,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int,scalar_t__,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,struct thread*,struct sigacts*) ;
 int FUNC_12 (scalar_t__,TYPE_2__*,int *) ;
 int FUNC_13 (struct proc*,struct thread*,int,TYPE_2__*) ;

void
FUNC_14(struct thread *VAR_6, ksiginfo_t *VAR_7)
{
 struct sigacts *VAR_8;
 struct proc *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = VAR_6->td_proc;
 VAR_10 = VAR_7->ksi_signo;
 VAR_11 = VAR_7->ksi_code;
 FUNC_0(FUNC_7(VAR_10), ("invalid signal"));

 FUNC_2(VAR_9);
 VAR_8 = VAR_9->p_sigacts;
 FUNC_9(&VAR_8->ps_mtx);
 if ((VAR_9->p_flag & VAR_1) == 0 && FUNC_5(VAR_8->ps_sigcatch, VAR_10) &&
     !FUNC_5(VAR_6->td_sigmask, VAR_10)) {





  (*VAR_9->p_sysent->sv_sendsig)(VAR_8->ps_sigact[FUNC_6(VAR_10)],
    VAR_7, &VAR_6->td_sigmask);
  FUNC_11(VAR_10, VAR_6, VAR_8);
  FUNC_10(&VAR_8->ps_mtx);
 } else {





  if (VAR_5 &&
      (FUNC_5(VAR_6->td_sigmask, VAR_10) ||
       VAR_8->ps_sigact[FUNC_6(VAR_10)] == VAR_3)) {
   FUNC_4(VAR_6->td_sigmask, VAR_10);
   FUNC_4(VAR_8->ps_sigcatch, VAR_10);
   FUNC_4(VAR_8->ps_sigignore, VAR_10);
   VAR_8->ps_sigact[FUNC_6(VAR_10)] = VAR_2;
  }
  FUNC_10(&VAR_8->ps_mtx);
  VAR_9->p_sig = VAR_10;
  FUNC_13(VAR_9, VAR_6, VAR_10, VAR_7);
 }
 FUNC_3(VAR_9);
}
