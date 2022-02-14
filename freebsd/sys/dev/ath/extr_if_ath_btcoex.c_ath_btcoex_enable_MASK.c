
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_softc {scalar_t__ sc_btcoex_mci; } ;


 int FUNC_0 (struct ath_softc*,struct ieee80211_channel const*) ;

int
FUNC_1(struct ath_softc *VAR_0, const struct ieee80211_channel *VAR_1)
{
 if (VAR_0->sc_btcoex_mci) {
  FUNC_0(VAR_0, VAR_1);
 }

 return (0);
}
