
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pcie_range {scalar_t__ phys_base; scalar_t__ size; scalar_t__ pci_base; } ;


 int VAR_0 ;

uint64_t
FUNC_0(struct pcie_range *VAR_1, uint64_t VAR_2)
{
 struct pcie_range *VAR_3;
 uint64_t VAR_4;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &VAR_1[VAR_5];
  if (VAR_2 >= VAR_3->phys_base &&
      VAR_2 < (VAR_3->phys_base + VAR_3->size)) {



   VAR_4 = VAR_2 - VAR_3->phys_base;
   return (VAR_3->pci_base + VAR_4);
  }
 }
 return (0);
}
