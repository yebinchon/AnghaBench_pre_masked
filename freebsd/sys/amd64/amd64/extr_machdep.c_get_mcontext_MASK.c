
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int tf_flags; int tf_gs; int tf_fs; int tf_es; int tf_ds; int tf_ss; int tf_rsp; int tf_cs; int tf_rip; int tf_rdx; int tf_rax; int tf_rflags; int tf_rcx; int tf_rbx; int tf_rbp; int tf_rsi; int tf_rdi; int tf_r8; int tf_r9; int tf_r10; int tf_r11; int tf_r12; int tf_r13; int tf_r14; int tf_r15; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int pcb_gsbase; int pcb_fsbase; } ;
struct TYPE_5__ {int mc_len; int mc_spare; scalar_t__ mc_xfpustate_len; scalar_t__ mc_xfpustate; int mc_gsbase; int mc_fsbase; int mc_flags; int mc_gs; int mc_fs; int mc_es; int mc_ds; int mc_ss; int mc_rsp; int mc_cs; int mc_rip; int mc_rdx; int mc_rax; int mc_rflags; int mc_rcx; int mc_rbx; int mc_rbp; int mc_rsi; int mc_rdi; int mc_r8; int mc_r9; int mc_r10; int mc_r11; int mc_r12; int mc_r13; int mc_r14; int mc_r15; int mc_onstack; } ;
typedef TYPE_1__ mcontext_t ;
struct TYPE_6__ {int td_proc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 TYPE_4__* VAR_2 ;
 int FUNC_3 (struct thread*,TYPE_1__*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pcb*) ;

int
FUNC_6(struct thread *VAR_3, mcontext_t *VAR_4, int VAR_5)
{
 struct pcb *VAR_6;
 struct trapframe *VAR_7;

 VAR_6 = VAR_3->td_pcb;
 VAR_7 = VAR_3->td_frame;
 FUNC_0(VAR_2->td_proc);
 VAR_4->mc_onstack = FUNC_4(VAR_7->tf_rsp);
 FUNC_1(VAR_2->td_proc);
 VAR_4->mc_r15 = VAR_7->tf_r15;
 VAR_4->mc_r14 = VAR_7->tf_r14;
 VAR_4->mc_r13 = VAR_7->tf_r13;
 VAR_4->mc_r12 = VAR_7->tf_r12;
 VAR_4->mc_r11 = VAR_7->tf_r11;
 VAR_4->mc_r10 = VAR_7->tf_r10;
 VAR_4->mc_r9 = VAR_7->tf_r9;
 VAR_4->mc_r8 = VAR_7->tf_r8;
 VAR_4->mc_rdi = VAR_7->tf_rdi;
 VAR_4->mc_rsi = VAR_7->tf_rsi;
 VAR_4->mc_rbp = VAR_7->tf_rbp;
 VAR_4->mc_rbx = VAR_7->tf_rbx;
 VAR_4->mc_rcx = VAR_7->tf_rcx;
 VAR_4->mc_rflags = VAR_7->tf_rflags;
 if (VAR_5 & VAR_0) {
  VAR_4->mc_rax = 0;
  VAR_4->mc_rdx = 0;
  VAR_4->mc_rflags &= ~VAR_1;
 } else {
  VAR_4->mc_rax = VAR_7->tf_rax;
  VAR_4->mc_rdx = VAR_7->tf_rdx;
 }
 VAR_4->mc_rip = VAR_7->tf_rip;
 VAR_4->mc_cs = VAR_7->tf_cs;
 VAR_4->mc_rsp = VAR_7->tf_rsp;
 VAR_4->mc_ss = VAR_7->tf_ss;
 VAR_4->mc_ds = VAR_7->tf_ds;
 VAR_4->mc_es = VAR_7->tf_es;
 VAR_4->mc_fs = VAR_7->tf_fs;
 VAR_4->mc_gs = VAR_7->tf_gs;
 VAR_4->mc_flags = VAR_7->tf_flags;
 VAR_4->mc_len = sizeof(*VAR_4);
 FUNC_3(VAR_3, VAR_4, ((void*)0), 0);
 FUNC_5(VAR_6);
 VAR_4->mc_fsbase = VAR_6->pcb_fsbase;
 VAR_4->mc_gsbase = VAR_6->pcb_gsbase;
 VAR_4->mc_xfpustate = 0;
 VAR_4->mc_xfpustate_len = 0;
 FUNC_2(VAR_4->mc_spare, sizeof(VAR_4->mc_spare));
 return (0);
}
