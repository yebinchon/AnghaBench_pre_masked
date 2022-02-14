
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcie_location; int pcie_flags; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;

int
FUNC_2(device_t VAR_5)
{
 struct pci_devinfo *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 VAR_7 = VAR_6->cfg.pcie.pcie_location;
 if (VAR_7 == 0)
  return (0);






 if ((VAR_6->cfg.pcie.pcie_flags & VAR_2) < 2 ||
     (FUNC_1(VAR_5, VAR_7 + VAR_3, 4) &
     VAR_0) == 0)
  return (50 * 1000);

 switch (FUNC_1(VAR_5, VAR_7 + VAR_4, 2) &
     VAR_1) {
 case 135:
  return (100);
 case 134:
  return (10 * 1000);
 case 130:
  return (55 * 1000);
 case 132:
  return (210 * 1000);
 case 128:
  return (900 * 1000);
 case 131:
  return (3500 * 1000);
 case 133:
  return (13 * 1000 * 1000);
 case 129:
  return (64 * 1000 * 1000);
 default:
  return (50 * 1000);
 }
}
