
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int td_xsig; int td_dbgflags; int td_sigqueue; int * td_wchan; int td_tid; struct proc* td_proc; } ;
struct TYPE_7__ {int lock_object; } ;
struct proc {int p_flag; int p_flag2; int p_xsig; struct thread* p_xthread; scalar_t__ p_ptevents; int p_pid; TYPE_1__ p_mtx; } ;
struct TYPE_8__ {int ksi_flags; int ksi_signo; } ;
typedef TYPE_2__ ksiginfo_t ;


 int FUNC_0 (int ,char*,int ,int ,int,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ FUNC_5 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int,int *,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct thread*,struct proc*,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *,int,TYPE_2__*) ;
 struct thread* FUNC_11 (struct proc*,int,int) ;
 int FUNC_12 (struct proc*,struct thread*,int,TYPE_2__*) ;
 int FUNC_13 (struct thread*,struct proc*) ;

int
FUNC_14(struct thread *VAR_18, int VAR_19, ksiginfo_t *VAR_20)
{
 struct proc *VAR_21 = VAR_18->td_proc;
 struct thread *VAR_22;
 ksiginfo_t VAR_23;
 int VAR_24;

 FUNC_2(VAR_21, VAR_3);
 FUNC_1(!(VAR_21->p_flag & VAR_9), ("Stopping exiting process"));
 FUNC_6(VAR_16 | VAR_17,
     &VAR_21->p_mtx.lock_object, "Stopping for traced signal");

 VAR_18->td_xsig = VAR_19;

 if (VAR_20 == ((void*)0) || (VAR_20->ksi_flags & VAR_1) == 0) {
  VAR_18->td_dbgflags |= VAR_15;
  FUNC_0(VAR_2, "ptracestop: tid %d (pid %d) flags %#x sig %d",
      VAR_18->td_tid, VAR_21->p_pid, VAR_18->td_dbgflags, VAR_19);
  FUNC_3(VAR_21);
  while ((VAR_21->p_flag & VAR_8) && (VAR_18->td_dbgflags & VAR_15)) {
   if (FUNC_5(VAR_21)) {







    VAR_18->td_dbgflags &= ~VAR_15;
    VAR_18->td_xsig = VAR_10;
    VAR_21->p_ptevents = 0;
    break;
   }
   if (VAR_21->p_flag & VAR_5 &&
       !(VAR_18->td_dbgflags & VAR_11)) {




    VAR_18->td_dbgflags &= ~VAR_15;
    FUNC_4(VAR_21);
    return (0);
   }
   if ((VAR_18->td_dbgflags & VAR_12) != 0 ||
       ((VAR_21->p_flag2 & VAR_4) == 0 &&
       VAR_21->p_xthread == ((void*)0))) {
    VAR_21->p_xsig = VAR_19;
    VAR_21->p_xthread = VAR_18;






    if (VAR_18->td_wchan == ((void*)0))
     VAR_18->td_dbgflags &= ~VAR_12;

    VAR_21->p_flag2 &= ~VAR_4;
    VAR_21->p_flag |= VAR_6 | VAR_7;
    FUNC_8(VAR_18, VAR_21, 0);
   }
   if ((VAR_18->td_dbgflags & VAR_13) != 0) {
    VAR_18->td_dbgflags &= ~VAR_13;
   }
stopme:
   FUNC_13(VAR_18, VAR_21);
   if (VAR_21->p_xthread == VAR_18)
    VAR_21->p_xthread = ((void*)0);
   if (!(VAR_21->p_flag & VAR_8))
    break;
   if (VAR_18->td_dbgflags & VAR_14) {
    if (VAR_21->p_flag & VAR_5)
     break;
    goto stopme;
   }
  }
  FUNC_4(VAR_21);
 }

 if (VAR_20 != ((void*)0) && VAR_19 == VAR_18->td_xsig) {

  VAR_20->ksi_flags |= VAR_0;
  if (FUNC_10(&VAR_18->td_sigqueue, VAR_19, VAR_20) != 0)
   VAR_20->ksi_signo = 0;
 } else if (VAR_18->td_xsig != 0) {




  FUNC_7(&VAR_23);
  VAR_23.ksi_signo = VAR_18->td_xsig;
  VAR_23.ksi_flags |= VAR_1;
  VAR_24 = FUNC_9(VAR_18->td_xsig);
  VAR_22 = FUNC_11(VAR_21, VAR_18->td_xsig, VAR_24);
  FUNC_12(VAR_21, VAR_22, VAR_18->td_xsig, &VAR_23);
  if (VAR_18 != VAR_22)
   return (0);
 }

 return (VAR_18->td_xsig);
}
