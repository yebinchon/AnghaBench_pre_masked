
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct ieee80211_rateset const* ic_sup_rates; } ;
struct ieee80211_rateset {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 size_t FUNC_0 (struct ieee80211_channel const*) ;

const struct ieee80211_rateset *
FUNC_1(struct ieee80211com *VAR_0, const struct ieee80211_channel *VAR_1)
{

 return &VAR_0->ic_sup_rates[FUNC_0(VAR_1)];
}
