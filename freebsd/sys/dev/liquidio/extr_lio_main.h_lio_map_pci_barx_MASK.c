
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device {TYPE_1__* mem_bus_space; int device; } ;
struct TYPE_2__ {int handle; int tag; int * pci_mem; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 int FUNC_3 (struct octeon_device*,char*,int,int ,int ) ;
 int FUNC_4 (struct octeon_device*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline int
FUNC_7(struct octeon_device *VAR_3, int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_4 * 2);

 VAR_3->mem_bus_space[VAR_4].pci_mem =
  FUNC_2(VAR_3->device, VAR_2, &VAR_5,
           VAR_1);

 if (VAR_3->mem_bus_space[VAR_4].pci_mem == ((void*)0)) {
  FUNC_4(VAR_3, "Unable to allocate bus resource: memory\n");
  return (VAR_0);
 }


 VAR_3->mem_bus_space[VAR_4].tag =
  FUNC_6(VAR_3->mem_bus_space[VAR_4].pci_mem);
 VAR_3->mem_bus_space[VAR_4].handle =
  FUNC_5(VAR_3->mem_bus_space[VAR_4].pci_mem);

 FUNC_3(VAR_3, "BAR%d Tag 0x%llx Handle 0x%llx\n",
      VAR_4, FUNC_0(VAR_3->mem_bus_space[VAR_4].tag),
      FUNC_0(VAR_3->mem_bus_space[VAR_4].handle));

 return (0);
}
