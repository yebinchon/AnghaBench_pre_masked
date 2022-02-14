
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int msr_apicbase; struct LAPIC* apic_page; } ;
struct LAPIC {int svr; } ;


 int VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(struct vlapic *VAR_2)
{
 struct LAPIC *VAR_3 = VAR_2->apic_page;

 if ((VAR_2->msr_apicbase & VAR_0) != 0 &&
     (VAR_3->svr & VAR_1) != 0)
  return (1);
 else
  return (0);
}
