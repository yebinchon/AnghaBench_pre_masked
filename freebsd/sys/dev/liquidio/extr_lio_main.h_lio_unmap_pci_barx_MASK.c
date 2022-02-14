
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__* mem_bus_space; int device; } ;
struct TYPE_2__ {int * pci_mem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct octeon_device*,char*,int) ;

__attribute__((used)) static inline void
FUNC_3(struct octeon_device *VAR_1, int VAR_2)
{

 FUNC_2(VAR_1, "Freeing PCI mapped regions for Bar%d\n", VAR_2);

 if (VAR_1->mem_bus_space[VAR_2].pci_mem != ((void*)0)) {
  FUNC_1(VAR_1->device, VAR_0,
         FUNC_0(VAR_2 * 2),
         VAR_1->mem_bus_space[VAR_2].pci_mem);
  VAR_1->mem_bus_space[VAR_2].pci_mem = ((void*)0);
 }
}
