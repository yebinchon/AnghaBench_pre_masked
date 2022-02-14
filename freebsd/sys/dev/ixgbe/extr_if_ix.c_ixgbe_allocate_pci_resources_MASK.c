
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int mem_bus_space_handle; int mem_bus_space_tag; } ;
struct TYPE_3__ {int * hw_addr; } ;
struct adapter {TYPE_2__ osdep; TYPE_1__ hw; int pci_mem; } ;
typedef int if_ctx_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct adapter* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(if_ctx_t VAR_3)
{
 struct adapter *VAR_4 = FUNC_4(VAR_3);
 device_t VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_0(0);
 VAR_4->pci_mem = FUNC_1(VAR_5, VAR_2, &VAR_6,
     VAR_1);

 if (!(VAR_4->pci_mem)) {
  FUNC_2(VAR_5, "Unable to allocate bus resource: memory\n");
  return (VAR_0);
 }


 VAR_4->osdep.mem_bus_space_tag = FUNC_6(VAR_4->pci_mem);
 VAR_4->osdep.mem_bus_space_handle =
     FUNC_5(VAR_4->pci_mem);

 VAR_4->hw.hw_addr = (u8 *)&VAR_4->osdep.mem_bus_space_handle;

 return (0);
}
