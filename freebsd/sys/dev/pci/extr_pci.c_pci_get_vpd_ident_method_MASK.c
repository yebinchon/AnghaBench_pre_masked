
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vpd_reg; char* vpd_ident; int vpd_cached; } ;
struct TYPE_5__ {TYPE_1__ vpd; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
typedef TYPE_2__ pcicfgregs ;
typedef int device_t ;


 int VAR_0 ;
 struct pci_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, const char **VAR_3)
{
 struct pci_devinfo *VAR_4 = FUNC_0(VAR_2);
 pcicfgregs *VAR_5 = &VAR_4->cfg;

 if (!VAR_5->vpd.vpd_cached && VAR_5->vpd.vpd_reg != 0)
  FUNC_2(FUNC_1(VAR_1), VAR_5);

 *VAR_3 = VAR_5->vpd.vpd_ident;

 if (*VAR_3 == ((void*)0))
  return (VAR_0);

 return (0);
}
