
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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pci_devinfo* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;

int
FUNC_5(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, int *VAR_6)
{
 struct pci_devinfo *VAR_7 = FUNC_3(VAR_3);
 pcicfgregs *VAR_8 = &VAR_7->cfg;
 uint32_t VAR_9;
 uint16_t VAR_10;


 if (VAR_8->pcie.pcie_location == 0)
  return (VAR_1);

 VAR_9 = FUNC_4(VAR_3, VAR_5, 4);
 FUNC_0(FUNC_1(VAR_9) == VAR_4,
     ("start extended capability is not expected capability"));
 VAR_10 = FUNC_2(VAR_9);
 while (VAR_10 != 0) {
  VAR_9 = FUNC_4(VAR_3, VAR_10, 4);
  if (FUNC_1(VAR_9) == VAR_4) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = VAR_10;
   return (0);
  }
  VAR_10 = FUNC_2(VAR_9);
 }

 return (VAR_0);
}
