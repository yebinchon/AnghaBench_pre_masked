
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int pcie_location; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

int
FUNC_4(device_t VAR_2, int VAR_3)
{
 struct pci_devinfo *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;
 uint16_t VAR_6;

 VAR_5 = VAR_4->cfg.pcie.pcie_location;
 if (VAR_5 == 0)
  return (0);
 if (VAR_3 < 128)
  VAR_3 = 128;
 if (VAR_3 > 4096)
  VAR_3 = 4096;
 VAR_3 = (1 << (FUNC_1(VAR_3) - 1));
 VAR_6 = FUNC_2(VAR_2, VAR_5 + VAR_1, 2);
 VAR_6 &= ~VAR_0;
 VAR_6 |= (FUNC_1(VAR_3) - 8) << 12;
 FUNC_3(VAR_2, VAR_5 + VAR_1, VAR_6, 2);
 return (VAR_3);
}
