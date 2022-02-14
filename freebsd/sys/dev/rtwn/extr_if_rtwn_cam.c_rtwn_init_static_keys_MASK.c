
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_vap {struct ieee80211_key** keys; } ;
struct rtwn_softc {scalar_t__ sc_hwcrypto; } ;
struct ieee80211_key {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rtwn_softc*,struct ieee80211_key const*) ;

int
FUNC_1(struct rtwn_softc *VAR_2, struct rtwn_vap *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2->sc_hwcrypto != VAR_1)
  return (0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const struct ieee80211_key *VAR_6 = VAR_3->keys[VAR_4];
  if (VAR_6 != ((void*)0)) {
   VAR_5 = FUNC_0(VAR_2, VAR_6);
   if (VAR_5 != 0)
    return (VAR_5);
  }
 }

 return (0);
}
