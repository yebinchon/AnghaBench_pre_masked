
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vatpic {int vm; struct atpic* atpic; } ;
struct atpic {int intr_raised; int service; int request; int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct vatpic*,char*,int ,int ,int ) ;
 int FUNC_2 (struct vatpic*,char*,int,int ,int ,int ) ;
 int FUNC_3 (struct vatpic*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct atpic*) ;
 int FUNC_6 (struct vatpic*,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct vatpic *VAR_1)
{
 struct atpic *VAR_2;
 int VAR_3;

 FUNC_0(FUNC_3(VAR_1), ("vatpic_notify_intr not locked"));




 VAR_2 = &VAR_1->atpic[1];
 if (!VAR_2->intr_raised &&
     (VAR_3 = FUNC_5(VAR_2)) != -1) {
  FUNC_2(VAR_1, "atpic slave notify pin = %d "
      "(imr 0x%x irr 0x%x isr 0x%x)", VAR_3,
      VAR_2->mask, VAR_2->request, VAR_2->service);




  VAR_2->intr_raised = 1;
  FUNC_6(VAR_1, 2, 1);
  FUNC_6(VAR_1, 2, 0);
 } else {
  FUNC_1(VAR_1, "atpic slave no eligible interrupts "
      "(imr 0x%x irr 0x%x isr 0x%x)",
      VAR_2->mask, VAR_2->request, VAR_2->service);
 }




 VAR_2 = &VAR_1->atpic[0];
 if (!VAR_2->intr_raised &&
     (VAR_3 = FUNC_5(VAR_2)) != -1) {
  FUNC_2(VAR_1, "atpic master notify pin = %d "
      "(imr 0x%x irr 0x%x isr 0x%x)", VAR_3,
      VAR_2->mask, VAR_2->request, VAR_2->service);
  VAR_2->intr_raised = 1;
  FUNC_4(VAR_1->vm, -1, VAR_0);
  FUNC_7(VAR_1->vm, 0);
 } else {
  FUNC_1(VAR_1, "atpic master no eligible interrupts "
      "(imr 0x%x irr 0x%x isr 0x%x)",
      VAR_2->mask, VAR_2->request, VAR_2->service);
 }
}
