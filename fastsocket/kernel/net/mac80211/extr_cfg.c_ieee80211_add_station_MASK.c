
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_parameters {int sta_flags_set; struct net_device* vlan; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int addr; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct ieee80211_local {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct sta_info*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ieee80211_local*,struct sta_info*,struct station_parameters*) ;
 struct sta_info* FUNC_8 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_9 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_10 (struct sta_info*) ;
 int FUNC_11 (struct sta_info*,int ) ;
 int FUNC_12 (struct sta_info*,int ) ;
 struct ieee80211_local* FUNC_13 (struct wiphy*) ;

__attribute__((used)) static int FUNC_14(struct wiphy *VAR_9, struct net_device *VAR_10,
     u8 *VAR_11, struct station_parameters *VAR_12)
{
 struct ieee80211_local *VAR_13 = FUNC_13(VAR_9);
 struct sta_info *VAR_14;
 struct ieee80211_sub_if_data *VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_12->vlan) {
  VAR_15 = FUNC_1(VAR_12->vlan);

  if (VAR_15->vif.type != VAR_6 &&
      VAR_15->vif.type != VAR_5)
   return -VAR_0;
 } else
  VAR_15 = FUNC_1(VAR_10);

 if (FUNC_2(VAR_11, VAR_15->vif.addr))
  return -VAR_0;

 if (FUNC_4(VAR_11))
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_15, VAR_11, VAR_2);
 if (!VAR_14)
  return -VAR_1;





 if (!(VAR_12->sta_flags_set & FUNC_0(VAR_7))) {
  FUNC_11(VAR_14, VAR_4);
  FUNC_11(VAR_14, VAR_3);
 }

 VAR_16 = FUNC_7(VAR_13, VAR_14, VAR_12);
 if (VAR_16) {
  FUNC_9(VAR_13, VAR_14);
  return VAR_16;
 }





 if (!FUNC_12(VAR_14, VAR_8))
  FUNC_5(VAR_14);

 VAR_17 = VAR_15->vif.type == VAR_6 ||
  VAR_15->vif.type == VAR_5;

 VAR_16 = FUNC_10(VAR_14);
 if (VAR_16) {
  FUNC_6();
  return VAR_16;
 }

 if (VAR_17)
  FUNC_3(VAR_14);

 FUNC_6();

 return 0;
}
