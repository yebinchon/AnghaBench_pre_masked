
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsu_vap {int (* newstate ) (struct ieee80211vap*,int,int) ;} ;
struct rsu_softc {int sc_vap_is_running; } ;
struct ieee80211vap {int iv_state; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rsu_softc* ic_softc; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (struct ieee80211com*) ;


 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct rsu_softc*) ;
 int FUNC_3 (struct rsu_softc*) ;
 struct rsu_vap* FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (struct rsu_softc*) ;
 int FUNC_6 (struct rsu_softc*,int) ;
 int FUNC_7 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211vap *VAR_0, enum ieee80211_state VAR_1,
    int VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_0->iv_ic;
 struct rsu_softc *VAR_4 = VAR_3->ic_softc;
 struct rsu_vap *VAR_5 = FUNC_4(VAR_0);

 if (VAR_0->iv_state != VAR_1) {
  FUNC_1(VAR_3);
  FUNC_2(VAR_4);

  switch (VAR_1) {
  case 129:
   VAR_4->sc_vap_is_running = 0;
   FUNC_6(VAR_4, 0);
   break;
  case 128:
   VAR_4->sc_vap_is_running = 1;
   FUNC_6(VAR_4, 1);
   break;
  default:

   break;
  }
  FUNC_5(VAR_4);

  FUNC_3(VAR_4);
  FUNC_0(VAR_3);
 }

 return (VAR_5->newstate(VAR_0, VAR_1, VAR_2));
}
