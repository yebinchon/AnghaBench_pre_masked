
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int msix_vectors; int mrsas_dev; int ** intr_handle; int ** mrsas_irq; int * irq_id; int msix_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct mrsas_softc *VAR_1)
{
 int VAR_2;

 if (!VAR_1->msix_enable) {
  if (VAR_1->intr_handle[0])
   FUNC_1(VAR_1->mrsas_dev, VAR_1->mrsas_irq[0], VAR_1->intr_handle[0]);
  if (VAR_1->mrsas_irq[0] != ((void*)0))
   FUNC_0(VAR_1->mrsas_dev, VAR_0,
       VAR_1->irq_id[0], VAR_1->mrsas_irq[0]);
  VAR_1->intr_handle[0] = ((void*)0);
 } else {
  for (VAR_2 = 0; VAR_2 < VAR_1->msix_vectors; VAR_2++) {
   if (VAR_1->intr_handle[VAR_2])
    FUNC_1(VAR_1->mrsas_dev, VAR_1->mrsas_irq[VAR_2],
        VAR_1->intr_handle[VAR_2]);

   if (VAR_1->mrsas_irq[VAR_2] != ((void*)0))
    FUNC_0(VAR_1->mrsas_dev, VAR_0,
        VAR_1->irq_id[VAR_2], VAR_1->mrsas_irq[VAR_2]);

   VAR_1->intr_handle[VAR_2] = ((void*)0);
  }
  FUNC_2(VAR_1->mrsas_dev);
 }

}
