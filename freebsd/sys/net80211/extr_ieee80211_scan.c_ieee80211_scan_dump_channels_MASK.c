
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ieee80211_scan_state {int ss_next; int ss_last; struct ieee80211_channel** ss_chans; struct ieee80211com* ss_ic; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct ieee80211com*,struct ieee80211_channel const*) ;
 int FUNC_1 (struct ieee80211_channel const*) ;
 int FUNC_2 (char*,char const*,int,int ) ;

void
FUNC_3(const struct ieee80211_scan_state *VAR_0)
{
 struct ieee80211com *VAR_1 = VAR_0->ss_ic;
 const char *VAR_2;
 int VAR_3;

 VAR_2 = "";
 for (VAR_3 = VAR_0->ss_next; VAR_3 < VAR_0->ss_last; VAR_3++) {
  const struct ieee80211_channel *VAR_4 = VAR_0->ss_chans[VAR_3];

  FUNC_2("%s%u%c", VAR_2, FUNC_0(VAR_1, VAR_4),
      FUNC_1(VAR_4));
  VAR_2 = ", ";
 }
}
