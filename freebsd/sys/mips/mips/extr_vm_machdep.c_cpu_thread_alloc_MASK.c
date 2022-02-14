
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* md_upte; } ;
struct thread {int td_kstack; int td_kstack_pages; TYPE_1__ td_md; struct pcb* td_pcb; int * td_frame; } ;
struct pcb {int pcb_regs; } ;
typedef int pt_entry_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_1 (int ,int) ;

void
FUNC_2(struct thread *VAR_5)
{
 pt_entry_t *VAR_6;
 int VAR_7;

 FUNC_0((VAR_5->td_kstack & (1 << VAR_1)) == 0, ("kernel stack must be aligned."));
 VAR_5->td_pcb = (struct pcb *)(VAR_5->td_kstack +
     VAR_5->td_kstack_pages * VAR_2) - 1;
 VAR_5->td_frame = &VAR_5->td_pcb->pcb_regs;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5->td_kstack + VAR_7 * VAR_2);
  VAR_5->td_md.md_upte[VAR_7] = *VAR_6 & ~VAR_3;
 }
}
