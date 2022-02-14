
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_softc {int quirks; } ;
typedef int device_t ;


 int VAR_0 ;
 struct sdhci_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct sdhci_pci_softc *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->quirks & VAR_0)
  FUNC_1(VAR_1);
 return (0);
}
