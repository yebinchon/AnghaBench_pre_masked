
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct pcicfg_msi {int msi_ctrl; scalar_t__ msi_location; } ;
struct TYPE_2__ {struct pcicfg_msi msi; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__,int,int) ;

void
FUNC_3(device_t VAR_7, device_t VAR_8, uint64_t VAR_9,
    uint16_t VAR_10)
{
 struct pci_devinfo *VAR_11 = FUNC_0(VAR_8);
 struct pcicfg_msi *VAR_12 = &VAR_11->cfg.msi;


 FUNC_2(VAR_8, VAR_12->msi_location + VAR_2,
     VAR_9 & 0xffffffff, 4);
 if (VAR_12->msi_ctrl & VAR_0) {
  FUNC_2(VAR_8, VAR_12->msi_location + VAR_3,
      VAR_9 >> 32, 4);
  FUNC_2(VAR_8, VAR_12->msi_location + VAR_6,
      VAR_10, 2);
 } else
  FUNC_2(VAR_8, VAR_12->msi_location + VAR_5, VAR_10,
      2);


 VAR_12->msi_ctrl |= VAR_1;
 FUNC_2(VAR_8, VAR_12->msi_location + VAR_4,
     VAR_12->msi_ctrl, 2);


 FUNC_1(VAR_8, VAR_9);
}
