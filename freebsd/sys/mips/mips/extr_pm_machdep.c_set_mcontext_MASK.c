
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int mulhi; int mullo; int pc; int f0; int zero; } ;
struct TYPE_4__ {int md_flags; int md_tls; } ;
struct thread {TYPE_1__ td_md; struct trapframe* td_frame; } ;
struct TYPE_5__ {int mc_fpused; int mc_tls; int mulhi; int mullo; int mc_pc; int mc_fpregs; int mc_regs; } ;
typedef TYPE_2__ mcontext_t ;


 int VAR_0 ;
 int FUNC_0 (void*,void*,int) ;

int
FUNC_1(struct thread *VAR_1, mcontext_t *VAR_2)
{
 struct trapframe *VAR_3;

 VAR_3 = VAR_1->td_frame;
 FUNC_0((void *)&VAR_2->mc_regs, (void *)&VAR_1->td_frame->zero,
     sizeof(VAR_2->mc_regs));

 VAR_1->td_md.md_flags = VAR_2->mc_fpused & VAR_0;
 if (VAR_2->mc_fpused) {
  FUNC_0((void *)&VAR_2->mc_fpregs, (void *)&VAR_1->td_frame->f0,
      sizeof(VAR_2->mc_fpregs));
 }
 VAR_1->td_frame->pc = VAR_2->mc_pc;
 VAR_1->td_frame->mullo = VAR_2->mullo;
 VAR_1->td_frame->mulhi = VAR_2->mulhi;
 VAR_1->td_md.md_tls = VAR_2->mc_tls;


 return (0);
}
