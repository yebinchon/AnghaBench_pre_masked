
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int roc_list; int hw_roc_done; int hw_roc_start; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct ieee80211_local *VAR_2)
{
 FUNC_1(&VAR_2->hw_roc_start, VAR_1);
 FUNC_1(&VAR_2->hw_roc_done, VAR_0);
 FUNC_0(&VAR_2->roc_list);
}
