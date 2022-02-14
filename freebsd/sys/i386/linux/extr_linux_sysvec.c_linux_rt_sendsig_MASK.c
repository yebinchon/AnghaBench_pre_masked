
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct trapframe {int tf_esp; int tf_eflags; void* tf_ss; void* tf_fs; void* tf_es; void* tf_ds; int tf_cs; int tf_eip; int tf_err; int tf_eax; int tf_ecx; int tf_edx; int tf_ebx; int tf_ebp; int tf_esi; int tf_edi; } ;
struct TYPE_9__ {uintptr_t ss_size; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; TYPE_1__ td_sigstk; struct trapframe* td_frame; struct proc* td_proc; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; } ;
struct proc {struct sigacts* p_sigacts; } ;
struct TYPE_12__ {int sc_esp; int sc_eflags; int sc_esp_at_signal; int sc_trapno; scalar_t__ sc_cr2; int sc_err; void* sc_ss; int sc_cs; int sc_eip; int sc_eax; int sc_ecx; int sc_edx; int sc_ebx; int sc_ebp; int sc_esi; int sc_edi; void* sc_ds; void* sc_es; void* sc_fs; int sc_gs; int sc_mask; } ;
struct TYPE_14__ {int __mask; } ;
struct TYPE_10__ {uintptr_t ss_size; int ss_flags; scalar_t__ ss_sp; } ;
struct TYPE_11__ {TYPE_4__ uc_mcontext; TYPE_8__ uc_sigmask; TYPE_2__ uc_stack; int * uc_link; scalar_t__ uc_flags; } ;
struct l_rt_sigframe {int sf_sig; TYPE_3__ sf_sc; int sf_si; TYPE_3__* sf_ucontext; int * sf_siginfo; int sf_handler; } ;
typedef int sigset_t ;
typedef int sig_t ;
typedef scalar_t__ register_t ;
struct TYPE_13__ {int ksi_signo; int ksi_code; scalar_t__ ksi_addr; } ;
typedef TYPE_5__ ksiginfo_t ;
typedef int frame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*,int ) ;
 int FUNC_2 (struct proc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_8__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct l_rt_sigframe*,int) ;
 scalar_t__ FUNC_8 (struct l_rt_sigframe*,struct l_rt_sigframe*,int) ;
 struct thread* VAR_10 ;
 int FUNC_9 (TYPE_5__*,int *,int) ;
 int VAR_11 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void
