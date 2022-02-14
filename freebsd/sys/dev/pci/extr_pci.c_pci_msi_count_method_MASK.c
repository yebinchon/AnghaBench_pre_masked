
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_msi {scalar_t__ msi_location; int msi_msgnum; } ;
struct TYPE_2__ {struct pcicfg_msi msi; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_0(VAR_2);
 struct pcicfg_msi *VAR_4 = &VAR_3->cfg.msi;

 if (VAR_0 && VAR_4->msi_location != 0)
  return (VAR_4->msi_msgnum);
 return (0);
}
