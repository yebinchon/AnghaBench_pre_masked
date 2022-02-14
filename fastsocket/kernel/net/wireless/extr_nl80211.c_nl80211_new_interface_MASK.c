
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wireless_dev {int list; int identifier; int mgmt_registrations_lock; int mgmt_registrations; int event_lock; int event_list; int mtx; int mesh_id_up_len; int ssid; } ;
struct vif_params {int use_4addr; int macaddr; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_pid; int ** attrs; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_4__ {int interface_modes; } ;
struct cfg80211_registered_device {int devlist_mtx; int devlist_generation; int wdev_list; int wdev_id; TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef int params ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_3__ {int add_virtual_intf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct wireless_dev*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;

 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct vif_params*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ,struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_13 (struct cfg80211_registered_device*,int *,int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int *,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (int ,int ) ;
 int FUNC_21 (int *,int *) ;
 struct wireless_dev* FUNC_22 (struct cfg80211_registered_device*,int ,int,int *,struct vif_params*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct wireless_dev*) ;
 int FUNC_25 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_26(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{
 struct cfg80211_registered_device *VAR_21 = VAR_20->user_ptr[0];
 struct vif_params VAR_22;
 struct wireless_dev *VAR_23;
 struct sk_buff *VAR_24;
 int VAR_25;
 enum nl80211_iftype VAR_26 = VAR_17;
 u32 VAR_27;

 FUNC_8(&VAR_22, 0, sizeof(VAR_22));

 if (!VAR_20->attrs[VAR_10])
  return -VAR_1;

 if (VAR_20->attrs[VAR_11]) {
  VAR_26 = FUNC_15(VAR_20->attrs[VAR_11]);
  if (VAR_26 > VAR_15)
   return -VAR_1;
 }

 if (!VAR_21->ops->add_virtual_intf ||
     !(VAR_21->wiphy.interface_modes & (1 << VAR_26)))
  return -VAR_4;

 if (VAR_26 == 128 && VAR_20->attrs[VAR_12]) {
  FUNC_18(VAR_22.macaddr, VAR_20->attrs[VAR_12],
      VAR_5);
  if (!FUNC_5(VAR_22.macaddr))
   return -VAR_0;
 }

 if (VAR_20->attrs[VAR_9]) {
  VAR_22.use_4addr = !!FUNC_16(VAR_20->attrs[VAR_9]);
  VAR_25 = FUNC_13(VAR_21, ((void*)0), VAR_22.use_4addr, VAR_26);
  if (VAR_25)
   return VAR_25;
 }

 VAR_24 = FUNC_20(VAR_18, VAR_6);
 if (!VAR_24)
  return -VAR_3;

 VAR_25 = FUNC_21(VAR_26 == VAR_16 ?
      VAR_20->attrs[VAR_14] : ((void*)0),
      &VAR_27);
 VAR_23 = FUNC_22(VAR_21,
    FUNC_14(VAR_20->attrs[VAR_10]),
    VAR_26, VAR_25 ? ((void*)0) : &VAR_27, &VAR_22);
 if (FUNC_2(VAR_23)) {
  FUNC_19(VAR_24);
  return FUNC_3(VAR_23);
 }

 switch (VAR_26) {
 case 129:
  if (!VAR_20->attrs[VAR_13])
   break;
  FUNC_24(VAR_23);
  FUNC_0(VAR_8 !=
        VAR_7);
  VAR_23->mesh_id_up_len =
   FUNC_17(VAR_20->attrs[VAR_13]);
  FUNC_7(VAR_23->ssid, FUNC_14(VAR_20->attrs[VAR_13]),
         VAR_23->mesh_id_up_len);
  FUNC_25(VAR_23);
  break;
 case 128:




  FUNC_9(&VAR_23->mtx);
  FUNC_1(&VAR_23->event_list);
  FUNC_23(&VAR_23->event_lock);
  FUNC_1(&VAR_23->mgmt_registrations);
  FUNC_23(&VAR_23->mgmt_registrations_lock);

  FUNC_10(&VAR_21->devlist_mtx);
  VAR_23->identifier = ++VAR_21->wdev_id;
  FUNC_6(&VAR_23->list, &VAR_21->wdev_list);
  VAR_21->devlist_generation++;
  FUNC_11(&VAR_21->devlist_mtx);
  break;
 default:
  break;
 }

 if (FUNC_12(VAR_24, VAR_20->snd_pid, VAR_20->snd_seq, 0,
          VAR_21, VAR_23) < 0) {
  FUNC_19(VAR_24);
  return -VAR_2;
 }

 return FUNC_4(VAR_24, VAR_20);
}
