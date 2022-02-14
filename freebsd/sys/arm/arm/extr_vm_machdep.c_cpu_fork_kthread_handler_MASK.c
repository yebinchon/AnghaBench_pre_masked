
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_pcb; } ;
typedef void* register_t ;
struct TYPE_3__ {void* sf_r5; void* sf_r4; } ;
struct TYPE_4__ {TYPE_1__ pcb_regs; } ;



void
FUNC_0(struct thread *VAR_0, void (*VAR_1)(void *), void *VAR_2)
{
 VAR_0->td_pcb->pcb_regs.sf_r4 = (register_t)VAR_1;
 VAR_0->td_pcb->pcb_regs.sf_r5 = (register_t)VAR_2;
}
