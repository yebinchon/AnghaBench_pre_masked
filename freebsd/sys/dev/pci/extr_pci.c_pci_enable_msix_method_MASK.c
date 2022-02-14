
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct pcicfg_msix {int msix_ctrl; scalar_t__ msix_location; } ;
struct TYPE_2__ {struct pcicfg_msix msix; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void
FUNC_5(device_t VAR_3, device_t VAR_4, u_int VAR_5,
    uint64_t VAR_6, uint32_t VAR_7)
{

 if (VAR_2) {
  struct pci_devinfo *VAR_8 = FUNC_0(VAR_4);
  struct pcicfg_msix *VAR_9 = &VAR_8->cfg.msix;
  FUNC_3(VAR_4,
      VAR_9->msix_location + VAR_1,
      VAR_9->msix_ctrl & ~VAR_0, 2);
  FUNC_2(VAR_4);
 } else
  FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);


 FUNC_1(VAR_4, VAR_6);
}
