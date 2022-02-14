
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_pcie {int pcie_location; int pcie_flags; scalar_t__ pcie_type; void* pcie_slot_ctl2; void* pcie_link_ctl2; void* pcie_device_ctl2; void* pcie_root_ctl; void* pcie_slot_ctl; void* pcie_link_ctl; void* pcie_device_ctl; } ;
struct TYPE_2__ {struct pcicfg_pcie pcie; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_15, struct pci_devinfo *VAR_16)
{

 struct pcicfg_pcie *VAR_17;
 int VAR_18, VAR_19;

 VAR_17 = &VAR_16->cfg.pcie;
 VAR_19 = VAR_17->pcie_location;

 VAR_17->pcie_flags = FUNC_0(VAR_15, VAR_19 + (VAR_9), 2);

 VAR_18 = VAR_17->pcie_flags & VAR_1;

 VAR_17->pcie_device_ctl = FUNC_0(VAR_15, VAR_19 + (VAR_7), 2);

 if (VAR_18 > 1 || VAR_17->pcie_type == VAR_6 ||
     VAR_17->pcie_type == VAR_3 ||
     VAR_17->pcie_type == VAR_4)
  VAR_17->pcie_link_ctl = FUNC_0(VAR_15, VAR_19 + (VAR_10), 2);

 if (VAR_18 > 1 || (VAR_17->pcie_type == VAR_6 ||
     (VAR_17->pcie_type == VAR_2 &&
      (VAR_17->pcie_flags & VAR_0))))
  VAR_17->pcie_slot_ctl = FUNC_0(VAR_15, VAR_19 + (VAR_13), 2);

 if (VAR_18 > 1 || VAR_17->pcie_type == VAR_6 ||
     VAR_17->pcie_type == VAR_5)
  VAR_17->pcie_root_ctl = FUNC_0(VAR_15, VAR_19 + (VAR_12), 2);

 if (VAR_18 > 1) {
  VAR_17->pcie_device_ctl2 = FUNC_0(VAR_15, VAR_19 + (VAR_8), 2);
  VAR_17->pcie_link_ctl2 = FUNC_0(VAR_15, VAR_19 + (VAR_11), 2);
  VAR_17->pcie_slot_ctl2 = FUNC_0(VAR_15, VAR_19 + (VAR_14), 2);
 }

}
