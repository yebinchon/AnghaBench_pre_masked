
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {int sc_destroying; int sc_media; int sc_ports; int vlan_detach; int vlan_attach; } ;
struct lagg_port {int dummy; } ;
struct ifnet {int if_flags; scalar_t__ if_softc; } ;


 struct lagg_port* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct lagg_softc*) ;
 int FUNC_5 (struct lagg_softc*) ;
 int FUNC_6 (struct lagg_softc*) ;
 int VAR_1 ;
 int FUNC_7 (int *,struct lagg_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (struct ifnet*) ;
 int FUNC_9 (struct lagg_softc*,int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct lagg_port*,int) ;
 int FUNC_13 (struct lagg_softc*) ;
 int VAR_3 ;
 int FUNC_14 (struct lagg_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_15(struct ifnet *VAR_7)
{
 struct lagg_softc *VAR_8 = (struct lagg_softc *)VAR_7->if_softc;
 struct lagg_port *VAR_9;

 FUNC_5(VAR_8);
 VAR_8->sc_destroying = 1;
 FUNC_14(VAR_8);
 VAR_7->if_flags &= ~VAR_0;

 FUNC_1(VAR_5, VAR_8->vlan_attach);
 FUNC_1(VAR_6, VAR_8->vlan_detach);


 while ((VAR_9 = FUNC_0(&VAR_8->sc_ports)) != ((void*)0))
  FUNC_12(VAR_9, 1);


 FUNC_13(VAR_8);
 FUNC_6(VAR_8);

 FUNC_11(&VAR_8->sc_media);
 FUNC_8(VAR_7);
 FUNC_10(VAR_7);

 FUNC_2();
 FUNC_7(&VAR_2, VAR_8, VAR_3, VAR_4);
 FUNC_3();

 FUNC_4(VAR_8);
 FUNC_9(VAR_8, VAR_1);
}
