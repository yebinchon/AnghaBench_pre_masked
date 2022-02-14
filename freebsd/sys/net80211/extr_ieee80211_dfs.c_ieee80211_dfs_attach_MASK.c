
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_dfs_state {int cac_timer; int nol_timer; } ;
struct ieee80211com {int ic_set_quiet; struct ieee80211_dfs_state ic_dfs; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;

void
FUNC_2(struct ieee80211com *VAR_1)
{
 struct ieee80211_dfs_state *VAR_2 = &VAR_1->ic_dfs;

 FUNC_1(&VAR_2->nol_timer, FUNC_0(VAR_1), 0);
 FUNC_1(&VAR_2->cac_timer, FUNC_0(VAR_1), 0);

 VAR_1->ic_set_quiet = VAR_0;
}
