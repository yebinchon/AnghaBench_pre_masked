
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct vif_params {int dummy; } ;
struct TYPE_2__ {int mntr_flags; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_local {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 struct wireless_dev* FUNC_0 (int) ;
 struct ieee80211_sub_if_data* FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211_local*,char const*,struct wireless_dev**,int,struct vif_params*) ;
 struct ieee80211_local* FUNC_3 (struct wiphy*) ;

__attribute__((used)) static struct wireless_dev *FUNC_4(struct wiphy *VAR_1,
      const char *VAR_2,
      enum nl80211_iftype VAR_3,
      u32 *VAR_4,
      struct vif_params *VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_3(VAR_1);
 struct wireless_dev *VAR_7;
 struct ieee80211_sub_if_data *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_2, &VAR_7, VAR_3, VAR_5);
 if (VAR_9)
  return FUNC_0(VAR_9);

 if (VAR_3 == VAR_0 && VAR_4) {
  VAR_8 = FUNC_1(VAR_7);
  VAR_8->u.mntr_flags = *VAR_4;
 }

 return VAR_7;
}
