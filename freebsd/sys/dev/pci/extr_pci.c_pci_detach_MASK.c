
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_softc {int sc_bus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct pci_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_1)
{



 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return (VAR_2);






 return (FUNC_2(VAR_1));
}
