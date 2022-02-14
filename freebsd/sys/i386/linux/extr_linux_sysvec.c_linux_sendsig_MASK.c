
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct trapframe {int tf_esp; int tf_eflags; void* tf_ss; void* tf_fs; void* tf_es; void* tf_ds; int tf_cs; int tf_eip; int tf_err; int tf_eax; int tf_ecx; int tf_edx; int tf_ebx; int tf_ebp; int tf_esi; int tf_edi; } ;
struct TYPE_8__ {uintptr_t ss_size; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; TYPE_1__ td_sigstk; struct trapframe* td_frame; struct proc* td_proc; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; int ps_siginfo; } ;
struct proc {struct sigacts* p_sigacts; } ;
struct TYPE_9__ {int sc_esp; int sc_eflags; int sc_esp_at_signal; int sc_trapno; scalar_t__ sc_cr2; int sc_err; void* sc_ss; int sc_cs; int sc_eip; int sc_eax; int sc_ecx; int sc_edx; int sc_ebx; int sc_ebp; int sc_esi; int sc_edi; void* sc_ds; void* sc_es; void* sc_fs; int sc_gs; int sc_mask; } ;
struct l_sigframe {int sf_sig; int * sf_extramask; TYPE_2__ sf_sc; int sf_handler; } ;
typedef int sigset_t ;
typedef int sig_t ;
typedef scalar_t__ register_t ;
struct TYPE_10__ {int __mask; } ;
typedef TYPE_3__ l_sigset_t ;
struct TYPE_11__ {int ksi_signo; int ksi_code; int ksi_trapno; scalar_t__ ksi_addr; } ;
typedef TYPE_4__ ksiginfo_t ;
typedef int frame ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct l_sigframe*,int) ;
 scalar_t__ FUNC_8 (struct l_sigframe*,struct l_sigframe*,int) ;
 struct thread* VAR_8 ;
 int FUNC_9 (int ,TYPE_4__*,int *) ;
 int VAR_9 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(sig_t VAR_10, ksiginfo_t *VAR_11, sigset_t *VAR_12)
{
 struct thread *VAR_13 = VAR_8;
 struct proc *VAR_14 = VAR_13->td_proc;
 struct sigacts *VAR_15;
 struct trapframe *VAR_16;
 struct l_sigframe *VAR_17, VAR_18;
 l_sigset_t VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;

 FUNC_1(VAR_14, VAR_0);
 VAR_15 = VAR_14->p_sigacts;
 VAR_20 = VAR_11->ksi_signo;
 VAR_21 = VAR_11->ksi_code;
 FUNC_10(&VAR_15->ps_mtx, VAR_0);
 if (FUNC_3(VAR_15->ps_siginfo, VAR_20)) {

  FUNC_9(VAR_10, VAR_11, VAR_12);
  return;
 }
 VAR_16 = VAR_13->td_frame;
 VAR_22 = FUNC_15(VAR_16->tf_esp);


 if ((VAR_13->td_pflags & VAR_5) && !VAR_22 &&
     FUNC_3(VAR_15->ps_sigonstack, VAR_20)) {
  VAR_17 = (struct l_sigframe *)((uintptr_t)VAR_13->td_sigstk.ss_sp +
      VAR_13->td_sigstk.ss_size - sizeof(struct l_sigframe));
 } else
  VAR_17 = (struct l_sigframe *)VAR_16->tf_esp - 1;
 FUNC_12(&VAR_15->ps_mtx);
 FUNC_2(VAR_14);


 VAR_20 = FUNC_4(VAR_20);

 FUNC_7(&VAR_18, sizeof(VAR_18));

 VAR_18.sf_handler = VAR_10;
 VAR_18.sf_sig = VAR_20;

 FUNC_5(VAR_12, &VAR_19);


 VAR_18.sf_sc.sc_mask = VAR_19.__mask;
 VAR_18.sf_sc.sc_gs = FUNC_13();
 VAR_18.sf_sc.sc_fs = VAR_16->tf_fs;
 VAR_18.sf_sc.sc_es = VAR_16->tf_es;
 VAR_18.sf_sc.sc_ds = VAR_16->tf_ds;
 VAR_18.sf_sc.sc_edi = VAR_16->tf_edi;
 VAR_18.sf_sc.sc_esi = VAR_16->tf_esi;
 VAR_18.sf_sc.sc_ebp = VAR_16->tf_ebp;
 VAR_18.sf_sc.sc_ebx = VAR_16->tf_ebx;
 VAR_18.sf_sc.sc_esp = VAR_16->tf_esp;
 VAR_18.sf_sc.sc_edx = VAR_16->tf_edx;
 VAR_18.sf_sc.sc_ecx = VAR_16->tf_ecx;
 VAR_18.sf_sc.sc_eax = VAR_16->tf_eax;
 VAR_18.sf_sc.sc_eip = VAR_16->tf_eip;
 VAR_18.sf_sc.sc_cs = VAR_16->tf_cs;
 VAR_18.sf_sc.sc_eflags = VAR_16->tf_eflags;
 VAR_18.sf_sc.sc_esp_at_signal = VAR_16->tf_esp;
 VAR_18.sf_sc.sc_ss = VAR_16->tf_ss;
 VAR_18.sf_sc.sc_err = VAR_16->tf_err;
 VAR_18.sf_sc.sc_cr2 = (register_t)VAR_11->ksi_addr;
 VAR_18.sf_sc.sc_trapno = FUNC_6(VAR_11->ksi_trapno);

 VAR_18.sf_extramask[0] = VAR_19.__mask;

 if (FUNC_8(&VAR_18, VAR_17, sizeof(VAR_18)) != 0) {




  FUNC_0(VAR_14);
  FUNC_14(VAR_13, VAR_4);
 }


 VAR_16->tf_esp = (int)VAR_17;
 VAR_16->tf_eip = VAR_9;
 VAR_16->tf_eflags &= ~(VAR_2 | VAR_3 | VAR_1);
 VAR_16->tf_cs = VAR_6;
 VAR_16->tf_ds = VAR_7;
 VAR_16->tf_es = VAR_7;
 VAR_16->tf_fs = VAR_7;
 VAR_16->tf_ss = VAR_7;
 FUNC_0(VAR_14);
 FUNC_11(&VAR_15->ps_mtx);
}
