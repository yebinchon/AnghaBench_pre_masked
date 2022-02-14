
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_sdhci_softc {int * mem_res; int * irq_res; int * intr_cookie; int slot; scalar_t__ slot_init_done; int r1bfix_callout; int * gpio; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 struct fsl_sdhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2)
{
 struct fsl_sdhci_softc *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->gpio != ((void*)0))
  FUNC_6(VAR_3->gpio);

 FUNC_2(&VAR_3->r1bfix_callout);

 if (VAR_3->slot_init_done)
  FUNC_5(&VAR_3->slot);

 if (VAR_3->intr_cookie != ((void*)0))
  FUNC_1(VAR_2, VAR_3->irq_res, VAR_3->intr_cookie);
 if (VAR_3->irq_res != ((void*)0))
  FUNC_0(VAR_2, VAR_0,
      FUNC_4(VAR_3->irq_res), VAR_3->irq_res);

 if (VAR_3->mem_res != ((void*)0)) {
  FUNC_0(VAR_2, VAR_1,
      FUNC_4(VAR_3->mem_res), VAR_3->mem_res);
 }

 return (0);
}
