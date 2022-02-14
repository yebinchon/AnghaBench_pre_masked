
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
struct TYPE_2__ {int pcb_esi; int pcb_ebx; } ;



void
FUNC_0(struct thread *VAR_0, void (*VAR_1)(void *), void *VAR_2)
{




 VAR_0->td_pcb->pcb_esi = (int) VAR_1;
 VAR_0->td_pcb->pcb_ebx = (int) VAR_2;
}
