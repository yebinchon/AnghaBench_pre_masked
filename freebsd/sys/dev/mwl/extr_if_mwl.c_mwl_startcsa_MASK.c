
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_csapending; int sc_mh; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_csa_count; int ic_csa_newchan; struct mwl_softc* ic_softc; } ;
typedef int MWL_HAL_CHANNEL ;


 int FUNC_0 (int ,int *,int,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->iv_ic;
 struct mwl_softc *VAR_2 = VAR_1->ic_softc;
 MWL_HAL_CHANNEL VAR_3;

 if (VAR_2->sc_csapending)
  return;

 FUNC_1(&VAR_3, VAR_1->ic_csa_newchan);

 FUNC_0(VAR_2->sc_mh, &VAR_3, 1, VAR_1->ic_csa_count);
 VAR_2->sc_csapending = 1;
}
