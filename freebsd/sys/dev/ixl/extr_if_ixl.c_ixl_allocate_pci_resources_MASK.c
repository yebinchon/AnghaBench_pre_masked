
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int mem_bus_space_handle; int dev; int flush_reg; int mem_bus_space_size; int mem_bus_space_tag; } ;
struct TYPE_5__ {int func; int device; } ;
struct i40e_hw {TYPE_3__* back; int * hw_addr; TYPE_2__ bus; void* subsystem_device_id; void* subsystem_vendor_id; void* revision_id; int device_id; int vendor_id; } ;
struct TYPE_4__ {int ctx; } ;
struct ixl_pf {TYPE_3__ osdep; struct i40e_hw hw; int pci_mem; TYPE_1__ vsi; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(struct ixl_pf *VAR_7)
{
 device_t VAR_8 = FUNC_3(VAR_7->vsi.ctx);
 struct i40e_hw *VAR_9 = &VAR_7->hw;
 int VAR_10;


 VAR_10 = FUNC_0(0);
 VAR_7->pci_mem = FUNC_1(VAR_8, VAR_6,
     &VAR_10, VAR_5);

 if (!(VAR_7->pci_mem)) {
  FUNC_2(VAR_8, "Unable to allocate bus resource: PCI memory\n");
  return (VAR_0);
 }


 VAR_9->vendor_id = FUNC_7(VAR_8);
 VAR_9->device_id = FUNC_4(VAR_8);
 VAR_9->revision_id = FUNC_8(VAR_8, VAR_2, 1);
 VAR_9->subsystem_vendor_id =
     FUNC_8(VAR_8, VAR_4, 2);
 VAR_9->subsystem_device_id =
     FUNC_8(VAR_8, VAR_3, 2);

 VAR_9->bus.device = FUNC_6(VAR_8);
 VAR_9->bus.func = FUNC_5(VAR_8);


 VAR_7->osdep.mem_bus_space_tag =
  FUNC_10(VAR_7->pci_mem);
 VAR_7->osdep.mem_bus_space_handle =
  FUNC_9(VAR_7->pci_mem);
 VAR_7->osdep.mem_bus_space_size = FUNC_11(VAR_7->pci_mem);
 VAR_7->osdep.flush_reg = VAR_1;
 VAR_7->osdep.dev = VAR_8;

 VAR_7->hw.hw_addr = (u8 *) &VAR_7->osdep.mem_bus_space_handle;
 VAR_7->hw.back = &VAR_7->osdep;

  return (0);
 }
