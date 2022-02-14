
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {struct r12a_softc* sc_priv; } ;
struct r12a_softc {int rs_flags; } ;
struct ifnet {int if_capabilities; int if_capenable; } ;
struct ieee80211vap {struct ifnet* iv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;

void
FUNC_2(struct rtwn_softc *VAR_4, struct ieee80211vap *VAR_5)
{
 struct r12a_softc *VAR_6 = VAR_4->sc_priv;
 struct ifnet *VAR_7 = VAR_5->iv_ifp;

 VAR_7->if_capabilities = VAR_0 | VAR_1;
 FUNC_0(VAR_4);
 if (VAR_6->rs_flags & VAR_3)
  VAR_7->if_capenable |= VAR_0;
 if (VAR_6->rs_flags & VAR_2)
  VAR_7->if_capenable |= VAR_1;
 FUNC_1(VAR_4);
}
