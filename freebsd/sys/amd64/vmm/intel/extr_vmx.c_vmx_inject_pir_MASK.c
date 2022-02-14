
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct vlapic_vtx {struct pir_desc* pir_desc; } ;
struct vlapic {int vcpuid; int vm; struct LAPIC* apic_page; } ;
struct pir_desc {int * pir; int pending; } ;
struct LAPIC {int irr0; int irr1; int irr2; int irr3; int irr4; int irr5; int irr6; int irr7; } ;


 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,char*,int,int) ;
 int FUNC_2 (struct vlapic*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct vlapic *VAR_1)
{
 struct vlapic_vtx *VAR_2;
 struct pir_desc *VAR_3;
 struct LAPIC *VAR_4;
 uint64_t VAR_5, VAR_6;
 int VAR_7, VAR_8 = -1;
 uint16_t VAR_9, VAR_10;

 VAR_2 = (struct vlapic_vtx *)VAR_1;
 VAR_3 = VAR_2->pir_desc;
 if (FUNC_3(&VAR_3->pending, 1, 0) == 0) {
  FUNC_0(VAR_1->vm, VAR_1->vcpuid, "vmx_inject_pir: "
      "no posted interrupt pending");
  return;
 }

 VAR_6 = 0;
 VAR_8 = -1;
 VAR_4 = VAR_1->apic_page;

 VAR_5 = FUNC_4(&VAR_3->pir[0]);
 if (VAR_5 != 0) {
  VAR_4->irr0 |= VAR_5;
  VAR_4->irr1 |= VAR_5 >> 32;
  VAR_8 = 0;
  VAR_6 = VAR_5;
 }

 VAR_5 = FUNC_4(&VAR_3->pir[1]);
 if (VAR_5 != 0) {
  VAR_4->irr2 |= VAR_5;
  VAR_4->irr3 |= VAR_5 >> 32;
  VAR_8 = 64;
  VAR_6 = VAR_5;
 }

 VAR_5 = FUNC_4(&VAR_3->pir[2]);
 if (VAR_5 != 0) {
  VAR_4->irr4 |= VAR_5;
  VAR_4->irr5 |= VAR_5 >> 32;
  VAR_8 = 128;
  VAR_6 = VAR_5;
 }

 VAR_5 = FUNC_4(&VAR_3->pir[3]);
 if (VAR_5 != 0) {
  VAR_4->irr6 |= VAR_5;
  VAR_4->irr7 |= VAR_5 >> 32;
  VAR_8 = 192;
  VAR_6 = VAR_5;
 }

 FUNC_2(VAR_1, "vmx_inject_pir");
 if (VAR_6 != 0) {
  VAR_7 = VAR_8 + FUNC_5(VAR_6) - 1;
  VAR_9 = FUNC_6(VAR_0);
  VAR_10 = (VAR_9 & 0xFF00) | VAR_7;
  if (VAR_10 > VAR_9) {
   FUNC_7(VAR_0, VAR_10);
   FUNC_1(VAR_1->vm, VAR_1->vcpuid, "vmx_inject_pir: "
       "guest_intr_status changed from 0x%04x to 0x%04x",
       VAR_9, VAR_10);
  }
 }
}
