
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
 int FUNC_1 (int ,scalar_t__,int) ;

int
FUNC_2(device_t VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;
 uint16_t VAR_5;

 VAR_4 = VAR_3->cfg.pcie.pcie_location;
 if (VAR_4 == 0)
  return (0);
 VAR_5 = FUNC_1(VAR_2, VAR_4 + VAR_1, 2);
 VAR_5 &= VAR_0;
 VAR_5 >>= 5;
 return (1 << (VAR_5 + 7));
}
