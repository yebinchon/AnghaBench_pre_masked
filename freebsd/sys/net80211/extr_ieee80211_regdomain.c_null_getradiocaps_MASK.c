
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_nchans; int ic_channels; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211_channel*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0, int VAR_1,
 int *VAR_2, struct ieee80211_channel *VAR_3)
{

 if (VAR_1 > VAR_0->ic_nchans)
  VAR_1 = VAR_0->ic_nchans;
 FUNC_0(VAR_3, VAR_0->ic_channels, VAR_1*sizeof(struct ieee80211_channel));
 *VAR_2 = VAR_1;
}
