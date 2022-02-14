
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct pcicfg_msi {int msi_ctrl; int msi_addr; int msi_data; scalar_t__ msi_location; } ;
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
 int FUNC_1 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_7)
{
 struct pci_devinfo *VAR_8 = FUNC_0(VAR_7);
 struct pcicfg_msi *VAR_9 = &VAR_8->cfg.msi;
 uint64_t VAR_10;
 uint16_t VAR_11;

 if (VAR_9->msi_ctrl & VAR_1) {
  VAR_10 = VAR_9->msi_addr;
  VAR_11 = VAR_9->msi_data;
  FUNC_1(VAR_7, VAR_9->msi_location + VAR_2,
      VAR_10 & 0xffffffff, 4);
  if (VAR_9->msi_ctrl & VAR_0) {
   FUNC_1(VAR_7, VAR_9->msi_location +
       VAR_3, VAR_10 >> 32, 4);
   FUNC_1(VAR_7, VAR_9->msi_location +
       VAR_6, VAR_11, 2);
  } else
   FUNC_1(VAR_7, VAR_9->msi_location + VAR_5,
       VAR_11, 2);
 }
 FUNC_1(VAR_7, VAR_9->msi_location + VAR_4, VAR_9->msi_ctrl,
     2);
}
