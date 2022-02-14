
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_ieee; int ic_freq; int ic_maxpower; int ic_maxregpower; } ;


 int FUNC_0 (char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(const struct ieee80211_channel *VAR_0)
{
 FUNC_0("Channel %3u : %u MHz %3.1f reg %2d  ",
     VAR_0->ic_ieee, VAR_0->ic_freq,
     VAR_0->ic_maxpower/2., VAR_0->ic_maxregpower);
}
