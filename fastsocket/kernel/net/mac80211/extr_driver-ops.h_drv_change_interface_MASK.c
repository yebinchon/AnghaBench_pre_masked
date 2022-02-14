
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int (* change_interface ) (int *,int *,int,int) ;} ;


 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_local *VAR_0,
           struct ieee80211_sub_if_data *VAR_1,
           enum nl80211_iftype VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_1();

 FUNC_0(VAR_1);

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_0->ops->change_interface(&VAR_0->hw, &VAR_1->vif, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_4);
 return VAR_4;
}
