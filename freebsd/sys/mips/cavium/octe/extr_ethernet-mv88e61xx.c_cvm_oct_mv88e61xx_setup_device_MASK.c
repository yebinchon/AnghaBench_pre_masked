
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {char* phy_device; int mdio_write; int mdio_read; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct ifnet *VAR_2)
{
 cvm_oct_private_t *VAR_3 = (cvm_oct_private_t *)VAR_2->if_softc;

 VAR_3->mdio_read = VAR_0;
 VAR_3->mdio_write = VAR_1;
 VAR_3->phy_device = "mv88e61xxphy";

 return (0);
}
