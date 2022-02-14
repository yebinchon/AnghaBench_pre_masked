
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int mulhi; int mullo; int pc; int f0; int zero; int sp; } ;
struct TYPE_5__ {int md_flags; int md_tls; } ;
struct thread {TYPE_1__ td_md; struct trapframe* td_frame; } ;
struct TYPE_6__ {int mc_fpused; int mc_tls; int mulhi; int mullo; int mc_pc; scalar_t__* mc_regs; int mc_fpregs; int mc_onstack; } ;
typedef TYPE_2__ mcontext_t ;
struct TYPE_7__ {int td_proc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (void*,void*,int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct thread *VAR_6, mcontext_t *VAR_7, int VAR_8)
{
 struct trapframe *VAR_9;

 VAR_9 = VAR_6->td_frame;
 FUNC_0(VAR_5->td_proc);
 VAR_7->mc_onstack = FUNC_3(VAR_9->sp);
 FUNC_1(VAR_5->td_proc);
 FUNC_2((void *)&VAR_6->td_frame->zero, (void *)&VAR_7->mc_regs,
     sizeof(VAR_7->mc_regs));

 VAR_7->mc_fpused = VAR_6->td_md.md_flags & VAR_2;
 if (VAR_7->mc_fpused) {
  FUNC_2((void *)&VAR_6->td_frame->f0, (void *)&VAR_7->mc_fpregs,
      sizeof(VAR_7->mc_fpregs));
 }
 if (VAR_8 & VAR_1) {
  VAR_7->mc_regs[VAR_3] = 0;
  VAR_7->mc_regs[VAR_4] = 0;
  VAR_7->mc_regs[VAR_0] = 0;
 }

 VAR_7->mc_pc = VAR_6->td_frame->pc;
 VAR_7->mullo = VAR_6->td_frame->mullo;
 VAR_7->mulhi = VAR_6->td_frame->mulhi;
 VAR_7->mc_tls = VAR_6->td_md.md_tls;
 return (0);
}
