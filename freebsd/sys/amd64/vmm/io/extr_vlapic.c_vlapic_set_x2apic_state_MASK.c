
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {int dummy; } ;
struct TYPE_2__ {int (* enable_x2apic_mode ) (struct vlapic*) ;} ;
struct vlapic {TYPE_1__ ops; struct LAPIC* apic_page; int msr_apicbase; } ;
struct LAPIC {int dfr; scalar_t__ ldr; int id; } ;
typedef enum x2apic_state { ____Placeholder_x2apic_state } x2apic_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vlapic*) ;
 int FUNC_1 (struct vlapic*) ;
 struct vlapic* FUNC_2 (struct vm*,int) ;
 scalar_t__ FUNC_3 (struct vlapic*) ;
 scalar_t__ FUNC_4 (struct vlapic*) ;

void
FUNC_5(struct vm *VAR_3, int VAR_4, enum x2apic_state VAR_5)
{
 struct vlapic *VAR_6;
 struct LAPIC *VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_4);

 if (VAR_5 == VAR_1)
  VAR_6->msr_apicbase &= ~VAR_0;
 else
  VAR_6->msr_apicbase |= VAR_0;







 VAR_7 = VAR_6->apic_page;
 VAR_7->id = FUNC_1(VAR_6);
 if (FUNC_3(VAR_6)) {
  VAR_7->ldr = FUNC_4(VAR_6);
  VAR_7->dfr = 0;
 } else {
  VAR_7->ldr = 0;
  VAR_7->dfr = 0xffffffff;
 }

 if (VAR_5 == VAR_2) {
  if (VAR_6->ops.enable_x2apic_mode)
   (*VAR_6->ops.enable_x2apic_mode)(VAR_6);
 }
}
