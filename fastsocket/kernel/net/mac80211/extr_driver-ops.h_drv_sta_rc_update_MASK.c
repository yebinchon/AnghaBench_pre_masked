
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* sta_rc_update ) (int *,TYPE_2__*,struct ieee80211_sta*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int *,TYPE_2__*,struct ieee80211_sta*,int) ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_sta*,int) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_3,
         struct ieee80211_sub_if_data *VAR_4,
         struct ieee80211_sta *VAR_5, u32 VAR_6)
{
 VAR_4 = FUNC_2(VAR_4);
 FUNC_1(VAR_4);

 FUNC_0(VAR_6 & VAR_0 &&
  (VAR_4->vif.type != VAR_1 &&
   VAR_4->vif.type != VAR_2));

 FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_3->ops->sta_rc_update)
  VAR_3->ops->sta_rc_update(&VAR_3->hw, &VAR_4->vif,
       VAR_5, VAR_6);

 FUNC_4(VAR_3);
}
