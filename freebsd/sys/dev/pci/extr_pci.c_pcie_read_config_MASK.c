
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pcie_location; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

uint32_t
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct pci_devinfo *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = VAR_3->cfg.pcie.pcie_location;
 if (VAR_4 == 0) {
  if (VAR_2 == 2)
   return (0xffff);
  return (0xffffffff);
 }

 return (FUNC_1(VAR_0, VAR_4 + VAR_1, VAR_2));
}
