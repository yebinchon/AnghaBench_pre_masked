
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_pcie {int pcie_location; int pcie_flags; scalar_t__ pcie_type; int pcie_slot_ctl2; int pcie_link_ctl2; int pcie_device_ctl2; int pcie_root_ctl; int pcie_slot_ctl; int pcie_link_ctl; int pcie_device_ctl; } ;
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
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(device_t VAR_14, struct pci_devinfo *VAR_15)
{

 struct pcicfg_pcie *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = &VAR_15->cfg.pcie;
 VAR_18 = VAR_16->pcie_location;

 VAR_17 = VAR_16->pcie_flags & VAR_1;

 FUNC_0(VAR_14, VAR_18 + (VAR_7), (VAR_16->pcie_device_ctl), 2);

 if (VAR_17 > 1 || VAR_16->pcie_type == VAR_6 ||
     VAR_16->pcie_type == VAR_3 ||
     VAR_16->pcie_type == VAR_4)
  FUNC_0(VAR_14, VAR_18 + (VAR_9), (VAR_16->pcie_link_ctl), 2);

 if (VAR_17 > 1 || (VAR_16->pcie_type == VAR_6 ||
     (VAR_16->pcie_type == VAR_2 &&
      (VAR_16->pcie_flags & VAR_0))))
  FUNC_0(VAR_14, VAR_18 + (VAR_12), (VAR_16->pcie_slot_ctl), 2);

 if (VAR_17 > 1 || VAR_16->pcie_type == VAR_6 ||
     VAR_16->pcie_type == VAR_5)
  FUNC_0(VAR_14, VAR_18 + (VAR_11), (VAR_16->pcie_root_ctl), 2);

 if (VAR_17 > 1) {
  FUNC_0(VAR_14, VAR_18 + (VAR_8), (VAR_16->pcie_device_ctl2), 2);
  FUNC_0(VAR_14, VAR_18 + (VAR_10), (VAR_16->pcie_link_ctl2), 2);
  FUNC_0(VAR_14, VAR_18 + (VAR_13), (VAR_16->pcie_slot_ctl2), 2);
 }

}
