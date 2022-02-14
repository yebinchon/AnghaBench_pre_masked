
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {struct ieee80211com sc_ic; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ FUNC_0 (int ) ;

uint32_t
FUNC_1(struct bwn_mac *VAR_0)
{
 struct bwn_softc *VAR_1 = VAR_0->mac_sc;
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 return (FUNC_0(VAR_2->ic_curchan) ? 1 : 36);
}
