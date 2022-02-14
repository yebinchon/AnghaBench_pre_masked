
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_table {scalar_t__* st_maxrssi; } ;
struct ieee80211_scan_state {int ss_last; struct ieee80211_channel** ss_chans; struct sta_table* ss_priv; } ;
struct ieee80211_channel {int ic_flags; size_t ic_ieee; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_3(struct ieee80211_scan_state *VAR_0, int VAR_1)
{
 struct sta_table *VAR_2 = VAR_0->ss_priv;
 struct ieee80211_channel *VAR_3 = ((void*)0);
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_0->ss_last; VAR_4++) {
  struct ieee80211_channel *VAR_5 = VAR_0->ss_chans[VAR_4];






  if (FUNC_1(VAR_5))
   continue;
  if (FUNC_0(VAR_5))
   continue;

  if (VAR_1 != 0 && (VAR_5->ic_flags & VAR_1) != VAR_1)
   continue;
  FUNC_2(sizeof(VAR_5->ic_ieee) == 1, ("ic_chan size"));

  if (VAR_2->st_maxrssi[VAR_5->ic_ieee] == 0) {

   return VAR_5;
  }
  if (VAR_3 == ((void*)0) ||
      VAR_2->st_maxrssi[VAR_5->ic_ieee] < VAR_2->st_maxrssi[VAR_3->ic_ieee])
   VAR_3 = VAR_5;
 }
 return VAR_3;
}
