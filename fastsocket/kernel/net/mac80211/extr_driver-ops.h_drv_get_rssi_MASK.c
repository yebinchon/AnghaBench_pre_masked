
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef int s8 ;
struct TYPE_2__ {int (* get_rssi ) (int *,int *,struct ieee80211_sta*,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,struct ieee80211_sta*,int *) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sta*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct ieee80211_local *VAR_0,
    struct ieee80211_sub_if_data *VAR_1,
    struct ieee80211_sta *VAR_2,
    s8 *VAR_3)
{
 int VAR_4;

 FUNC_0();

 VAR_4 = VAR_0->ops->get_rssi(&VAR_0->hw, &VAR_1->vif, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_2, *VAR_3, VAR_4);

 return VAR_4;
}
