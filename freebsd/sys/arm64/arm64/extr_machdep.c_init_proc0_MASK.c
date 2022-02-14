
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct pcpu {struct pcb* pc_curpcb; } ;
struct pcb {int pcb_vfpcpu; int pcb_fpustate; int * pcb_fpusaved; scalar_t__ pcb_fpflags; } ;
struct TYPE_3__ {int td_kstack_pages; struct pcb* td_pcb; int * td_frame; scalar_t__ td_kstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pcpu* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_7)
{
 struct pcpu *VAR_8 = &VAR_3[0];

 FUNC_0(&VAR_4, &VAR_6);
 VAR_6 = VAR_7;
 VAR_6 = VAR_0;
 VAR_6 = (struct pcb *)(VAR_6 +
     VAR_6 * VAR_1) - 1;
 VAR_6->pcb_fpflags = 0;
 VAR_6->pcb_fpusaved = &VAR_6->pcb_fpustate;
 VAR_6->pcb_vfpcpu = VAR_2;
 VAR_6 = &VAR_5;
 VAR_8->pc_curpcb = VAR_6;
}
