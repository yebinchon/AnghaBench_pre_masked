
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_pci_softc {TYPE_1__* devcfg; } ;
struct bhndb_hw_priority {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {struct bhndb_hw_priority const* bridge_hwprio; } ;


 struct bwn_pci_softc* FUNC_0 (int ) ;

__attribute__((used)) static const struct bhndb_hw_priority *
FUNC_1(device_t VAR_0, device_t VAR_1)
{
 struct bwn_pci_softc *VAR_2 = FUNC_0(VAR_0);
 return (VAR_2->devcfg->bridge_hwprio);
}
