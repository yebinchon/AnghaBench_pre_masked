
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
 int FUNC_2 (int ,int,int,int) ;

uint32_t
FUNC_3(device_t VAR_0, int VAR_1, uint32_t VAR_2, uint32_t VAR_3,
    int VAR_4)
{
 struct pci_devinfo *VAR_5 = FUNC_0(VAR_0);
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = VAR_5->cfg.pcie.pcie_location;
 if (VAR_8 == 0) {
  if (VAR_4 == 2)
   return (0xffff);
  return (0xffffffff);
 }

 VAR_6 = FUNC_1(VAR_0, VAR_8 + VAR_1, VAR_4);
 VAR_7 = VAR_6 & ~VAR_2;
 VAR_7 |= (VAR_3 & VAR_2);
 FUNC_2(VAR_0, VAR_8 + VAR_1, VAR_7, VAR_4);
 return (VAR_6);
}
