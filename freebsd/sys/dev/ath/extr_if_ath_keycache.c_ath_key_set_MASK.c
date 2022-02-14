
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_bss; TYPE_1__* iv_ic; } ;
struct ieee80211_key {int dummy; } ;
struct ath_softc {int dummy; } ;
struct TYPE_2__ {struct ath_softc* ic_softc; } ;


 int FUNC_0 (struct ath_softc*,struct ieee80211vap*,struct ieee80211_key const*,int ) ;

int
FUNC_1(struct ieee80211vap *VAR_0, const struct ieee80211_key *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->iv_ic->ic_softc;

 return FUNC_0(VAR_2, VAR_0, VAR_1, VAR_0->iv_bss);
}
