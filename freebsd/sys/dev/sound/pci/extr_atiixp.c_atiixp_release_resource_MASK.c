
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp_info {scalar_t__ registered_channels; int * lock; int * sgd_dmat; int * sgd_table; int sgd_dmamap; scalar_t__ sgd_addr; int * parent_dmat; int * irq; int irqid; int dev; int * reg; int regid; int regtype; int * ih; int * codec; int poll_timer; scalar_t__ polling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct atiixp_info*) ;
 int FUNC_2 (struct atiixp_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct atiixp_info*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct atiixp_info *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->registered_channels != 0) {
  FUNC_1(VAR_2);
  VAR_2->polling = 0;
  FUNC_9(&VAR_2->poll_timer);
  FUNC_2(VAR_2);
  FUNC_8(&VAR_2->poll_timer);
 }
 if (VAR_2->codec) {
  FUNC_0(VAR_2->codec);
  VAR_2->codec = ((void*)0);
 }
 if (VAR_2->ih) {
  FUNC_7(VAR_2->dev, VAR_2->irq, VAR_2->ih);
  VAR_2->ih = ((void*)0);
 }
 if (VAR_2->reg) {
  FUNC_6(VAR_2->dev, VAR_2->regtype, VAR_2->regid, VAR_2->reg);
  VAR_2->reg = ((void*)0);
 }
 if (VAR_2->irq) {
  FUNC_6(VAR_2->dev, VAR_1, VAR_2->irqid, VAR_2->irq);
  VAR_2->irq = ((void*)0);
 }
 if (VAR_2->parent_dmat) {
  FUNC_3(VAR_2->parent_dmat);
  VAR_2->parent_dmat = ((void*)0);
 }
 if (VAR_2->sgd_addr) {
  FUNC_4(VAR_2->sgd_dmat, VAR_2->sgd_dmamap);
  VAR_2->sgd_addr = 0;
 }
 if (VAR_2->sgd_table) {
  FUNC_5(VAR_2->sgd_dmat, VAR_2->sgd_table, VAR_2->sgd_dmamap);
  VAR_2->sgd_table = ((void*)0);
 }
 if (VAR_2->sgd_dmat) {
  FUNC_3(VAR_2->sgd_dmat);
  VAR_2->sgd_dmat = ((void*)0);
 }
 if (VAR_2->lock) {
  FUNC_11(VAR_2->lock);
  VAR_2->lock = ((void*)0);
 }
 FUNC_10(VAR_2, VAR_0);
}
