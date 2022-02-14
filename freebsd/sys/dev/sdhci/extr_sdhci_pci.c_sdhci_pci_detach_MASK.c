
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_softc {int num_slots; int quirks; int * mem_res; int * slots; int irq_res; int intrhand; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct sdhci_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct sdhci_pci_softc *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_1(VAR_3, VAR_4->irq_res, VAR_4->intrhand);
 FUNC_0(VAR_3, VAR_1,
     FUNC_4(VAR_4->irq_res), VAR_4->irq_res);
 FUNC_3(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_slots; VAR_5++) {
  FUNC_5(&VAR_4->slots[VAR_5]);
  FUNC_0(VAR_3, VAR_2,
      FUNC_4(VAR_4->mem_res[VAR_5]), VAR_4->mem_res[VAR_5]);
 }
 if (VAR_4->quirks & VAR_0)
  FUNC_6(VAR_3);
 return (0);
}
