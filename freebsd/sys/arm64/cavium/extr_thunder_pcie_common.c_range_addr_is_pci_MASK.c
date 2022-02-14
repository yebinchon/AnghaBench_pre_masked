
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct pcie_range {scalar_t__ pci_base; scalar_t__ size; } ;


 int VAR_0 ;

uint32_t
FUNC_0(struct pcie_range *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 struct pcie_range *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_1[VAR_5];
  if (VAR_2 >= VAR_4->pci_base &&
      VAR_2 < (VAR_4->pci_base + VAR_4->size) &&
      VAR_3 < VAR_4->size) {

   return (1);
  }
 }


 return (0);
}
