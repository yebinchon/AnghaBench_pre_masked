
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xstate_hdr {int xstate_bv; } ;
struct trapframe {int dummy; } ;
struct TYPE_2__ {scalar_t__ md_stack_base; } ;
struct thread {TYPE_1__ td_md; struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_save; } ;


 int FUNC_0 (struct xstate_hdr*,int) ;
 struct pcb* FUNC_1 (struct thread*) ;
 scalar_t__ FUNC_2 (struct pcb*) ;
 int FUNC_3 (struct thread*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void
FUNC_4(struct thread *VAR_2)
{
 struct pcb *VAR_3;
 struct xstate_hdr *VAR_4;

 FUNC_3(VAR_2);
 VAR_2->td_pcb = VAR_3 = FUNC_1(VAR_2);
 VAR_2->td_frame = (struct trapframe *)VAR_2->td_md.md_stack_base - 1;
 VAR_3->pcb_save = FUNC_2(VAR_3);
 if (VAR_0) {
  VAR_4 = (struct xstate_hdr *)(VAR_3->pcb_save + 1);
  FUNC_0(VAR_4, sizeof(*VAR_4));
  VAR_4->xstate_bv = VAR_1;
 }
}