FUNC_16(sig_t VAR_12, ksiginfo_t *VAR_13, sigset_t *VAR_14)
{
 struct thread *VAR_15 = VAR_10;
 struct proc *VAR_16 = VAR_15->td_proc;
 struct sigacts *VAR_17;
 struct trapframe *VAR_18;
 struct l_rt_sigframe *VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;

 VAR_21 = VAR_13->ksi_signo;
 VAR_22 = VAR_13->ksi_code;
 FUNC_1(VAR_16, VAR_2);
 VAR_17 = VAR_16->p_sigacts;
 FUNC_10(&VAR_17->ps_mtx, VAR_2);
 VAR_18 = VAR_15->td_frame;
 VAR_23 = FUNC_15(VAR_18->tf_esp);


 if ((VAR_15->td_pflags & VAR_7) && !VAR_23 &&
     FUNC_3(VAR_17->ps_sigonstack, VAR_21)) {
  VAR_19 = (struct l_rt_sigframe *)((uintptr_t)VAR_15->td_sigstk.ss_sp +
      VAR_15->td_sigstk.ss_size - sizeof(struct l_rt_sigframe));
 } else
  VAR_19 = (struct l_rt_sigframe *)VAR_18->tf_esp - 1;
 FUNC_12(&VAR_17->ps_mtx);


 VAR_21 = FUNC_4(VAR_21);

 FUNC_7(&VAR_20, sizeof(VAR_20));

 VAR_20.sf_handler = VAR_12;
 VAR_20.sf_sig = VAR_21;
 VAR_20.sf_siginfo = &VAR_19->sf_si;
 VAR_20.sf_ucontext = &VAR_19->sf_sc;


 FUNC_9(VAR_13, &VAR_20.sf_si, VAR_21);


 VAR_20.sf_sc.uc_flags = 0;
 VAR_20.sf_sc.uc_link = ((void*)0);

 VAR_20.sf_sc.uc_stack.ss_sp = VAR_15->td_sigstk.ss_sp;
 VAR_20.sf_sc.uc_stack.ss_size = VAR_15->td_sigstk.ss_size;
 VAR_20.sf_sc.uc_stack.ss_flags = (VAR_15->td_pflags & VAR_7)
     ? ((VAR_23) ? VAR_1 : 0) : VAR_0;
 FUNC_2(VAR_16);

 FUNC_5(VAR_14, &VAR_20.sf_sc.uc_sigmask);

 VAR_20.sf_sc.uc_mcontext.sc_mask = VAR_20.sf_sc.uc_sigmask.__mask;
 VAR_20.sf_sc.uc_mcontext.sc_gs = FUNC_13();
 VAR_20.sf_sc.uc_mcontext.sc_fs = VAR_18->tf_fs;
 VAR_20.sf_sc.uc_mcontext.sc_es = VAR_18->tf_es;
 VAR_20.sf_sc.uc_mcontext.sc_ds = VAR_18->tf_ds;
 VAR_20.sf_sc.uc_mcontext.sc_edi = VAR_18->tf_edi;
 VAR_20.sf_sc.uc_mcontext.sc_esi = VAR_18->tf_esi;
 VAR_20.sf_sc.uc_mcontext.sc_ebp = VAR_18->tf_ebp;
 VAR_20.sf_sc.uc_mcontext.sc_ebx = VAR_18->tf_ebx;
 VAR_20.sf_sc.uc_mcontext.sc_esp = VAR_18->tf_esp;
 VAR_20.sf_sc.uc_mcontext.sc_edx = VAR_18->tf_edx;
 VAR_20.sf_sc.uc_mcontext.sc_ecx = VAR_18->tf_ecx;
 VAR_20.sf_sc.uc_mcontext.sc_eax = VAR_18->tf_eax;
 VAR_20.sf_sc.uc_mcontext.sc_eip = VAR_18->tf_eip;
 VAR_20.sf_sc.uc_mcontext.sc_cs = VAR_18->tf_cs;
 VAR_20.sf_sc.uc_mcontext.sc_eflags = VAR_18->tf_eflags;
 VAR_20.sf_sc.uc_mcontext.sc_esp_at_signal = VAR_18->tf_esp;
 VAR_20.sf_sc.uc_mcontext.sc_ss = VAR_18->tf_ss;
 VAR_20.sf_sc.uc_mcontext.sc_err = VAR_18->tf_err;
 VAR_20.sf_sc.uc_mcontext.sc_cr2 = (register_t)VAR_13->ksi_addr;
 VAR_20.sf_sc.uc_mcontext.sc_trapno = FUNC_6(VAR_22);

 if (FUNC_8(&VAR_20, VAR_19, sizeof(VAR_20)) != 0) {




  FUNC_0(VAR_16);
  FUNC_14(VAR_15, VAR_6);
 }


 VAR_18->tf_esp = (int)VAR_19;
 VAR_18->tf_eip = VAR_11;
 VAR_18->tf_eflags &= ~(VAR_4 | VAR_5 | VAR_3);
 VAR_18->tf_cs = VAR_8;
 VAR_18->tf_ds = VAR_9;
 VAR_18->tf_es = VAR_9;
 VAR_18->tf_fs = VAR_9;
 VAR_18->tf_ss = VAR_9;
 FUNC_0(VAR_16);
 FUNC_11(&VAR_17->ps_mtx);
}
