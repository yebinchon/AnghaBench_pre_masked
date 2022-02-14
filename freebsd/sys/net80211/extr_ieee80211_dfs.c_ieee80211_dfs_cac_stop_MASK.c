
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_ifp; struct ieee80211com* iv_ic; } ;
struct ieee80211_dfs_state {int cac_timer; } ;
struct ieee80211com {TYPE_1__* ic_curchan; struct ieee80211_dfs_state ic_dfs; } ;
struct TYPE_2__ {int ic_freq; int ic_ieee; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211com*,TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,int ,int ) ;

void
FUNC_5(struct ieee80211vap *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_1->iv_ic;
 struct ieee80211_dfs_state *VAR_3 = &VAR_2->ic_dfs;

 FUNC_0(VAR_2);


 if (FUNC_1(&VAR_3->cac_timer)) {
  FUNC_4(VAR_1->iv_ifp, "stop CAC timer on channel %u (%u MHz)\n",
      VAR_2->ic_curchan->ic_ieee, VAR_2->ic_curchan->ic_freq);
  FUNC_3(VAR_2, VAR_2->ic_curchan,
      VAR_0);
 }
 FUNC_2(&VAR_3->cac_timer);
}
