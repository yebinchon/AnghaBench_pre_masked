
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_5__ {int fpscr; } ;
struct pcb {int pcb_vfpcpu; TYPE_1__ pcb_vfpstate; scalar_t__ pcb_flags; } ;
struct TYPE_7__ {struct pcb* pc_curpcb; } ;
struct TYPE_6__ {int td_kstack_pages; struct pcb* td_pcb; int * td_frame; scalar_t__ td_kstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__ VAR_6 ;

void
FUNC_1(vm_offset_t VAR_7)
{
 FUNC_0(&VAR_4, &VAR_6);
 VAR_6 = VAR_7;
 VAR_6 = VAR_2;
 VAR_6 = (struct pcb *)(VAR_6 +
     VAR_6 * VAR_0) - 1;
 VAR_6->pcb_flags = 0;
 VAR_6->pcb_vfpcpu = -1;
 VAR_6->pcb_vfpstate.fpscr = VAR_1;
 VAR_6 = &VAR_5;
 VAR_3->pc_curpcb = VAR_6;
}
