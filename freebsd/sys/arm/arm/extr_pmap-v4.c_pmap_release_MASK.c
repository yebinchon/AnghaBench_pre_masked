
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcb {int pcb_pagedir; int pcb_dacr; int pcb_l1vec; int * pcb_pl1vec; } ;
typedef int pmap_t ;
struct TYPE_2__ {struct pcb* td_pcb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pcb* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct pcb* VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_13(pmap_t VAR_5)
{
 struct pcb *VAR_6;

 FUNC_9(VAR_5);
 FUNC_3();
 FUNC_12(VAR_5);
 FUNC_1();
 if (VAR_4 < VAR_0) {
  struct pcb *VAR_7 = FUNC_0(VAR_7);
  VAR_6 = VAR_3;
  if (FUNC_10(VAR_5)) {






   FUNC_5();
   *VAR_6->pcb_pl1vec = VAR_6->pcb_l1vec;
   FUNC_2(VAR_6->pcb_dacr);
   FUNC_4(VAR_6->pcb_pagedir);
   FUNC_6();
  }
  FUNC_11(VAR_5, VAR_4, VAR_4 + VAR_1);




  VAR_7->pcb_pl1vec = VAR_6->pcb_pl1vec;
  VAR_7->pcb_l1vec = VAR_6->pcb_l1vec;
  VAR_7->pcb_dacr = VAR_6->pcb_dacr;
  VAR_7->pcb_pagedir = VAR_6->pcb_pagedir;

 }
 FUNC_8(VAR_5);

 FUNC_7("pmap_release()\n");
}
