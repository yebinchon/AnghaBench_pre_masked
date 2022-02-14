
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcicfg_vpd {scalar_t__ vpd_reg; int vpd_cached; } ;
struct TYPE_3__ {struct pcicfg_vpd vpd; } ;
struct pci_devinfo {TYPE_1__ cfg; } ;
typedef TYPE_1__ pcicfgregs ;
typedef int device_t ;


 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;

struct pcicfg_vpd *
FUNC_3(device_t VAR_0)
{
 struct pci_devinfo *VAR_1 = FUNC_0(VAR_0);
 pcicfgregs *VAR_2 = &VAR_1->cfg;

 if (!VAR_2->vpd.vpd_cached && VAR_2->vpd.vpd_reg != 0)
  FUNC_2(FUNC_1(FUNC_1(VAR_0)), VAR_2);
 return (&VAR_2->vpd);
}
