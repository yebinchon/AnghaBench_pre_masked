
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {int tsf_sync_adhoc; int tsf_sync_adhoc_task; int id; int * bcn_mbuf; } ;
struct rtwn_softc {int sc_flags; } ;
struct ieee80211vap {scalar_t__ iv_opmode; int iv_nstate_task; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_parent_task; struct rtwn_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtwn_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtwn_vap*,int ) ;
 int FUNC_5 (struct ieee80211com*,int *) ;
 int FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct ieee80211vap*) ;
 int FUNC_8 (struct ieee80211vap*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rtwn_softc*,struct ieee80211vap*) ;
 int FUNC_11 (struct rtwn_softc*) ;
 int FUNC_12 (struct rtwn_softc*) ;
 int FUNC_13 (struct rtwn_softc*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_14(struct ieee80211vap *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;
 struct rtwn_softc *VAR_5 = VAR_4->ic_softc;
 struct rtwn_vap *VAR_6 = FUNC_2(VAR_3);


 FUNC_7(VAR_3);
 FUNC_5(VAR_4, &VAR_3->iv_nstate_task);
 FUNC_5(VAR_4, &VAR_4->ic_parent_task);

 FUNC_0(VAR_5);

 FUNC_10(VAR_5, VAR_3);
 if (VAR_6->bcn_mbuf != ((void*)0))
  FUNC_9(VAR_6->bcn_mbuf);
 FUNC_13(VAR_5, VAR_3->iv_opmode, VAR_6->id);
 FUNC_12(VAR_5);
 if (VAR_5->sc_flags & VAR_2)
  FUNC_11(VAR_5);
 FUNC_1(VAR_5);

 if (VAR_3->iv_opmode == VAR_0) {
  FUNC_5(VAR_4, &VAR_6->tsf_sync_adhoc_task);
  FUNC_3(&VAR_6->tsf_sync_adhoc);
 }

 FUNC_6(VAR_3);
 FUNC_8(VAR_3);
 FUNC_4(VAR_6, VAR_1);
}
