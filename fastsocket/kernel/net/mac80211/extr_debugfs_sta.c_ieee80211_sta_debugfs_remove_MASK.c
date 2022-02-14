
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dir; } ;
struct sta_info {TYPE_1__ debugfs; int sta; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int *,int *) ;

void FUNC_2(struct sta_info *VAR_0)
{
 struct ieee80211_local *VAR_1 = VAR_0->local;
 struct ieee80211_sub_if_data *VAR_2 = VAR_0->sdata;

 FUNC_1(VAR_1, VAR_2, &VAR_0->sta, VAR_0->debugfs.dir);
 FUNC_0(VAR_0->debugfs.dir);
 VAR_0->debugfs.dir = ((void*)0);
}
