
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_tick_ch; scalar_t__ vtnet_link_active; struct ifnet* vtnet_ifp; int vtnet_dev; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vtnet_softc*) ;
 int FUNC_4 (struct vtnet_softc*) ;
 int FUNC_5 (struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_6(struct vtnet_softc *VAR_1)
{
 device_t VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = VAR_1->vtnet_dev;
 VAR_3 = VAR_1->vtnet_ifp;

 FUNC_0(VAR_1);

 VAR_3->if_drv_flags &= ~VAR_0;
 VAR_1->vtnet_link_active = 0;
 FUNC_1(&VAR_1->vtnet_tick_ch);


 FUNC_3(VAR_1);






 FUNC_2(VAR_2);
 FUNC_5(VAR_1);


 FUNC_4(VAR_1);
}
