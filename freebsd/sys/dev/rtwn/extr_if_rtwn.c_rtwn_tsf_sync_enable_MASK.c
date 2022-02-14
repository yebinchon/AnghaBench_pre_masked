
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {int id; int tsf_sync_adhoc_task; } ;
struct ieee80211com {int dummy; } ;
struct rtwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_opmode; } ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct rtwn_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct ieee80211com*,int *) ;
 int FUNC_5 (struct rtwn_softc*,int ,int) ;
 int FUNC_6 (struct rtwn_softc*,int ,int ,int ) ;
 int FUNC_7 (struct rtwn_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct rtwn_softc *VAR_2, struct ieee80211vap *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_2->sc_ic;
 struct rtwn_vap *VAR_5 = FUNC_2(VAR_3);


 FUNC_7(VAR_2, VAR_1, FUNC_1(VAR_5->id));

 switch (VAR_3->iv_opmode) {
 case 128:

  FUNC_6(VAR_2, FUNC_0(VAR_5->id),
      VAR_0, 0);
  break;
 case 129:
  FUNC_4(VAR_4, &VAR_5->tsf_sync_adhoc_task);

 case 130:

  FUNC_5(VAR_2, VAR_5->id, 1);
  break;
 default:
  FUNC_3(VAR_2->sc_dev, "undefined opmode %d\n",
      VAR_3->iv_opmode);
  return;
 }
}
