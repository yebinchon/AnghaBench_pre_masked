
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211com {int ic_curchan; } ;
struct mwl_softc {int sc_mh; struct ieee80211com sc_ic; } ;
struct ieee80211_rateset {int* rs_rates; } ;
typedef int rates ;
struct TYPE_4__ {int MgtRate; int McastRate; } ;
typedef TYPE_1__ MWL_HAL_TXRATE ;


 int VAR_0 ;
 struct ieee80211_rateset* FUNC_0 (struct ieee80211com*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct mwl_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 const struct ieee80211_rateset *VAR_3;
 MWL_HAL_TXRATE VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_3 = FUNC_0(VAR_2, VAR_2->ic_curchan);

 VAR_4.MgtRate = VAR_3->rs_rates[0] & VAR_0;

 VAR_4.McastRate = VAR_4.MgtRate;

 return FUNC_2(VAR_1->sc_mh, &VAR_4);
}
