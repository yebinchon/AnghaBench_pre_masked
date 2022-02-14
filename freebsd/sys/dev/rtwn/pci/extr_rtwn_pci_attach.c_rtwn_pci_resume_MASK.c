
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_pci_softc {int pc_sc; } ;
typedef int device_t ;


 struct rtwn_pci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0)
{
 struct rtwn_pci_softc *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->pc_sc);

 return (0);
}
