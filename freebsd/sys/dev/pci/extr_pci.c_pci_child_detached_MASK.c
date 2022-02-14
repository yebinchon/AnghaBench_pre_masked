
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource_list {int dummy; } ;
struct TYPE_5__ {scalar_t__ msix_alloc; } ;
struct TYPE_4__ {scalar_t__ msi_alloc; } ;
struct TYPE_6__ {TYPE_2__ msix; TYPE_1__ msi; } ;
struct pci_devinfo {TYPE_3__ cfg; struct resource_list resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pci_devinfo*,int) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct resource_list*,int ,int ,int ) ;

void
FUNC_5(device_t VAR_4, device_t VAR_5)
{
 struct pci_devinfo *VAR_6;
 struct resource_list *VAR_7;

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = &VAR_6->resources;






 if (FUNC_4(VAR_7, VAR_4, VAR_5, VAR_2) != 0)
  FUNC_2(&VAR_6->cfg, "Device leaked IRQ resources\n");
 if (VAR_6->cfg.msi.msi_alloc != 0 || VAR_6->cfg.msix.msix_alloc != 0) {
  FUNC_2(&VAR_6->cfg, "Device leaked MSI vectors\n");
  (void)FUNC_3(VAR_5);
 }
 if (FUNC_4(VAR_7, VAR_4, VAR_5, VAR_3) != 0)
  FUNC_2(&VAR_6->cfg, "Device leaked memory resources\n");
 if (FUNC_4(VAR_7, VAR_4, VAR_5, VAR_1) != 0)
  FUNC_2(&VAR_6->cfg, "Device leaked I/O resources\n");





 FUNC_1(VAR_5, VAR_6, 1);
}
