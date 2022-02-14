
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stge_softc {int sc_detach; int sc_mtx; int sc_mii_mtx; int * sc_res; int sc_spec; int * sc_ih; struct ifnet* sc_ifp; int * sc_miibus; int sc_link_task; int sc_tick_ch; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct stge_softc*) ;
 int FUNC_1 (struct stge_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct stge_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct stge_softc*) ;
 int FUNC_14 (struct stge_softc*) ;
 int FUNC_15 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_2)
{
 struct stge_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_7(VAR_2);

 VAR_4 = VAR_3->sc_ifp;




 if (FUNC_8(VAR_2)) {
  FUNC_0(VAR_3);

  VAR_3->sc_detach = 1;
  FUNC_14(VAR_3);
  FUNC_1(VAR_3);
  FUNC_5(&VAR_3->sc_tick_ch);
  FUNC_15(VAR_1, &VAR_3->sc_link_task);
  FUNC_9(VAR_4);
 }

 if (VAR_3->sc_miibus != ((void*)0)) {
  FUNC_6(VAR_2, VAR_3->sc_miibus);
  VAR_3->sc_miibus = ((void*)0);
 }
 FUNC_2(VAR_2);
 FUNC_13(VAR_3);

 if (VAR_4 != ((void*)0)) {
  FUNC_11(VAR_4);
  VAR_3->sc_ifp = ((void*)0);
 }

 if (VAR_3->sc_ih) {
  FUNC_4(VAR_2, VAR_3->sc_res[1], VAR_3->sc_ih);
  VAR_3->sc_ih = ((void*)0);
 }
 FUNC_3(VAR_2, VAR_3->sc_spec, VAR_3->sc_res);

 FUNC_12(&VAR_3->sc_mii_mtx);
 FUNC_12(&VAR_3->sc_mtx);

 return (0);
}
