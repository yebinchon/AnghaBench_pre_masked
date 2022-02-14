
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_pci_cell_info {int host_address_cells; int size_cells; int pci_address_cell; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int cell_t ;


 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

int
FUNC_3(phandle_t VAR_0, struct ofw_pci_cell_info *VAR_1)
{
 ssize_t VAR_2;

 if (VAR_1 == ((void*)0))
  return (-1);

 VAR_1->host_address_cells = 1;
 VAR_1->size_cells = 2;
 VAR_1->pci_address_cell = 3;

 FUNC_0(FUNC_2(VAR_0), "#address-cells",
     &(VAR_1->host_address_cells), sizeof(VAR_1->host_address_cells));
 FUNC_0(VAR_0, "#address-cells",
     &(VAR_1->pci_address_cell), sizeof(VAR_1->pci_address_cell));
 FUNC_0(VAR_0, "#size-cells", &(VAR_1->size_cells),
     sizeof(VAR_1->size_cells));

 VAR_2 = FUNC_1(VAR_0, "ranges");
 if (VAR_2 <= 0)
  return (-1);

 return (VAR_2 / sizeof(cell_t) /
     (VAR_1->pci_address_cell + VAR_1->host_address_cells +
     VAR_1->size_cells));
}
