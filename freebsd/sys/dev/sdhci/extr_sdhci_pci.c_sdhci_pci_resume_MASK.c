
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_softc {int num_slots; int quirks; int * slots; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct sdhci_pci_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct sdhci_pci_softc *VAR_2 = FUNC_1(VAR_1);
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_slots; VAR_3++)
  FUNC_2(&VAR_2->slots[VAR_3]);
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return (VAR_4);
 if (VAR_2->quirks & VAR_0)
  FUNC_3(VAR_1);
 return (0);
}
