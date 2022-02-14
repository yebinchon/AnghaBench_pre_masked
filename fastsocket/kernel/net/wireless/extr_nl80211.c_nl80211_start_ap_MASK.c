
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {scalar_t__ chan; int width; } ;
struct wireless_dev {scalar_t__ iftype; scalar_t__ ssid_len; int ssid; scalar_t__ channel; void* beacon_interval; TYPE_3__ preset_chandef; int wiphy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int features; } ;
struct net_device {TYPE_2__ wiphy; int devlist_mtx; struct wireless_dev* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; int devlist_mtx; struct wireless_dev* ieee80211_ptr; TYPE_1__* ops; } ;
struct cfg80211_ap_settings {scalar_t__ ssid_len; scalar_t__ hidden_ssid; int privacy; int p2p_ctwindow; int p2p_opp_ps; int radar_required; int acl; int ssid; TYPE_3__ chandef; void* beacon_interval; int inactivity_timeout; int crypto; void* auth_type; void* dtim_period; int beacon; } ;
typedef int params ;
struct TYPE_7__ {int start_ap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct wireless_dev*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (struct net_device*,void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (struct cfg80211_ap_settings*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct net_device*,struct genl_info*,int *,int ) ;
 int FUNC_13 (struct net_device*,struct cfg80211_ap_settings*) ;
 int FUNC_14 (struct genl_info*,int *) ;
 int FUNC_15 (struct net_device*,struct genl_info*,TYPE_3__*) ;
 int FUNC_16 (struct net_device*,void*,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 void* FUNC_19 (scalar_t__) ;
 void* FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_2__*,struct genl_info*) ;
 int FUNC_23 (struct net_device*,struct net_device*,struct cfg80211_ap_settings*) ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_28, struct genl_info *VAR_29)
{
 struct cfg80211_registered_device *VAR_30 = VAR_29->user_ptr[0];
 struct net_device *VAR_31 = VAR_29->user_ptr[1];
 struct wireless_dev *VAR_32 = VAR_31->ieee80211_ptr;
 struct cfg80211_ap_settings VAR_33;
 int VAR_34;
 u8 VAR_35 = 0;

 if (VAR_31->ieee80211_ptr->iftype != VAR_25 &&
     VAR_31->ieee80211_ptr->iftype != VAR_26)
  return -VAR_3;

 if (!VAR_30->ops->start_ap)
  return -VAR_3;

 if (VAR_32->beacon_interval)
  return -VAR_1;

 FUNC_9(&VAR_33, 0, sizeof(VAR_33));


 if (!VAR_29->attrs[VAR_8] ||
     !VAR_29->attrs[VAR_9] ||
     !VAR_29->attrs[VAR_7])
  return -VAR_2;

 VAR_34 = FUNC_14(VAR_29, &VAR_33.beacon);
 if (VAR_34)
  return VAR_34;

 VAR_33.beacon_interval =
  FUNC_19(VAR_29->attrs[VAR_8]);
 VAR_33.dtim_period =
  FUNC_19(VAR_29->attrs[VAR_9]);

 VAR_34 = FUNC_6(VAR_30, VAR_33.beacon_interval);
 if (VAR_34)
  return VAR_34;
 if (VAR_29->attrs[VAR_15]) {
  VAR_33.ssid = FUNC_17(VAR_29->attrs[VAR_15]);
  VAR_33.ssid_len =
   FUNC_21(VAR_29->attrs[VAR_15]);
  if (VAR_33.ssid_len == 0 ||
      VAR_33.ssid_len > VAR_4)
   return -VAR_2;
 }

 if (VAR_29->attrs[VAR_10]) {
  VAR_33.hidden_ssid = FUNC_19(
   VAR_29->attrs[VAR_10]);
  if (VAR_33.hidden_ssid != VAR_22 &&
      VAR_33.hidden_ssid != VAR_24 &&
      VAR_33.hidden_ssid != VAR_23)
   return -VAR_2;
 }

 VAR_33.privacy = !!VAR_29->attrs[VAR_14];

 if (VAR_29->attrs[VAR_6]) {
  VAR_33.auth_type = FUNC_19(
   VAR_29->attrs[VAR_6]);
  if (!FUNC_16(VAR_30, VAR_33.auth_type,
          VAR_18))
   return -VAR_2;
 } else
  VAR_33.auth_type = VAR_17;

 VAR_34 = FUNC_12(VAR_30, VAR_29, &VAR_33.crypto,
          VAR_27);
 if (VAR_34)
  return VAR_34;

 if (VAR_29->attrs[VAR_11]) {
  if (!(VAR_30->wiphy.features & VAR_19))
   return -VAR_3;
  VAR_33.inactivity_timeout = FUNC_18(
   VAR_29->attrs[VAR_11]);
 }

 if (VAR_29->attrs[VAR_12]) {
  if (VAR_31->ieee80211_ptr->iftype != VAR_26)
   return -VAR_2;
  VAR_33.p2p_ctwindow =
   FUNC_20(VAR_29->attrs[VAR_12]);
  if (VAR_33.p2p_ctwindow > 127)
   return -VAR_2;
  if (VAR_33.p2p_ctwindow != 0 &&
      !(VAR_30->wiphy.features & VAR_20))
   return -VAR_2;
 }

 if (VAR_29->attrs[VAR_13]) {
  u8 VAR_36;

  if (VAR_31->ieee80211_ptr->iftype != VAR_26)
   return -VAR_2;
  VAR_36 = FUNC_20(VAR_29->attrs[VAR_13]);
  if (VAR_36 > 1)
   return -VAR_2;
  VAR_33.p2p_opp_ps = VAR_36;
  if (VAR_33.p2p_opp_ps != 0 &&
      !(VAR_30->wiphy.features & VAR_21))
   return -VAR_2;
 }

 if (VAR_29->attrs[VAR_16]) {
  VAR_34 = FUNC_15(VAR_30, VAR_29, &VAR_33.chandef);
  if (VAR_34)
   return VAR_34;
 } else if (VAR_32->preset_chandef.chan) {
  VAR_33.chandef = VAR_32->preset_chandef;
 } else if (!FUNC_13(VAR_30, &VAR_33))
  return -VAR_2;

 if (!FUNC_5(&VAR_30->wiphy, &VAR_33.chandef))
  return -VAR_2;

 VAR_34 = FUNC_4(VAR_32->wiphy, &VAR_33.chandef);
 if (VAR_34 < 0)
  return VAR_34;
 if (VAR_34) {
  VAR_35 = FUNC_0(VAR_33.chandef.width);
  VAR_33.radar_required = 1;
 }

 FUNC_10(&VAR_30->devlist_mtx);
 VAR_34 = FUNC_3(VAR_30, VAR_32, VAR_32->iftype,
        VAR_33.chandef.chan,
        VAR_0,
        VAR_35);
 FUNC_11(&VAR_30->devlist_mtx);

 if (VAR_34)
  return VAR_34;

 if (VAR_29->attrs[VAR_5]) {
  VAR_33.acl = FUNC_22(&VAR_30->wiphy, VAR_29);
  if (FUNC_1(VAR_33.acl))
   return FUNC_2(VAR_33.acl);
 }

 VAR_34 = FUNC_23(VAR_30, VAR_31, &VAR_33);
 if (!VAR_34) {
  VAR_32->preset_chandef = VAR_33.chandef;
  VAR_32->beacon_interval = VAR_33.beacon_interval;
  VAR_32->channel = VAR_33.chandef.chan;
  VAR_32->ssid_len = VAR_33.ssid_len;
  FUNC_8(VAR_32->ssid, VAR_33.ssid, VAR_32->ssid_len);
 }

 FUNC_7(VAR_33.acl);

 return VAR_34;
}
