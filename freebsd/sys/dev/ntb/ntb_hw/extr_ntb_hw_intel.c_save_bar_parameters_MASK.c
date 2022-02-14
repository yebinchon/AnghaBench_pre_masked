
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_pci_bar_info {int pci_resource; int vbase; int size; int pbase; int pci_bus_handle; int pci_bus_tag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ntb_pci_bar_info *VAR_0)
{

 VAR_0->pci_bus_tag = FUNC_1(VAR_0->pci_resource);
 VAR_0->pci_bus_handle = FUNC_0(VAR_0->pci_resource);
 VAR_0->pbase = FUNC_3(VAR_0->pci_resource);
 VAR_0->size = FUNC_2(VAR_0->pci_resource);
 VAR_0->vbase = FUNC_4(VAR_0->pci_resource);
}
