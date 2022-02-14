
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int msix_vectors; int* irq_id; int pci_dev; int acb_flags; int * ih; int ** irqres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct AdapterControlBlock*) ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,int *,int ,struct AdapterControlBlock*,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct AdapterControlBlock *VAR_8)
{
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_8->msix_vectors; VAR_9++) {
  VAR_8->irq_id[VAR_9] = 1 + VAR_9;
  VAR_8->irqres[VAR_9] = FUNC_1(VAR_8->pci_dev,
      VAR_5, &VAR_8->irq_id[VAR_9], VAR_4);
  if (VAR_8->irqres[VAR_9] == ((void*)0)) {
   FUNC_3("arcmsr: Can't allocate MSI-X resource\n");
   goto irq_alloc_failed;
  }
  if (FUNC_2(VAR_8->pci_dev, VAR_8->irqres[VAR_9],
      VAR_2 | VAR_3, ((void*)0), VAR_7,
      VAR_8, &VAR_8->ih[VAR_9])) {
   FUNC_3("arcmsr: Cannot set up MSI-X interrupt handler\n");
   goto irq_alloc_failed;
  }
 }
 FUNC_3("arcmsr: MSI-X INT enabled\n");
 VAR_8->acb_flags |= VAR_0;
 return VAR_6;

irq_alloc_failed:
 FUNC_0(VAR_8->pci_dev, VAR_8);
 return VAR_1;
}
