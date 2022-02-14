
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int features; struct ieee80211_supported_band** bands; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wiphy wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct ieee80211_supported_band {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wiphy wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_9__ {scalar_t__ width; TYPE_3__* chan; } ;
struct cfg80211_ibss_params {int beacon_interval; int channel_fixed; int privacy; int control_port; TYPE_4__ chandef; int mcast_rate; int basic_rates; void* ie_len; void* ie; void* ssid_len; void* ssid; void* bssid; } ;
struct cfg80211_cached_keys {int dummy; } ;
typedef int ibss ;
struct TYPE_8__ {size_t band; } ;
struct TYPE_7__ {scalar_t__ iftype; } ;
struct TYPE_6__ {int join_ibss; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cfg80211_cached_keys*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct cfg80211_cached_keys*) ;
 int FUNC_2 (struct net_device*,struct net_device*,struct cfg80211_ibss_params*,struct cfg80211_cached_keys*) ;
 int FUNC_3 (struct wiphy*,TYPE_4__*) ;
 int FUNC_4 (struct ieee80211_supported_band*,int *,int,int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct cfg80211_cached_keys*) ;
 int FUNC_8 (struct cfg80211_ibss_params*,int ,int) ;
 int FUNC_9 (struct net_device*,struct genl_info*,TYPE_4__*) ;
 struct cfg80211_cached_keys* FUNC_10 (struct net_device*,scalar_t__,int*) ;
 int FUNC_11 (struct net_device*,int ,int) ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 void* FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_16, struct genl_info *VAR_17)
{
 struct cfg80211_registered_device *VAR_18 = VAR_17->user_ptr[0];
 struct net_device *VAR_19 = VAR_17->user_ptr[1];
 struct cfg80211_ibss_params VAR_20;
 struct wiphy *VAR_21;
 struct cfg80211_cached_keys *VAR_22 = ((void*)0);
 int VAR_23;

 FUNC_8(&VAR_20, 0, sizeof(VAR_20));

 if (!FUNC_6(VAR_17->attrs[VAR_6]))
  return -VAR_0;

 if (!VAR_17->attrs[VAR_11] ||
     !FUNC_15(VAR_17->attrs[VAR_11]))
  return -VAR_0;

 VAR_20.beacon_interval = 100;

 if (VAR_17->attrs[VAR_2]) {
  VAR_20.beacon_interval =
   FUNC_14(VAR_17->attrs[VAR_2]);
  if (VAR_20.beacon_interval < 1 || VAR_20.beacon_interval > 10000)
   return -VAR_0;
 }

 if (!VAR_18->ops->join_ibss)
  return -VAR_1;

 if (VAR_19->ieee80211_ptr->iftype != VAR_15)
  return -VAR_1;

 VAR_21 = &VAR_18->wiphy;

 if (VAR_17->attrs[VAR_8]) {
  VAR_20.bssid = FUNC_12(VAR_17->attrs[VAR_8]);

  if (!FUNC_5(VAR_20.bssid))
   return -VAR_0;
 }
 VAR_20.ssid = FUNC_12(VAR_17->attrs[VAR_11]);
 VAR_20.ssid_len = FUNC_15(VAR_17->attrs[VAR_11]);

 if (VAR_17->attrs[VAR_6]) {
  VAR_20.ie = FUNC_12(VAR_17->attrs[VAR_6]);
  VAR_20.ie_len = FUNC_15(VAR_17->attrs[VAR_6]);
 }

 VAR_23 = FUNC_9(VAR_18, VAR_17, &VAR_20.chandef);
 if (VAR_23)
  return VAR_23;

 if (!FUNC_3(&VAR_18->wiphy, &VAR_20.chandef))
  return -VAR_0;

 if (VAR_20.chandef.width > VAR_13)
  return -VAR_0;
 if (VAR_20.chandef.width != VAR_12 &&
     !(VAR_18->wiphy.features & VAR_14))
  return -VAR_0;

 VAR_20.channel_fixed = !!VAR_17->attrs[VAR_5];
 VAR_20.privacy = !!VAR_17->attrs[VAR_10];

 if (VAR_17->attrs[VAR_3]) {
  u8 *VAR_24 =
   FUNC_12(VAR_17->attrs[VAR_3]);
  int VAR_25 =
   FUNC_15(VAR_17->attrs[VAR_3]);
  struct ieee80211_supported_band *VAR_26 =
   VAR_21->bands[VAR_20.chandef.chan->band];

  VAR_23 = FUNC_4(VAR_26, VAR_24, VAR_25,
          &VAR_20.basic_rates);
  if (VAR_23)
   return VAR_23;
 }

 if (VAR_17->attrs[VAR_9] &&
     !FUNC_11(VAR_18, VAR_20.mcast_rate,
   FUNC_14(VAR_17->attrs[VAR_9])))
  return -VAR_0;

 if (VAR_20.privacy && VAR_17->attrs[VAR_7]) {
  bool VAR_27 = 0;

  VAR_22 = FUNC_10(VAR_18,
       VAR_17->attrs[VAR_7],
       &VAR_27);
  if (FUNC_0(VAR_22))
   return FUNC_1(VAR_22);

  if ((VAR_20.chandef.width != VAR_12) &&
      VAR_27) {
   FUNC_7(VAR_22);
   return -VAR_0;
  }
 }

 VAR_20.control_port =
  FUNC_13(VAR_17->attrs[VAR_4]);

 VAR_23 = FUNC_2(VAR_18, VAR_19, &VAR_20, VAR_22);
 if (VAR_23)
  FUNC_7(VAR_22);
 return VAR_23;
}
