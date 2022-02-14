
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {void (* intr_accepted ) (struct vlapic*,int) ;} ;
struct vlapic {int isrvec_stk_top; int* isrvec_stk; TYPE_1__ ops; struct LAPIC* apic_page; } ;
struct LAPIC {int irr0; int isr0; } ;


 int VAR_0 ;
 int FUNC_0 (struct vlapic*,char*) ;
 int FUNC_1 (struct vlapic*,char*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*,int) ;
 void FUNC_4 (struct vlapic*,int) ;
 int FUNC_5 (struct vlapic*) ;

void
FUNC_6(struct vlapic *VAR_1, int VAR_2)
{
 struct LAPIC *VAR_3 = VAR_1->apic_page;
 uint32_t *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_1->ops.intr_accepted)
  return ((*VAR_1->ops.intr_accepted)(VAR_1, VAR_2));





 VAR_6 = (VAR_2 / 32) * 4;

 VAR_4 = &VAR_3->irr0;
 FUNC_2(&VAR_4[VAR_6], 1 << (VAR_2 % 32));
 FUNC_0(VAR_1, "vlapic_intr_accepted");

 VAR_5 = &VAR_3->isr0;
 VAR_5[VAR_6] |= 1 << (VAR_2 % 32);
 FUNC_1(VAR_1, "vlapic_intr_accepted");




 VAR_1->isrvec_stk_top++;

 VAR_7 = VAR_1->isrvec_stk_top;
 if (VAR_7 >= VAR_0)
  FUNC_3("isrvec_stk_top overflow %d", VAR_7);

 VAR_1->isrvec_stk[VAR_7] = VAR_2;
 FUNC_5(VAR_1);
}
