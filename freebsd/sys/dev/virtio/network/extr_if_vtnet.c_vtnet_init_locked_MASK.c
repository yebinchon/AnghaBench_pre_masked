
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_tick_ch; struct ifnet* vtnet_ifp; int vtnet_dev; } ;
struct ifnet {int if_drv_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (int *,int ,int ,struct vtnet_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vtnet_softc*) ;
 int FUNC_4 (struct vtnet_softc*) ;
 int VAR_2 ;
 int FUNC_5 (struct vtnet_softc*) ;
 scalar_t__ FUNC_6 (struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_7(struct vtnet_softc *VAR_3)
{
 device_t VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = VAR_3->vtnet_dev;
 VAR_5 = VAR_3->vtnet_ifp;

 FUNC_0(VAR_3);

 if (VAR_5->if_drv_flags & VAR_0)
  return;

 FUNC_4(VAR_3);


 if (FUNC_6(VAR_3) != 0)
  goto fail;

 if (FUNC_3(VAR_3) != 0)
  goto fail;

 FUNC_2(VAR_4);

 FUNC_5(VAR_3);
 FUNC_1(&VAR_3->vtnet_tick_ch, VAR_1, VAR_2, VAR_3);

 return;

fail:
 FUNC_4(VAR_3);
}
