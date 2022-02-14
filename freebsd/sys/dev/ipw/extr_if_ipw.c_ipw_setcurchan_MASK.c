
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct ieee80211_channel* ic_curchan; } ;
struct ipw_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_1(struct ipw_softc *VAR_0, struct ieee80211_channel *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_0->sc_ic;

 VAR_2->ic_curchan = VAR_1;
 FUNC_0(VAR_2);
}
