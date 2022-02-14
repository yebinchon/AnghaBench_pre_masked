
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211_dfs_state {int cac_timer; } ;
struct ieee80211com {TYPE_1__* ic_curchan; struct ieee80211_dfs_state ic_dfs; } ;
struct TYPE_2__ {int ic_freq; int ic_ieee; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211com*,TYPE_1__*,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct ieee80211vap *VAR_3)
{
 struct ieee80211com *VAR_4 = VAR_3->iv_ic;
 struct ieee80211_dfs_state *VAR_5 = &VAR_4->ic_dfs;

 FUNC_0(VAR_4);

 FUNC_1(&VAR_5->cac_timer, VAR_0, VAR_2, VAR_3);
 FUNC_3(VAR_3->iv_ifp, "start %d second CAC timer on channel %u (%u MHz)\n",
     FUNC_4(VAR_0),
     VAR_4->ic_curchan->ic_ieee, VAR_4->ic_curchan->ic_freq);
 FUNC_2(VAR_4, VAR_4->ic_curchan, VAR_1);
}
