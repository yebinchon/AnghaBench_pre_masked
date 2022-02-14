
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {scalar_t__ isrvec_stk_top; int vcpuid; int vm; struct LAPIC* apic_page; } ;
struct LAPIC {int isr0; int tmr0; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (struct vlapic*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct vlapic*) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct vlapic *VAR_1)
{
 struct LAPIC *VAR_2 = VAR_1->apic_page;
 uint32_t *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_3 = &VAR_2->isr0;
 VAR_4 = &VAR_2->tmr0;

 for (VAR_5 = 7; VAR_5 >= 0; VAR_5--) {
  VAR_6 = VAR_5 * 4;
  VAR_7 = FUNC_3(VAR_3[VAR_6]);
  if (VAR_7-- != 0) {
   if (VAR_1->isrvec_stk_top <= 0) {
    FUNC_4("invalid vlapic isrvec_stk_top %d",
          VAR_1->isrvec_stk_top);
   }
   VAR_3[VAR_6] &= ~(1 << VAR_7);
   VAR_8 = VAR_5 * 32 + VAR_7;
   FUNC_1(VAR_1->vm, VAR_1->vcpuid, "EOI vector %d",
       VAR_8);
   FUNC_2(VAR_1, "vlapic_process_eoi");
   VAR_1->isrvec_stk_top--;
   FUNC_6(VAR_1);
   if ((VAR_4[VAR_6] & (1 << VAR_7)) != 0) {
    FUNC_5(VAR_1->vm, VAR_1->vcpuid,
        VAR_8);
   }
   return;
  }
 }
 FUNC_0(VAR_1->vm, VAR_1->vcpuid, "Gratuitous EOI");
 FUNC_7(VAR_1->vm, VAR_1->vcpuid, VAR_0, 1);
}
