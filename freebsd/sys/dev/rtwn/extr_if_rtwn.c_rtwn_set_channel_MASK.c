
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int dummy; } ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; struct rtwn_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*) ;
 int FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct rtwn_softc*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_0)
{
 struct rtwn_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211_channel *VAR_2 = VAR_0->ic_curchan;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1);
}
