
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int workqueue; int reconfig_filter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_local*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_local*,int) ;
 int FUNC_4 (struct ieee80211_local*,int ,int ) ;

void FUNC_5(struct ieee80211_local *VAR_1)
{
 FUNC_3(VAR_1, 0);
 FUNC_4(VAR_1, 0, VAR_0);

 FUNC_0(&VAR_1->reconfig_filter);

 FUNC_2(VAR_1->workqueue);
 FUNC_1(VAR_1);
}
