
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct ieee80211_bss_conf {int dummy; } ;
struct TYPE_3__ {int (* bss_info_changed ) (int *,TYPE_2__*,struct ieee80211_bss_conf*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,struct ieee80211_bss_conf*,int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_bss_conf*,int) ;
 int FUNC_5 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_7,
     struct ieee80211_sub_if_data *VAR_8,
     struct ieee80211_bss_conf *VAR_9,
     u32 VAR_10)
{
 FUNC_2();

 if (FUNC_0(VAR_10 & (VAR_0 |
        VAR_1) &&
    VAR_8->vif.type != VAR_3 &&
    VAR_8->vif.type != VAR_2 &&
    VAR_8->vif.type != VAR_4))
  return;

 if (FUNC_0(VAR_8->vif.type == VAR_6 ||
    VAR_8->vif.type == VAR_5))
  return;

 FUNC_1(VAR_8);

 FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_7->ops->bss_info_changed)
  VAR_7->ops->bss_info_changed(&VAR_7->hw, &VAR_8->vif, VAR_9, VAR_10);
 FUNC_5(VAR_7);
}
