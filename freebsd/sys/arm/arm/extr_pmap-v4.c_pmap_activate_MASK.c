
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct thread {struct pcb* td_pcb; TYPE_1__* td_proc; } ;
struct pcb {int pcb_dacr; scalar_t__ pcb_pagedir; int pcb_l1vec; int * pcb_pl1vec; } ;
typedef int pmap_t ;
struct TYPE_2__ {int p_vmspace; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct thread* VAR_1 ;
 int FUNC_4 (int ,struct pcb*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct thread *VAR_2)
{
 pmap_t VAR_3;
 struct pcb *VAR_4;

 VAR_3 = FUNC_5(VAR_2->td_proc->p_vmspace);
 VAR_4 = VAR_2->td_pcb;

 FUNC_2();
 FUNC_4(VAR_3, VAR_4);

 if (VAR_2 == VAR_1) {
  u_int VAR_5, VAR_6;

  __asm __volatile("mrc p15, 0, %0, c2, c0, 0" : "=r"(VAR_6));
  __asm __volatile("mrc p15, 0, %0, c3, c0, 0" : "=r"(VAR_5));

  VAR_6 &= ~(VAR_0 - 1);

  if (VAR_6 == (u_int)VAR_4->pcb_pagedir &&
      VAR_5 == VAR_4->pcb_dacr) {



   FUNC_3();
   return;
  }
  if (VAR_4->pcb_pl1vec) {

   *VAR_4->pcb_pl1vec = VAR_4->pcb_l1vec;





  }

  FUNC_0(VAR_4->pcb_dacr);
  FUNC_1(VAR_4->pcb_pagedir);
 }
 FUNC_3();
}
