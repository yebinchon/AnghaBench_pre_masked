
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
struct TYPE_3__ {int pcie_location; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int) ;

bool
FUNC_3(device_t VAR_4, u_int VAR_5)
{
 struct pci_devinfo *VAR_6 = FUNC_0(VAR_4);
 uint16_t VAR_7;
 int VAR_8;

 VAR_8 = VAR_6->cfg.pcie.pcie_location;
 if (VAR_8 == 0)
  return (1);

 VAR_7 = FUNC_2(VAR_4, VAR_8 + VAR_2, 2);
 while (VAR_7 & VAR_1) {
  if (VAR_5 == 0)
   return (0);


  if (VAR_5 > 100) {
   FUNC_1("pcietp", 100 * VAR_3, 0, VAR_0);
   VAR_5 -= 100;
  } else {
   FUNC_1("pcietp", VAR_5 * VAR_3, 0,
       VAR_0);
   VAR_5 = 0;
  }
  VAR_7 = FUNC_2(VAR_4, VAR_8 + VAR_2, 2);
 }

 return (1);
}
