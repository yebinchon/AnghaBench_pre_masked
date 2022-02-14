
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_state; int iv_ifp; int iv_des_chan; struct ieee80211com* iv_ic; } ;
struct ieee80211_dfs_state {int newchan; } ;
struct ieee80211com {int ic_nchans; TYPE_1__* ic_curchan; struct ieee80211_channel* ic_channels; struct ieee80211_dfs_state ic_dfs; } ;
struct ieee80211_channel {int ic_state; int ic_freq; } ;
struct TYPE_3__ {int ic_freq; int ic_ieee; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211vap*,int ,int ) ;
 int FUNC_4 (struct ieee80211com*,TYPE_1__*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_5;
 struct ieee80211com *VAR_7 = VAR_6->iv_ic;
 struct ieee80211_dfs_state *VAR_8 = &VAR_7->ic_dfs;
 int VAR_9;

 FUNC_1(VAR_7);

 if (VAR_6->iv_state != VAR_3)
  return;





 if (FUNC_0(VAR_7->ic_curchan)) {
  FUNC_4(VAR_7, VAR_7->ic_curchan,
      VAR_2);

  FUNC_5(VAR_6->iv_ifp,
      "CAC timer on channel %u (%u MHz) stopped due to radar\n",
      VAR_7->ic_curchan->ic_ieee, VAR_7->ic_curchan->ic_freq);



  VAR_6->iv_des_chan = VAR_8->newchan;
  FUNC_3(VAR_6, VAR_4, 0);
 } else {
  FUNC_5(VAR_6->iv_ifp,
      "CAC timer on channel %u (%u MHz) expired; "
      "no radar detected\n",
      VAR_7->ic_curchan->ic_ieee, VAR_7->ic_curchan->ic_freq);





  for (VAR_9 = 0; VAR_9 < VAR_7->ic_nchans; VAR_9++) {
   struct ieee80211_channel *VAR_10 = &VAR_7->ic_channels[VAR_9];
   if (VAR_10->ic_freq == VAR_7->ic_curchan->ic_freq)
    VAR_10->ic_state |= VAR_0;
  }
  FUNC_4(VAR_7, VAR_7->ic_curchan,
      VAR_1);
  FUNC_2(VAR_6);
 }
}
