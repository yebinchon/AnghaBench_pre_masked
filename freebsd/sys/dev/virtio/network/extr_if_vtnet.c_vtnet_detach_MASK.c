
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int * vtnet_ctrl_vq; struct ifnet* vtnet_ifp; int vtnet_media; int * vtnet_vlan_detach; int * vtnet_vlan_attach; int vtnet_tick_ch; } ;
struct ifnet {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int FUNC_2 (struct vtnet_softc*) ;
 int FUNC_3 (struct vtnet_softc*) ;
 int FUNC_4 (int *) ;
 struct vtnet_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (struct vtnet_softc*) ;
 int FUNC_12 (struct vtnet_softc*) ;
 int FUNC_13 (struct vtnet_softc*) ;
 int FUNC_14 (struct vtnet_softc*) ;
 int FUNC_15 (struct vtnet_softc*) ;
 int FUNC_16 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_5(VAR_2);
 VAR_4 = VAR_3->vtnet_ifp;

 if (FUNC_6(VAR_2)) {
  FUNC_1(VAR_3);
  FUNC_16(VAR_3);
  FUNC_3(VAR_3);

  FUNC_4(&VAR_3->vtnet_tick_ch);
  FUNC_11(VAR_3);

  FUNC_7(VAR_4);
 }





 FUNC_15(VAR_3);

 if (VAR_3->vtnet_vlan_attach != ((void*)0)) {
  FUNC_0(VAR_0, VAR_3->vtnet_vlan_attach);
  VAR_3->vtnet_vlan_attach = ((void*)0);
 }
 if (VAR_3->vtnet_vlan_detach != ((void*)0)) {
  FUNC_0(VAR_1, VAR_3->vtnet_vlan_detach);
  VAR_3->vtnet_vlan_detach = ((void*)0);
 }

 FUNC_9(&VAR_3->vtnet_media);

 if (VAR_4 != ((void*)0)) {
  FUNC_8(VAR_4);
  VAR_3->vtnet_ifp = ((void*)0);
 }

 FUNC_14(VAR_3);
 FUNC_13(VAR_3);

 if (VAR_3->vtnet_ctrl_vq != ((void*)0))
  FUNC_12(VAR_3);

 FUNC_2(VAR_3);

 return (0);
}
