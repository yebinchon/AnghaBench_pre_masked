
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_pcb; TYPE_1__* td_frame; } ;
struct TYPE_4__ {int pcb_flags; } ;
struct TYPE_3__ {int tf_spsr; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct thread *VAR_2)
{

 VAR_2->td_frame->tf_spsr &= ~VAR_1;
 VAR_2->td_pcb->pcb_flags &= ~VAR_0;
 return (0);
}
