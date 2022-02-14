
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_dfs_state {int * lastchan; int nol_timer; } ;
struct ieee80211com {int ic_nchans; TYPE_1__* ic_channels; struct ieee80211_dfs_state ic_dfs; } ;
struct TYPE_2__ {scalar_t__ ic_state; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct ieee80211_dfs_state *VAR_1 = &VAR_0->ic_dfs;
 int VAR_2;



 FUNC_0(&VAR_1->nol_timer);
 for (VAR_2 = 0; VAR_2 < VAR_0->ic_nchans; VAR_2++)
  VAR_0->ic_channels[VAR_2].ic_state = 0;
 VAR_1->lastchan = ((void*)0);
}
