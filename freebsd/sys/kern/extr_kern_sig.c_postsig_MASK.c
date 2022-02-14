
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int td_pflags; int td_sigmask; int td_oldsigmask; int td_sigqueue; struct proc* td_proc; } ;
struct sigacts {scalar_t__* ps_sigact; int ps_mtx; } ;
struct proc {int p_stops; int p_sig; TYPE_1__* p_sysent; int p_sigqueue; struct sigacts* p_sigacts; } ;
typedef int sigset_t ;
typedef scalar_t__ sig_t ;
struct TYPE_8__ {int ksi_signo; scalar_t__ ksi_code; int ksi_info; int ksi_timerid; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_7__ {int (* sv_sendsig ) (scalar_t__,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_4 (int) ;
 struct thread* VAR_7 ;
 int FUNC_5 (struct proc*,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int,scalar_t__,int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,struct thread*,struct sigacts*) ;
 int FUNC_12 (struct thread*,int *) ;
 int FUNC_13 (struct thread*,int) ;
 scalar_t__ FUNC_14 (int *,int,TYPE_2__*) ;
 int FUNC_15 (struct proc*,int,int) ;
 int FUNC_16 (scalar_t__,TYPE_2__*,int *) ;

int
FUNC_17(int VAR_8)
{
 struct thread *VAR_9;
 struct proc *VAR_10;
 struct sigacts *VAR_11;
 sig_t VAR_12;
 ksiginfo_t VAR_13;
 sigset_t VAR_14;

 FUNC_0(VAR_8 != 0, ("postsig"));

 VAR_9 = VAR_7;
 VAR_10 = VAR_9->td_proc;
 FUNC_2(VAR_10, VAR_1);
 VAR_11 = VAR_10->p_sigacts;
 FUNC_8(&VAR_11->ps_mtx, VAR_1);
 FUNC_6(&VAR_13);
 if (FUNC_14(&VAR_9->td_sigqueue, VAR_8, &VAR_13) == 0 &&
     FUNC_14(&VAR_10->p_sigqueue, VAR_8, &VAR_13) == 0)
  return (0);
 VAR_13.ksi_signo = VAR_8;
 if (VAR_13.ksi_code == VAR_4)
  FUNC_5(VAR_10, VAR_13.ksi_timerid, &VAR_13);
 VAR_12 = VAR_11->ps_sigact[FUNC_4(VAR_8)];





 if ((VAR_10->p_stops & VAR_5) != 0) {
  FUNC_10(&VAR_11->ps_mtx);
  FUNC_15(VAR_10, VAR_5, VAR_8);
  FUNC_9(&VAR_11->ps_mtx);
 }

 if (VAR_12 == VAR_2) {




  FUNC_10(&VAR_11->ps_mtx);
  FUNC_12(VAR_9, &VAR_13.ksi_info);
  FUNC_13(VAR_9, VAR_8);

 } else {



  FUNC_0(VAR_12 != VAR_3, ("postsig action %p", VAR_12));
  FUNC_0(!FUNC_3(VAR_9->td_sigmask, VAR_8),
      ("postsig action: blocked sig %d", VAR_8));
  if (VAR_9->td_pflags & VAR_6) {
   VAR_14 = VAR_9->td_oldsigmask;
   VAR_9->td_pflags &= ~VAR_6;
  } else
   VAR_14 = VAR_9->td_sigmask;

  if (VAR_10->p_sig == VAR_8) {
   VAR_10->p_sig = 0;
  }
  (*VAR_10->p_sysent->sv_sendsig)(VAR_12, &VAR_13, &VAR_14);
  FUNC_11(VAR_8, VAR_9, VAR_11);
 }
 return (1);
}
