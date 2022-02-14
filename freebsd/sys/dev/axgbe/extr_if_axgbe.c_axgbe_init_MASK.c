
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_2__ {struct ifnet* netdev; } ;
struct axgbe_softc {TYPE_1__ prv; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(void *VAR_1)
{
 struct axgbe_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->prv.netdev;
 if (VAR_3->if_drv_flags & VAR_0)
  return;

 VAR_3->if_drv_flags |= VAR_0;
}
