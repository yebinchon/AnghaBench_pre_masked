
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {scalar_t__ esr_pending; struct LAPIC* apic_page; } ;
struct LAPIC {scalar_t__ esr; } ;



void
FUNC_0(struct vlapic *VAR_0)
{
 struct LAPIC *VAR_1;

 VAR_1 = VAR_0->apic_page;
 VAR_1->esr = VAR_0->esr_pending;
 VAR_0->esr_pending = 0;
}
