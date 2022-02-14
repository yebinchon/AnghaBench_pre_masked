
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct trapframe {int tf_rflags; int tf_flags; int tf_gs; int tf_fs; void* tf_es; void* tf_ds; void* tf_ss; int tf_cs; int tf_rip; void* tf_rsp; int tf_err; int tf_rax; int tf_rcx; int tf_rdx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; } ;
struct TYPE_8__ {uintptr_t ss_size; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; int td_pcb; TYPE_1__ td_sigstk; struct trapframe* td_frame; struct proc* td_proc; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; int ps_siginfo; } ;
struct proc {struct sigacts* p_sigacts; } ;
struct TYPE_9__ {int sc_eflags; int sc_trapno; scalar_t__ sc_cr2; int sc_err; void* sc_ss; void* sc_esp_at_signal; int sc_cs; int sc_eip; int sc_eax; int sc_ecx; int sc_edx; void* sc_esp; int sc_ebx; int sc_ebp; int sc_esi; int sc_edi; void* sc_ds; void* sc_es; int sc_fs; int sc_gs; int sc_mask; } ;
struct l_sigframe {int sf_sig; int * sf_extramask; TYPE_2__ sf_sc; void* sf_handler; } ;
typedef int sigset_t ;
typedef struct l_sigframe* sig_t ;
struct TYPE_10__ {int __mask; } ;
typedef TYPE_3__ l_sigset_t ;
struct TYPE_11__ {int ksi_signo; int ksi_code; scalar_t__ ksi_addr; } ;
typedef TYPE_4__ ksiginfo_t ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (struct l_sigframe*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct l_sigframe*,int) ;
 scalar_t__ FUNC_9 (struct l_sigframe*,struct l_sigframe*,int) ;
 struct thread* VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (struct l_sigframe*,TYPE_4__*,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct thread*,int ) ;
 int FUNC_16 (void*) ;

__attribute__((used)) static void
FUNC_17(sig_t VAR_13, ksiginfo_t *VAR_14, sigset_t *VAR_15)
{
 struct thread *VAR_16 = VAR_11;
 struct proc *VAR_17 = VAR_16->td_proc;
 struct sigacts *VAR_18;
 struct trapframe *VAR_19;
 struct l_sigframe *VAR_20, VAR_21;
 l_sigset_t VAR_22;
 int VAR_23;
 int VAR_24, VAR_25;

 VAR_24 = VAR_14->ksi_signo;
 VAR_25 = VAR_14->ksi_code;
 FUNC_1(VAR_17, VAR_0);
 VAR_18 = VAR_17->p_sigacts;
 FUNC_11(&VAR_18->ps_mtx, VAR_0);
 if (FUNC_4(VAR_18->ps_siginfo, VAR_24)) {

  FUNC_10(VAR_13, VAR_14, VAR_15);
  return;
 }

 VAR_19 = VAR_16->td_frame;
 VAR_23 = FUNC_16(VAR_19->tf_rsp);


 if ((VAR_16->td_pflags & VAR_5) && !VAR_23 &&
     FUNC_4(VAR_18->ps_sigonstack, VAR_24)) {
  VAR_20 = (struct l_sigframe *)((uintptr_t)VAR_16->td_sigstk.ss_sp +
      VAR_16->td_sigstk.ss_size - sizeof(struct l_sigframe));
 } else
  VAR_20 = (struct l_sigframe *)VAR_19->tf_rsp - 1;
 FUNC_13(&VAR_18->ps_mtx);
 FUNC_2(VAR_17);


 VAR_24 = FUNC_5(VAR_24);

 FUNC_8(&VAR_21, sizeof(VAR_21));

 VAR_21.sf_handler = FUNC_3(VAR_13);
 VAR_21.sf_sig = VAR_24;

 FUNC_6(VAR_15, &VAR_22);


 VAR_21.sf_sc.sc_mask = VAR_22.__mask;
 VAR_21.sf_sc.sc_gs = VAR_19->tf_gs;
 VAR_21.sf_sc.sc_fs = VAR_19->tf_fs;
 VAR_21.sf_sc.sc_es = VAR_19->tf_es;
 VAR_21.sf_sc.sc_ds = VAR_19->tf_ds;
 VAR_21.sf_sc.sc_edi = VAR_19->tf_rdi;
 VAR_21.sf_sc.sc_esi = VAR_19->tf_rsi;
 VAR_21.sf_sc.sc_ebp = VAR_19->tf_rbp;
 VAR_21.sf_sc.sc_ebx = VAR_19->tf_rbx;
 VAR_21.sf_sc.sc_esp = VAR_19->tf_rsp;
 VAR_21.sf_sc.sc_edx = VAR_19->tf_rdx;
 VAR_21.sf_sc.sc_ecx = VAR_19->tf_rcx;
 VAR_21.sf_sc.sc_eax = VAR_19->tf_rax;
 VAR_21.sf_sc.sc_eip = VAR_19->tf_rip;
 VAR_21.sf_sc.sc_cs = VAR_19->tf_cs;
 VAR_21.sf_sc.sc_eflags = VAR_19->tf_rflags;
 VAR_21.sf_sc.sc_esp_at_signal = VAR_19->tf_rsp;
 VAR_21.sf_sc.sc_ss = VAR_19->tf_ss;
 VAR_21.sf_sc.sc_err = VAR_19->tf_err;
 VAR_21.sf_sc.sc_cr2 = (u_int32_t)(uintptr_t)VAR_14->ksi_addr;
 VAR_21.sf_sc.sc_trapno = FUNC_7(VAR_25);

 VAR_21.sf_extramask[0] = VAR_22.__mask;

 if (FUNC_9(&VAR_21, VAR_20, sizeof(VAR_21)) != 0) {




  FUNC_0(VAR_17);
  FUNC_15(VAR_16, VAR_4);
 }


 VAR_19->tf_rsp = FUNC_3(VAR_20);
 VAR_19->tf_rip = VAR_12;
 VAR_19->tf_rflags &= ~(VAR_3 | VAR_2);
 VAR_19->tf_cs = VAR_7;
 VAR_19->tf_ss = VAR_8;
 VAR_19->tf_ds = VAR_8;
 VAR_19->tf_es = VAR_8;
 VAR_19->tf_fs = VAR_9;
 VAR_19->tf_gs = VAR_10;
 VAR_19->tf_flags = VAR_6;
 FUNC_14(VAR_16->td_pcb, VAR_1);
 FUNC_0(VAR_17);
 FUNC_12(&VAR_18->ps_mtx);
}
