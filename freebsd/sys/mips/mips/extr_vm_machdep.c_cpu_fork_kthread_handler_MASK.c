
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_pcb; } ;
typedef void* register_t ;
struct TYPE_2__ {void** pcb_context; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void
FUNC_0(struct thread *VAR_2, void (*VAR_3)(void *), void *VAR_4)
{




 VAR_2->td_pcb->pcb_context[VAR_0] = (register_t)(intptr_t)VAR_3;
 VAR_2->td_pcb->pcb_context[VAR_1] = (register_t)(intptr_t)VAR_4;
}
