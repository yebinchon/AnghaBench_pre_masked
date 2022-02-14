
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int (* ic_node_getrssi ) (struct ieee80211_node const*) ;struct ath_softc* ic_softc; } ;
struct ieee80211_node {int ni_chan; struct ieee80211com* ni_ic; } ;
struct ath_softc {struct ath_hal* sc_ah; } ;
struct ath_hal {int dummy; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hal*,int ) ;
 int FUNC_1 (struct ieee80211_node const*) ;

__attribute__((used)) static void
FUNC_2(const struct ieee80211_node *VAR_1, int8_t *VAR_2, int8_t *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_1->ni_ic;
 struct ath_softc *VAR_5 = VAR_4->ic_softc;
 struct ath_hal *VAR_6 = VAR_5->sc_ah;

 *VAR_2 = VAR_4->ic_node_getrssi(VAR_1);
 if (VAR_1->ni_chan != VAR_0)
  *VAR_3 = FUNC_0(VAR_6, VAR_1->ni_chan);
 else
  *VAR_3 = -95;
}
