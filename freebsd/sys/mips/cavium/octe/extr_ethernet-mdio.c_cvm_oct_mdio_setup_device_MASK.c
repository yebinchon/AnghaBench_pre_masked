
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int * mdio_write; int * mdio_read; int * phy_device; int port; int phy_id; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int FUNC_0 (int ) ;

int FUNC_1(struct ifnet *VAR_0)
{
 cvm_oct_private_t *VAR_1 = (cvm_oct_private_t *)VAR_0->if_softc;

 VAR_1->phy_id = FUNC_0(VAR_1->port);
 VAR_1->phy_device = ((void*)0);
 VAR_1->mdio_read = ((void*)0);
 VAR_1->mdio_write = ((void*)0);

 return 0;
}
