
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {int (* newstate ) (struct ieee80211vap*,int,int) ;} ;
struct rtwn_softc {int vaps_running; int monvaps_running; } ;
struct ieee80211vap {size_t iv_state; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rtwn_softc* ic_softc; } ;
typedef enum ieee80211_state { ____Placeholder_ieee80211_state } ieee80211_state ;


 int FUNC_0 (struct ieee80211com*) ;


 int FUNC_1 (struct ieee80211com*) ;
 int VAR_0 ;
 int FUNC_2 (struct rtwn_softc*,int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct rtwn_softc*) ;
 int FUNC_4 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_5 (struct ieee80211vap*) ;
 int * VAR_2 ;
 int FUNC_6 (struct rtwn_softc*,int ,int) ;
 int FUNC_7 (struct ieee80211vap*,int,int) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211vap *VAR_3, enum ieee80211_state VAR_4,
    int VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_3->iv_ic;
 struct rtwn_softc *VAR_7 = VAR_6->ic_softc;
 struct rtwn_vap *VAR_8 = FUNC_5(VAR_3);

 FUNC_2(VAR_7, VAR_0, "%s -> %s\n",
     VAR_2[VAR_3->iv_state],
     VAR_2[VAR_4]);

 if (VAR_3->iv_state != VAR_4) {
  FUNC_1(VAR_6);
  FUNC_3(VAR_7);

  switch (VAR_4) {
  case 129:
   VAR_7->vaps_running--;
   VAR_7->monvaps_running--;

   if (VAR_7->vaps_running == 0) {

    FUNC_6(VAR_7, VAR_1, 0);
   }
   break;
  case 128:
   VAR_7->vaps_running++;
   VAR_7->monvaps_running++;

   if (VAR_7->vaps_running == 1) {

    FUNC_6(VAR_7, VAR_1, 1);
   }
   break;
  default:

   break;
  }

  FUNC_4(VAR_7);
  FUNC_0(VAR_6);
 }

 return (VAR_8->newstate(VAR_3, VAR_4, VAR_5));
}
