
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int sc_rftoggle_task; int sc_tq; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {scalar_t__ ic_nrunning; int ic_vaps; struct iwn_softc* ic_softc; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct iwn_softc*) ;
 int FUNC_4 (struct iwn_softc*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_0)
{
 struct iwn_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211vap *VAR_2;
 int VAR_3;

 if (VAR_0->ic_nrunning > 0) {
  VAR_3 = FUNC_3(VAR_1);

  switch (VAR_3) {
  case 0:
   FUNC_1(VAR_0);
   break;
  case 1:

   FUNC_5(VAR_1->sc_tq, &VAR_1->sc_rftoggle_task);
   break;
  default:
   VAR_2 = FUNC_0(&VAR_0->ic_vaps);
   if (VAR_2 != ((void*)0))
    FUNC_2(VAR_2);
   break;
  }
 } else
  FUNC_4(VAR_1);
}
