
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scan_state {int ss_last; struct ieee80211_channel const** ss_chans; } ;
struct ieee80211_channel {int dummy; } ;



__attribute__((used)) static int
FUNC_0(const struct ieee80211_scan_state *VAR_0,
 const struct ieee80211_channel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ss_last; VAR_2++)
  if (VAR_0->ss_chans[VAR_2] == VAR_1)
   return 1;
 return 0;
}
