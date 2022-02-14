
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_3__* td_pcb; TYPE_2__* td_proc; } ;
struct TYPE_6__ {int pcb_gs; } ;
struct TYPE_4__ {scalar_t__ md_ldt; } ;
struct TYPE_5__ {TYPE_1__ p_md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct thread *VAR_2)
{





 FUNC_1(&VAR_1);
 if (VAR_2->td_proc->p_md.md_ldt) {
  VAR_2->td_pcb->pcb_gs = VAR_0;
  FUNC_0(VAR_0);
  FUNC_3(VAR_2);
 } else
  FUNC_2(&VAR_1);
}
