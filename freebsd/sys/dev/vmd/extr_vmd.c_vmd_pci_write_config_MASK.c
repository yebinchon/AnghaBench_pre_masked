
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int func; int slot; int bus; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, uint32_t VAR_3,
    int VAR_4)
{
 struct pci_devinfo *VAR_5 = FUNC_0(VAR_1);
 pcicfgregs *VAR_6 = &VAR_5->cfg;

 FUNC_1(VAR_0, VAR_6->bus, VAR_6->slot, VAR_6->func, VAR_2, VAR_3, VAR_4);
}
