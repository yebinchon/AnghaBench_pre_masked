
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xstate_hdr {int xstate_bv; } ;
struct trapframe {int dummy; } ;
struct thread {struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_save; int * pcb_ext; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xstate_hdr*,int) ;
 struct pcb* FUNC_1 (struct thread*) ;
 scalar_t__ FUNC_2 (struct pcb*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_3(struct thread *VAR_3)
{
 struct pcb *VAR_4;
 struct xstate_hdr *VAR_5;

 VAR_3->td_pcb = VAR_4 = FUNC_1(VAR_3);
 VAR_3->td_frame = (struct trapframe *)((caddr_t)VAR_4 -
     VAR_0) - 1;
 VAR_4->pcb_ext = ((void*)0);
 VAR_4->pcb_save = FUNC_2(VAR_4);
 if (VAR_1) {
  VAR_5 = (struct xstate_hdr *)(VAR_4->pcb_save + 1);
  FUNC_0(VAR_5, sizeof(*VAR_5));
  VAR_5->xstate_bv = VAR_2;
 }
}
