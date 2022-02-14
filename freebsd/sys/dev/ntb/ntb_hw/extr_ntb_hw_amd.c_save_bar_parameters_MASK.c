
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_pci_bar_info {int map_mode; int pci_resource; int vbase; int size; int pbase; int pci_bus_handle; int pci_bus_tag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct amd_ntb_pci_bar_info *VAR_1)
{
 VAR_1->pci_bus_tag = FUNC_1(VAR_1->pci_resource);
 VAR_1->pci_bus_handle = FUNC_0(VAR_1->pci_resource);
 VAR_1->pbase = FUNC_3(VAR_1->pci_resource);
 VAR_1->size = FUNC_2(VAR_1->pci_resource);
 VAR_1->vbase = FUNC_4(VAR_1->pci_resource);
 VAR_1->map_mode = VAR_0;
}
