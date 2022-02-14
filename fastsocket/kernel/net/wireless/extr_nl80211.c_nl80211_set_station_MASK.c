
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct station_parameters {int listen_interval; scalar_t__ plink_action; scalar_t__ plink_state; int local_pm; scalar_t__ vlan; int sta_modify_mask; void* ext_capab_len; void* ext_capab; int capability; void* supported_rates_len; void* supported_rates; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
typedef int params ;
typedef enum nl80211_mesh_power_mode { ____Placeholder_nl80211_mesh_power_mode } nl80211_mesh_power_mode ;
struct TYPE_4__ {int iftype; } ;
struct TYPE_3__ {int change_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;







 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct genl_info*,struct net_device*) ;
 int FUNC_4 (struct station_parameters*,int ,int) ;
 int FUNC_5 (struct genl_info*,struct station_parameters*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 void* FUNC_9 (scalar_t__) ;
 void* FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (struct genl_info*,int,struct station_parameters*) ;
 int FUNC_12 (struct net_device*,struct net_device*,int *,struct station_parameters*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_17, struct genl_info *VAR_18)
{
 struct cfg80211_registered_device *VAR_19 = VAR_18->user_ptr[0];
 struct net_device *VAR_20 = VAR_18->user_ptr[1];
 struct station_parameters VAR_21;
 u8 *VAR_22;
 int VAR_23;

 FUNC_4(&VAR_21, 0, sizeof(VAR_21));

 VAR_21.listen_interval = -1;

 if (!VAR_19->ops->change_station)
  return -VAR_1;

 if (VAR_18->attrs[VAR_4])
  return -VAR_0;

 if (!VAR_18->attrs[VAR_3])
  return -VAR_0;

 VAR_22 = FUNC_6(VAR_18->attrs[VAR_3]);

 if (VAR_18->attrs[VAR_10]) {
  VAR_21.supported_rates =
   FUNC_6(VAR_18->attrs[VAR_10]);
  VAR_21.supported_rates_len =
   FUNC_10(VAR_18->attrs[VAR_10]);
 }

 if (VAR_18->attrs[VAR_5]) {
  VAR_21.capability =
   FUNC_7(VAR_18->attrs[VAR_5]);
  VAR_21.sta_modify_mask |= VAR_15;
 }

 if (VAR_18->attrs[VAR_6]) {
  VAR_21.ext_capab =
   FUNC_6(VAR_18->attrs[VAR_6]);
  VAR_21.ext_capab_len =
   FUNC_10(VAR_18->attrs[VAR_6]);
 }

 if (VAR_18->attrs[VAR_7])
  return -VAR_0;

 if (FUNC_11(VAR_18, VAR_20->ieee80211_ptr->iftype, &VAR_21))
  return -VAR_0;

 if (VAR_18->attrs[VAR_8]) {
  VAR_21.plink_action =
   FUNC_9(VAR_18->attrs[VAR_8]);
  if (VAR_21.plink_action >= VAR_13)
   return -VAR_0;
 }

 if (VAR_18->attrs[VAR_9]) {
  VAR_21.plink_state =
   FUNC_9(VAR_18->attrs[VAR_9]);
  if (VAR_21.plink_state >= VAR_14)
   return -VAR_0;
  VAR_21.sta_modify_mask |= VAR_16;
 }

 if (VAR_18->attrs[VAR_2]) {
  enum nl80211_mesh_power_mode VAR_24 = FUNC_8(
   VAR_18->attrs[VAR_2]);

  if (VAR_24 <= VAR_12 ||
      VAR_24 > VAR_11)
   return -VAR_0;

  VAR_21.local_pm = VAR_24;
 }


 VAR_23 = FUNC_5(VAR_18, &VAR_21);
 if (VAR_23)
  return VAR_23;

 VAR_21.vlan = FUNC_3(VAR_18, VAR_19);
 if (FUNC_0(VAR_21.vlan))
  return FUNC_1(VAR_21.vlan);

 switch (VAR_20->ieee80211_ptr->iftype) {
 case 133:
 case 132:
 case 129:
 case 130:
 case 128:
 case 134:
 case 131:
  break;
 default:
  VAR_23 = -VAR_1;
  goto out_put_vlan;
 }


 VAR_23 = FUNC_12(VAR_19, VAR_20, VAR_22, &VAR_21);

 out_put_vlan:
 if (VAR_21.vlan)
  FUNC_2(VAR_21.vlan);

 return VAR_23;
}
