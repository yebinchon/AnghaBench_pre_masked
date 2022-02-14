
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_key {int dummy; } ;
union sec_param {struct ieee80211_key key; } ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*,struct ieee80211_key const*) ;

__attribute__((used)) static void
FUNC_1(struct rtwn_softc *VAR_0, union sec_param *VAR_1)
{
 const struct ieee80211_key *VAR_2 = &VAR_1->key;

 (void) FUNC_0(VAR_0, VAR_2);
}
