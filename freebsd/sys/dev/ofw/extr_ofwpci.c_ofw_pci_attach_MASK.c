
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_softc {int sc_initialized; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct ofw_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_0)
{
 struct ofw_pci_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1->sc_initialized) {
  VAR_2 = FUNC_3(VAR_0);
  if (VAR_2 != 0)
   return (VAR_2);
 }

 FUNC_1(VAR_0, "pci", -1);
 return (FUNC_0(VAR_0));
}
