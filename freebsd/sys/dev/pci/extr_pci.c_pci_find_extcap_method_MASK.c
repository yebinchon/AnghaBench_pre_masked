
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {scalar_t__ pcie_location; } ;
struct TYPE_4__ {TYPE_1__ pcie; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pci_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

int
FUNC_4(device_t VAR_3, device_t VAR_4, int VAR_5,
    int *VAR_6)
{
 struct pci_devinfo *VAR_7 = FUNC_2(VAR_4);
 pcicfgregs *VAR_8 = &VAR_7->cfg;
 uint32_t VAR_9;
 uint16_t VAR_10;


 if (VAR_8->pcie.pcie_location == 0)
  return (VAR_1);

 VAR_10 = VAR_2;
 VAR_9 = FUNC_3(VAR_4, VAR_10, 4);
 if (VAR_9 == 0xffffffff || VAR_9 == 0)
  return (VAR_0);
 for (;;) {
  if (FUNC_0(VAR_9) == VAR_5) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_10;
   return (0);
  }
  VAR_10 = FUNC_1(VAR_9);
  if (VAR_10 == 0)
   break;
  VAR_9 = FUNC_3(VAR_4, VAR_10, 4);
 }

 return (VAR_0);
}
