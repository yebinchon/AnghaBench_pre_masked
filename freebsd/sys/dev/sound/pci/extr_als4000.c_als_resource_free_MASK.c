
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int * lock; scalar_t__ parent_dmat; int * irq; int irqid; int * ih; int * reg; int regid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_2, struct sc_info *VAR_3)
{
 if (VAR_3->reg) {
  FUNC_1(VAR_2, VAR_0, VAR_3->regid, VAR_3->reg);
  VAR_3->reg = ((void*)0);
 }
 if (VAR_3->ih) {
  FUNC_2(VAR_2, VAR_3->irq, VAR_3->ih);
  VAR_3->ih = ((void*)0);
 }
 if (VAR_3->irq) {
  FUNC_1(VAR_2, VAR_1, VAR_3->irqid, VAR_3->irq);
  VAR_3->irq = ((void*)0);
 }
 if (VAR_3->parent_dmat) {
  FUNC_0(VAR_3->parent_dmat);
  VAR_3->parent_dmat = 0;
 }
 if (VAR_3->lock) {
  FUNC_3(VAR_3->lock);
  VAR_3->lock = ((void*)0);
 }
}
