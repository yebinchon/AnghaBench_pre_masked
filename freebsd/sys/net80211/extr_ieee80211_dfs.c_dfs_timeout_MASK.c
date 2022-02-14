
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_dfs_state {int* nol_event; int nol_timer; } ;
struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; struct ieee80211_dfs_state ic_dfs; } ;
struct ieee80211_channel {int ic_state; int ic_freq; int ic_ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211com*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct ieee80211com*,char*,int ,int ) ;
 int FUNC_4 (struct ieee80211com*,struct ieee80211_channel*) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_4;
 struct ieee80211_dfs_state *VAR_6 = &VAR_5->ic_dfs;
 struct ieee80211_channel *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_5);

 VAR_10 = VAR_9 = VAR_3;
 for (VAR_8 = 0; VAR_8 < VAR_5->ic_nchans; VAR_8++) {
  VAR_7 = &VAR_5->ic_channels[VAR_8];
  if (FUNC_0(VAR_7)) {
   if (FUNC_5(VAR_10, VAR_6->nol_event[VAR_8]+VAR_2)) {
    VAR_7->ic_state &= ~VAR_1;
    if (VAR_7->ic_state & VAR_0) {





     FUNC_3(VAR_5, "radar on channel %u "
         "(%u MHz) cleared after timeout\n",
         VAR_7->ic_ieee, VAR_7->ic_freq);

     VAR_7->ic_state &=
         ~VAR_0;
     FUNC_4(VAR_5, VAR_7);
    }
   } else if (VAR_6->nol_event[VAR_8] < VAR_9)
    VAR_9 = VAR_6->nol_event[VAR_8];
  }
 }
 if (VAR_9 != VAR_10) {

  FUNC_2(&VAR_6->nol_timer, VAR_9 + VAR_2 - VAR_10);
 }
}
