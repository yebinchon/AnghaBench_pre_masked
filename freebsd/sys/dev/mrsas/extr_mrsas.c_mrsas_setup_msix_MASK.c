
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrsas_softc {int msix_vectors; int* irq_id; int mrsas_dev; int * intr_handle; TYPE_1__* irq_context; int ** mrsas_irq; } ;
struct TYPE_2__ {int MSIxIndex; struct mrsas_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,TYPE_1__*,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_6 ;
 int FUNC_3 (struct mrsas_softc*) ;

__attribute__((used)) static int
FUNC_4(struct mrsas_softc *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7->msix_vectors; VAR_8++) {
  VAR_7->irq_context[VAR_8].sc = VAR_7;
  VAR_7->irq_context[VAR_8].MSIxIndex = VAR_8;
  VAR_7->irq_id[VAR_8] = VAR_8 + 1;
  VAR_7->mrsas_irq[VAR_8] = FUNC_0
      (VAR_7->mrsas_dev, VAR_5, &VAR_7->irq_id[VAR_8]
      ,VAR_3);
  if (VAR_7->mrsas_irq[VAR_8] == ((void*)0)) {
   FUNC_2(VAR_7->mrsas_dev, "Can't allocate MSI-x\n");
   goto irq_alloc_failed;
  }
  if (FUNC_1(VAR_7->mrsas_dev,
      VAR_7->mrsas_irq[VAR_8],
      VAR_1 | VAR_2,
      ((void*)0), VAR_6, &VAR_7->irq_context[VAR_8],
      &VAR_7->intr_handle[VAR_8])) {
   FUNC_2(VAR_7->mrsas_dev,
       "Cannot set up MSI-x interrupt handler\n");
   goto irq_alloc_failed;
  }
 }
 return VAR_4;

irq_alloc_failed:
 FUNC_3(VAR_7);
 return (VAR_0);
}
