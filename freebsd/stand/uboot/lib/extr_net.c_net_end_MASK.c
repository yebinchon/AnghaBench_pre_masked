
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uboot_softc {int sc_handle; } ;
struct netif {int nif_unit; TYPE_1__* nif_driver; struct uboot_softc* nif_devdata; } ;
struct TYPE_2__ {int netif_bname; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct netif *VAR_0)
{
 struct uboot_softc *VAR_1 = VAR_0->nif_devdata;
 int VAR_2;

 if ((VAR_2 = FUNC_1(VAR_1->sc_handle)) != 0)
  FUNC_0("%s%d: net_end failed with error %d",
      VAR_0->nif_driver->netif_bname, VAR_0->nif_unit, VAR_2);
}
