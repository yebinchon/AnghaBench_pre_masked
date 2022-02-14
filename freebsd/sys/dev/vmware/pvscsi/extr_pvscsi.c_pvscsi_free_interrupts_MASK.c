
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int dev; scalar_t__ use_msi_or_msix; int * irq_res; int irq_id; int * irq_handler; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct pvscsi_softc *VAR_1)
{

 if (VAR_1->irq_handler != ((void*)0)) {
  FUNC_1(VAR_1->dev, VAR_1->irq_res, VAR_1->irq_handler);
 }
 if (VAR_1->irq_res != ((void*)0)) {
  FUNC_0(VAR_1->dev, VAR_0, VAR_1->irq_id,
      VAR_1->irq_res);
 }
 if (VAR_1->use_msi_or_msix) {
  FUNC_2(VAR_1->dev);
 }
}
