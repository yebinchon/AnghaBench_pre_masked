
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcb {int pcb_dacr; int pcb_l1vec; int * pcb_pl1vec; int pcb_pagedir; } ;
struct l2_bucket {int l2b_phys; } ;
typedef TYPE_2__* pmap_t ;
struct TYPE_6__ {int pm_domain; TYPE_1__* pm_l1; } ;
struct TYPE_5__ {int * l1_kva; int l1_physaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 struct l2_bucket* FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_4 ;

void
FUNC_3(pmap_t VAR_5, struct pcb *VAR_6)
{
 struct l2_bucket *VAR_7;

 VAR_6->pcb_pagedir = VAR_5->pm_l1->l1_physaddr;
 VAR_6->pcb_dacr = (VAR_0 << (VAR_3 * 2)) |
     (VAR_0 << (VAR_5->pm_domain * 2));

 if (VAR_4 < VAR_1) {
  VAR_6->pcb_pl1vec = &VAR_5->pm_l1->l1_kva[FUNC_1(VAR_4)];
  VAR_7 = FUNC_2(VAR_5, VAR_4);
  VAR_6->pcb_l1vec = VAR_7->l2b_phys | VAR_2 |
       FUNC_0(VAR_5->pm_domain) | FUNC_0(VAR_3);
 } else
  VAR_6->pcb_pl1vec = ((void*)0);
}
