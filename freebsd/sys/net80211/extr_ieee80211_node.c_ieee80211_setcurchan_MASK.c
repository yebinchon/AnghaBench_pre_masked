
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_chan_task; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;
 int FUNC_1 (struct ieee80211com*,struct ieee80211_channel*) ;

void
FUNC_2(struct ieee80211com *VAR_0, struct ieee80211_channel *VAR_1)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_0, &VAR_0->ic_chan_task);
}
