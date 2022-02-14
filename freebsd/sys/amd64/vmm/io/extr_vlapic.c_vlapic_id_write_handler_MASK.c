
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {struct LAPIC* apic_page; } ;
struct LAPIC {int id; } ;


 int FUNC_0 (struct vlapic*) ;

void
FUNC_1(struct vlapic *VAR_0)
{
 struct LAPIC *VAR_1;





 VAR_1 = VAR_0->apic_page;
 VAR_1->id = FUNC_0(VAR_0);
}
