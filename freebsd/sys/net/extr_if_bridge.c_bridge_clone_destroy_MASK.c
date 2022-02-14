
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; struct bridge_softc* if_softc; } ;
struct bridge_softc {int sc_stp; int sc_brcallout; int sc_spanlist; int sc_iflist; } ;
struct bridge_iflist {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct bridge_softc*) ;
 int FUNC_3 (struct bridge_softc*) ;
 int FUNC_4 (struct bridge_softc*) ;
 int VAR_0 ;
 struct bridge_iflist* FUNC_5 (int *) ;
 int FUNC_6 (struct bridge_softc*,int ) ;
 int VAR_1 ;
 int FUNC_7 (struct bridge_softc*,struct bridge_iflist*,int ) ;
 int FUNC_8 (struct bridge_softc*,struct bridge_iflist*) ;
 int FUNC_9 (struct bridge_softc*) ;
 int FUNC_10 (struct ifnet*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct bridge_softc*,int ) ;
 int FUNC_15 (struct ifnet*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_16(struct ifnet *VAR_3)
{
 struct bridge_softc *VAR_4 = VAR_3->if_softc;
 struct bridge_iflist *VAR_5;

 FUNC_2(VAR_4);

 FUNC_10(VAR_3, 1);
 VAR_3->if_flags &= ~VAR_0;

 while ((VAR_5 = FUNC_5(&VAR_4->sc_iflist)) != ((void*)0))
  FUNC_7(VAR_4, VAR_5, 0);

 while ((VAR_5 = FUNC_5(&VAR_4->sc_spanlist)) != ((void*)0)) {
  FUNC_8(VAR_4, VAR_5);
 }


 FUNC_9(VAR_4);

 FUNC_4(VAR_4);

 FUNC_12(&VAR_4->sc_brcallout);

 FUNC_0();
 FUNC_6(VAR_4, VAR_2);
 FUNC_1();

 FUNC_11(&VAR_4->sc_stp);
 FUNC_13(VAR_3);
 FUNC_15(VAR_3);

 FUNC_3(VAR_4);
 FUNC_14(VAR_4, VAR_1);
}
