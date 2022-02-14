
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int flags; int device; int vendor; int func; int slot; int bus; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

uint32_t
FUNC_3(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6)
{
 struct pci_devinfo *VAR_7 = FUNC_1(VAR_4);
 pcicfgregs *VAR_8 = &VAR_7->cfg;
 return (FUNC_0(FUNC_2(VAR_3),
     VAR_8->bus, VAR_8->slot, VAR_8->func, VAR_5, VAR_6));
}
