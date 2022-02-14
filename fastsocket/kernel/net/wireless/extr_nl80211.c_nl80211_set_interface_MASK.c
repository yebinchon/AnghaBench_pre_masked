
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wireless_dev {int iftype; int use_4addr; int mesh_id_up_len; int ssid; } ;
struct vif_params {int use_4addr; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; } ;
typedef int params ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*,struct net_device*,int,int *,struct vif_params*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct vif_params*,int ,int) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct net_device*,int,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (struct wireless_dev*) ;
 int FUNC_12 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_11, struct genl_info *VAR_12)
{
 struct cfg80211_registered_device *VAR_13 = VAR_12->user_ptr[0];
 struct vif_params VAR_14;
 int VAR_15;
 enum nl80211_iftype VAR_16, VAR_17;
 struct net_device *VAR_18 = VAR_12->user_ptr[1];
 u32 VAR_19, *VAR_20 = ((void*)0);
 bool VAR_21 = 0;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 VAR_16 = VAR_17 = VAR_18->ieee80211_ptr->iftype;

 if (VAR_12->attrs[VAR_5]) {
  VAR_17 = FUNC_7(VAR_12->attrs[VAR_5]);
  if (VAR_16 != VAR_17)
   VAR_21 = 1;
  if (VAR_17 > VAR_8)
   return -VAR_1;
 }

 if (VAR_12->attrs[VAR_6]) {
  struct wireless_dev *VAR_22 = VAR_18->ieee80211_ptr;

  if (VAR_17 != VAR_9)
   return -VAR_1;
  if (FUNC_4(VAR_18))
   return -VAR_0;

  FUNC_11(VAR_22);
  FUNC_0(VAR_3 !=
        VAR_2);
  VAR_22->mesh_id_up_len =
   FUNC_9(VAR_12->attrs[VAR_6]);
  FUNC_2(VAR_22->ssid, FUNC_6(VAR_12->attrs[VAR_6]),
         VAR_22->mesh_id_up_len);
  FUNC_12(VAR_22);
 }

 if (VAR_12->attrs[VAR_4]) {
  VAR_14.use_4addr = !!FUNC_8(VAR_12->attrs[VAR_4]);
  VAR_21 = 1;
  VAR_15 = FUNC_5(VAR_13, VAR_18, VAR_14.use_4addr, VAR_17);
  if (VAR_15)
   return VAR_15;
 } else {
  VAR_14.use_4addr = -1;
 }

 if (VAR_12->attrs[VAR_7]) {
  if (VAR_17 != VAR_10)
   return -VAR_1;
  VAR_15 = FUNC_10(VAR_12->attrs[VAR_7],
       &VAR_19);
  if (VAR_15)
   return VAR_15;

  VAR_20 = &VAR_19;
  VAR_21 = 1;
 }

 if (VAR_21)
  VAR_15 = FUNC_1(VAR_13, VAR_18, VAR_17, VAR_20, &VAR_14);
 else
  VAR_15 = 0;

 if (!VAR_15 && VAR_14.use_4addr != -1)
  VAR_18->ieee80211_ptr->use_4addr = VAR_14.use_4addr;

 return VAR_15;
}
