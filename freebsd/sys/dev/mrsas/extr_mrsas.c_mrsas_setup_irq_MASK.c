
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrsas_softc {int mrsas_dev; int * intr_handle; TYPE_1__* irq_context; int ** mrsas_irq; scalar_t__* irq_id; scalar_t__ msix_enable; } ;
struct TYPE_2__ {scalar_t__ MSIxIndex; struct mrsas_softc* sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int ,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,int ,TYPE_1__*,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct mrsas_softc*) ;

__attribute__((used)) static int
FUNC_4(struct mrsas_softc *VAR_8)
{
 if (VAR_8->msix_enable && (FUNC_3(VAR_8) == VAR_5))
  FUNC_2(VAR_8->mrsas_dev, "MSI-x interrupts setup success\n");

 else {
  FUNC_2(VAR_8->mrsas_dev, "Fall back to legacy interrupt\n");
  VAR_8->irq_context[0].sc = VAR_8;
  VAR_8->irq_context[0].MSIxIndex = 0;
  VAR_8->irq_id[0] = 0;
  VAR_8->mrsas_irq[0] = FUNC_0(VAR_8->mrsas_dev,
      VAR_6, &VAR_8->irq_id[0], VAR_4 | VAR_3);
  if (VAR_8->mrsas_irq[0] == ((void*)0)) {
   FUNC_2(VAR_8->mrsas_dev, "Cannot allocate legcay"
       "interrupt\n");
   return (VAR_0);
  }
  if (FUNC_1(VAR_8->mrsas_dev, VAR_8->mrsas_irq[0],
      VAR_1 | VAR_2, ((void*)0), VAR_7,
      &VAR_8->irq_context[0], &VAR_8->intr_handle[0])) {
   FUNC_2(VAR_8->mrsas_dev, "Cannot set up legacy"
       "interrupt\n");
   return (VAR_0);
  }
 }
 return (0);
}
