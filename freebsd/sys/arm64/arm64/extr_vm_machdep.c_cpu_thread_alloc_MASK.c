
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int td_kstack_pages; struct pcb* td_pcb; struct trapframe* td_frame; scalar_t__ td_kstack; } ;
struct pcb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;

void
FUNC_1(struct thread *VAR_1)
{

 VAR_1->td_pcb = (struct pcb *)(VAR_1->td_kstack +
     VAR_1->td_kstack_pages * VAR_0) - 1;
 VAR_1->td_frame = (struct trapframe *)FUNC_0(
     (struct trapframe *)VAR_1->td_pcb - 1);
}
