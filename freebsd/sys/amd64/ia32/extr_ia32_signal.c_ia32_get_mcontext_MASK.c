
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_flags; int tf_ss; int tf_rsp; int tf_cs; int tf_rip; int tf_rcx; int tf_rbx; int tf_rdx; int tf_rax; int tf_rflags; int tf_rbp; int tf_rsi; int tf_rdi; int tf_ds; int tf_es; int tf_fs; int tf_gs; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_gsbase; int pcb_fsbase; } ;
struct ia32_mcontext {int mc_len; int mc_spare2; scalar_t__ mc_xfpustate_len; scalar_t__ mc_xfpustate; int mc_gsbase; int mc_fsbase; int mc_flags; int mc_ss; int mc_esp; int mc_cs; int mc_eip; int mc_ecx; int mc_ebx; int mc_edx; int mc_eax; int mc_eflags; int mc_isp; int mc_ebp; int mc_esi; int mc_edi; int mc_ds; int mc_es; int mc_fs; int mc_gs; int mc_onstack; } ;
struct TYPE_2__ {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct thread*,struct ia32_mcontext*,int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_3, struct ia32_mcontext *VAR_4, int VAR_5)
{
 struct pcb *VAR_6;
 struct trapframe *VAR_7;

 VAR_6 = VAR_3->td_pcb;
 VAR_7 = VAR_3->td_frame;

 FUNC_0(VAR_2->td_proc);
 VAR_4->mc_onstack = FUNC_4(VAR_7->tf_rsp);
 FUNC_1(VAR_2->td_proc);

 VAR_4->mc_gs = VAR_7->tf_gs;
 VAR_4->mc_fs = VAR_7->tf_fs;
 VAR_4->mc_es = VAR_7->tf_es;
 VAR_4->mc_ds = VAR_7->tf_ds;
 VAR_4->mc_edi = VAR_7->tf_rdi;
 VAR_4->mc_esi = VAR_7->tf_rsi;
 VAR_4->mc_ebp = VAR_7->tf_rbp;
 VAR_4->mc_isp = VAR_7->tf_rsp;
 VAR_4->mc_eflags = VAR_7->tf_rflags;
 if (VAR_5 & VAR_0) {
  VAR_4->mc_eax = 0;
  VAR_4->mc_edx = 0;
  VAR_4->mc_eflags &= ~VAR_1;
 } else {
  VAR_4->mc_eax = VAR_7->tf_rax;
  VAR_4->mc_edx = VAR_7->tf_rdx;
 }
 VAR_4->mc_ebx = VAR_7->tf_rbx;
 VAR_4->mc_ecx = VAR_7->tf_rcx;
 VAR_4->mc_eip = VAR_7->tf_rip;
 VAR_4->mc_cs = VAR_7->tf_cs;
 VAR_4->mc_esp = VAR_7->tf_rsp;
 VAR_4->mc_ss = VAR_7->tf_ss;
 VAR_4->mc_len = sizeof(*VAR_4);
 VAR_4->mc_flags = VAR_7->tf_flags;
 FUNC_3(VAR_3, VAR_4, ((void*)0), 0);
 VAR_4->mc_fsbase = VAR_6->pcb_fsbase;
 VAR_4->mc_gsbase = VAR_6->pcb_gsbase;
 VAR_4->mc_xfpustate = 0;
 VAR_4->mc_xfpustate_len = 0;
 FUNC_2(VAR_4->mc_spare2, sizeof(VAR_4->mc_spare2));
 return (0);
}
