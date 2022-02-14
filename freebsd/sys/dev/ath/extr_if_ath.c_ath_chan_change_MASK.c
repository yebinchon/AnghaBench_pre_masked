
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_softc {int sc_curmode; struct ieee80211_channel* sc_curchan; } ;
typedef enum ieee80211_phymode { ____Placeholder_ieee80211_phymode } ieee80211_phymode ;


 int FUNC_0 (struct ath_softc*,int) ;
 int FUNC_1 (struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_2(struct ath_softc *VAR_0, struct ieee80211_channel *VAR_1)
{
 enum ieee80211_phymode VAR_2;





 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != VAR_0->sc_curmode)
  FUNC_0(VAR_0, VAR_2);
 VAR_0->sc_curchan = VAR_1;
}
