
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intpin; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_0, device_t VAR_1)
{
 struct pci_devinfo *VAR_2 = FUNC_1(VAR_1);
 pcicfgregs *VAR_3 = &VAR_2->cfg;

 return (FUNC_0(FUNC_2(VAR_0), VAR_1,
     VAR_3->intpin));
}
