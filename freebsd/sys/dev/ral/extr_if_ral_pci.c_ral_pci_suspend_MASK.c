
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ral_pci_softc {TYPE_1__* sc_opns; } ;
typedef int device_t ;
struct TYPE_2__ {int (* suspend ) (struct ral_pci_softc*) ;} ;


 struct ral_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ral_pci_softc*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct ral_pci_softc *VAR_1 = FUNC_0(VAR_0);

 (*VAR_1->sc_opns->suspend)(VAR_1);

 return 0;
}
