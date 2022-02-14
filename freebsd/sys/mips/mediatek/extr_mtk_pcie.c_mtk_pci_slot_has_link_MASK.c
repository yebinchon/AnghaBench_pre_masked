
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_pci_softc {int pcie_link_status; } ;
typedef int device_t ;


 struct mtk_pci_softc* FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(device_t VAR_0, int VAR_1)
{
 struct mtk_pci_softc *VAR_2 = FUNC_0(VAR_0);

 return !!(VAR_2->pcie_link_status & (1<<VAR_1));
}
