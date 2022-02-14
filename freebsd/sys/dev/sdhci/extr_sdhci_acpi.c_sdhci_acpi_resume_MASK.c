
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_acpi_softc {int slot; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct sdhci_acpi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct sdhci_acpi_softc *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->slot);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2)
  return (VAR_2);
 return (0);
}
