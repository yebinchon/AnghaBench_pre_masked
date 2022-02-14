
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {int * pcb_tssp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(struct thread *VAR_1)
{
 struct pcb *VAR_2;

 VAR_2 = VAR_1->td_pcb;




 if (VAR_2->pcb_tssp != ((void*)0)) {
  FUNC_2((vm_offset_t)VAR_2->pcb_tssp,
      (vm_offset_t)VAR_2->pcb_tssp + FUNC_0(VAR_0 + 1));
  FUNC_1((vm_offset_t)VAR_2->pcb_tssp, FUNC_0(VAR_0 + 1));
  VAR_2->pcb_tssp = ((void*)0);
 }
}
