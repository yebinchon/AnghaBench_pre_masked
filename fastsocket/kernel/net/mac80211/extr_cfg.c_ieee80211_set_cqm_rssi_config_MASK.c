
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_bss_conf {scalar_t__ cqm_rssi_thold; scalar_t__ cqm_rssi_hyst; } ;
struct ieee80211_vif {int driver_flags; struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_3__ {scalar_t__ associated; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_vif vif; TYPE_2__ u; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_2,
      struct net_device *VAR_3,
      s32 VAR_4, u32 VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_3);
 struct ieee80211_vif *VAR_7 = &VAR_6->vif;
 struct ieee80211_bss_conf *VAR_8 = &VAR_7->bss_conf;

 if (VAR_4 == VAR_8->cqm_rssi_thold &&
     VAR_5 == VAR_8->cqm_rssi_hyst)
  return 0;

 VAR_8->cqm_rssi_thold = VAR_4;
 VAR_8->cqm_rssi_hyst = VAR_5;


 if (VAR_6->u.mgd.associated &&
     VAR_6->vif.driver_flags & VAR_1)
  FUNC_1(VAR_6, VAR_0);

 return 0;
}
