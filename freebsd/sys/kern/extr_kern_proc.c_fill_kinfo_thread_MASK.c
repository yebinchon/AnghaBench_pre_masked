
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rux_runtime; } ;
struct thread {scalar_t__ td_lastcpu; scalar_t__ td_oncpu; int td_slptick; int td_sigmask; int td_siglist; int td_cow; TYPE_2__ td_rux; int td_user_pri; int td_pri_class; scalar_t__ td_kstack; int td_pcb; int td_tid; int td_flags; int td_base_pri; int td_priority; int td_wchan; int * td_lockname; int * td_name; int * td_wmesg; struct proc* td_proc; } ;
struct proc {scalar_t__ p_state; int p_numthreads; } ;
struct TYPE_3__ {int pri_user; int pri_class; int pri_native; int pri_level; } ;
struct kinfo_proc {scalar_t__ ki_lastcpu_old; scalar_t__ ki_oncpu_old; scalar_t__ ki_lastcpu; scalar_t__ ki_oncpu; int ki_slptime; int ki_sigmask; int ki_siglist; scalar_t__ ki_rqindex; int ki_cow; int ki_estcpu; int ki_pctcpu; int ki_runtime; int ki_rusage; TYPE_1__ ki_pri; void* ki_kstack; int ki_pcb; int ki_numthreads; int ki_tid; int ki_tdflags; int ki_wchan; int ki_stat; int ki_lockname; int ki_kiflag; int ki_moretdname; int ki_tdname; int ki_wmesg; struct thread* ki_tdaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct proc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (struct thread*) ;
 scalar_t__ FUNC_5 (struct thread*) ;
 scalar_t__ FUNC_6 (struct thread*) ;
 scalar_t__ FUNC_7 (struct thread*) ;
 scalar_t__ FUNC_8 (struct thread*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 int FUNC_11 (struct thread*,int *) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*) ;
 int FUNC_14 (int ,int *,int) ;
 int FUNC_15 (struct thread*) ;
 int FUNC_16 (struct thread*) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_17(struct thread *VAR_16, struct kinfo_proc *VAR_17, int VAR_18)
{
 struct proc *VAR_19;

 VAR_19 = VAR_16->td_proc;
 VAR_17->ki_tdaddr = VAR_16;
 FUNC_0(VAR_19, VAR_2);

 if (VAR_18)
  FUNC_1(VAR_19);
 FUNC_15(VAR_16);
 if (VAR_16->td_wmesg != ((void*)0))
  FUNC_14(VAR_17->ki_wmesg, VAR_16->td_wmesg, sizeof(VAR_17->ki_wmesg));
 else
  FUNC_9(VAR_17->ki_wmesg, sizeof(VAR_17->ki_wmesg));
 if (FUNC_14(VAR_17->ki_tdname, VAR_16->td_name, sizeof(VAR_17->ki_tdname)) >=
     sizeof(VAR_17->ki_tdname)) {
  FUNC_14(VAR_17->ki_moretdname,
      VAR_16->td_name + sizeof(VAR_17->ki_tdname) - 1,
      sizeof(VAR_17->ki_moretdname));
 } else {
  FUNC_9(VAR_17->ki_moretdname, sizeof(VAR_17->ki_moretdname));
 }
 if (FUNC_7(VAR_16)) {
  VAR_17->ki_kiflag |= VAR_0;
  FUNC_14(VAR_17->ki_lockname, VAR_16->td_lockname,
      sizeof(VAR_17->ki_lockname));
 } else {
  VAR_17->ki_kiflag &= ~VAR_0;
  FUNC_9(VAR_17->ki_lockname, sizeof(VAR_17->ki_lockname));
 }

 if (VAR_19->p_state == VAR_5) {
  if (FUNC_8(VAR_16) ||
      FUNC_4(VAR_16) ||
      FUNC_5(VAR_16)) {
   VAR_17->ki_stat = VAR_9;
  } else if (FUNC_3(VAR_19)) {
   VAR_17->ki_stat = VAR_11;
  } else if (FUNC_6(VAR_16)) {
   VAR_17->ki_stat = VAR_10;
  } else if (FUNC_7(VAR_16)) {
   VAR_17->ki_stat = VAR_8;
  } else {
   VAR_17->ki_stat = VAR_12;
  }
 } else if (VAR_19->p_state == VAR_6) {
  VAR_17->ki_stat = VAR_13;
 } else {
  VAR_17->ki_stat = VAR_7;
 }


 VAR_17->ki_wchan = VAR_16->td_wchan;
 VAR_17->ki_pri.pri_level = VAR_16->td_priority;
 VAR_17->ki_pri.pri_native = VAR_16->td_base_pri;





 if (VAR_16->td_lastcpu == VAR_3)
  VAR_17->ki_lastcpu_old = VAR_4;
 else if (VAR_16->td_lastcpu > VAR_1)
  VAR_17->ki_lastcpu_old = VAR_1;
 else
  VAR_17->ki_lastcpu_old = VAR_16->td_lastcpu;

 if (VAR_16->td_oncpu == VAR_3)
  VAR_17->ki_oncpu_old = VAR_4;
 else if (VAR_16->td_oncpu > VAR_1)
  VAR_17->ki_oncpu_old = VAR_1;
 else
  VAR_17->ki_oncpu_old = VAR_16->td_oncpu;

 VAR_17->ki_lastcpu = VAR_16->td_lastcpu;
 VAR_17->ki_oncpu = VAR_16->td_oncpu;
 VAR_17->ki_tdflags = VAR_16->td_flags;
 VAR_17->ki_tid = VAR_16->td_tid;
 VAR_17->ki_numthreads = VAR_19->p_numthreads;
 VAR_17->ki_pcb = VAR_16->td_pcb;
 VAR_17->ki_kstack = (void *)VAR_16->td_kstack;
 VAR_17->ki_slptime = (VAR_15 - VAR_16->td_slptick) / VAR_14;
 VAR_17->ki_pri.pri_class = VAR_16->td_pri_class;
 VAR_17->ki_pri.pri_user = VAR_16->td_user_pri;

 if (VAR_18) {
  FUNC_11(VAR_16, &VAR_17->ki_rusage);
  VAR_17->ki_runtime = FUNC_10(VAR_16->td_rux.rux_runtime);
  VAR_17->ki_pctcpu = FUNC_13(VAR_16);
  VAR_17->ki_estcpu = FUNC_12(VAR_16);
  VAR_17->ki_cow = VAR_16->td_cow;
 }


 VAR_17->ki_rqindex = 0;

 if (VAR_18)
  VAR_17->ki_siglist = VAR_16->td_siglist;
 VAR_17->ki_sigmask = VAR_16->td_sigmask;
 FUNC_16(VAR_16);
 if (VAR_18)
  FUNC_2(VAR_19);
}
