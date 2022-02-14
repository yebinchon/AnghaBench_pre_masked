
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int * pci_reg; int dev; int * pci_pio_reg; int * pci_irq; int * ih; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mpt_softc *VAR_3)
{

 if (VAR_3->ih) {
  FUNC_1(VAR_3->dev, VAR_3->pci_irq, VAR_3->ih);
  VAR_3->ih = ((void*)0);
 }

 if (VAR_3->pci_irq) {
  FUNC_0(VAR_3->dev, VAR_1,
      FUNC_3(VAR_3->pci_irq), VAR_3->pci_irq);
  FUNC_2(VAR_3->dev);
  VAR_3->pci_irq = ((void*)0);
 }

 if (VAR_3->pci_pio_reg) {
  FUNC_0(VAR_3->dev, VAR_0,
      FUNC_3(VAR_3->pci_pio_reg), VAR_3->pci_pio_reg);
  VAR_3->pci_pio_reg = ((void*)0);
 }

 if (VAR_3->pci_reg) {
  FUNC_0(VAR_3->dev, VAR_2,
      FUNC_3(VAR_3->pci_reg), VAR_3->pci_reg);
  VAR_3->pci_reg = ((void*)0);
 }
}
