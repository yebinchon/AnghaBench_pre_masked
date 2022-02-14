
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_softc {uintptr_t sc_pci_domain; uintptr_t sc_bus; } ;
typedef int device_t ;


 int VAR_0 ;


 struct ofw_pci_softc* FUNC_0 (int ) ;

int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct ofw_pci_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 switch (VAR_3) {
 case 128:
  *VAR_4 = VAR_5->sc_pci_domain;
  return (0);
 case 129:
  *VAR_4 = VAR_5->sc_bus;
  return (0);
 default:
  break;
 }

 return (VAR_0);
}
