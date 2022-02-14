
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcicfg_msix {scalar_t__ msix_location; int msix_msgnum; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_1(device_t VAR_1, device_t VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_0(VAR_2);
 struct pcicfg_msix *VAR_4 = &VAR_3->cfg.msix;

 if (VAR_0 && VAR_4->msix_location != 0)
  return (VAR_4->msix_msgnum);
 return (0);
}
