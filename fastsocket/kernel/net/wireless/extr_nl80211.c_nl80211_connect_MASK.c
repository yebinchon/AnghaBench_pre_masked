
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int flags; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wiphy wiphy; TYPE_1__* ieee80211_ptr; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wiphy wiphy; TYPE_1__* ieee80211_ptr; } ;
struct cfg80211_connect_params {int bg_scan_period; scalar_t__ mfp; int vht_capa; int vht_capa_mask; int flags; int ht_capa; int ht_capa_mask; scalar_t__ privacy; TYPE_2__* channel; void* ie_len; void* ie; void* ssid_len; void* ssid; void* bssid; int crypto; void* auth_type; } ;
struct cfg80211_cached_keys {int dummy; } ;
typedef int connect ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct cfg80211_cached_keys*) ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_1 (struct cfg80211_cached_keys*) ;
 int VAR_27 ;
 int FUNC_2 (struct net_device*,struct net_device*,struct cfg80211_connect_params*,struct cfg80211_cached_keys*) ;
 TYPE_2__* FUNC_3 (struct wiphy*,void*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct cfg80211_cached_keys*) ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (struct cfg80211_connect_params*,int ,int) ;
 int FUNC_8 (struct net_device*,struct genl_info*,int *,int ) ;
 struct cfg80211_cached_keys* FUNC_9 (struct net_device*,scalar_t__,int *) ;
 int FUNC_10 (struct net_device*,void*,int ) ;
 void* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 void* FUNC_14 (scalar_t__) ;
 void* FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_28, struct genl_info *VAR_29)
{
 struct cfg80211_registered_device *VAR_30 = VAR_29->user_ptr[0];
 struct net_device *VAR_31 = VAR_29->user_ptr[1];
 struct cfg80211_connect_params VAR_32;
 struct wiphy *VAR_33;
 struct cfg80211_cached_keys *VAR_34 = ((void*)0);
 int VAR_35;

 FUNC_7(&VAR_32, 0, sizeof(VAR_32));

 if (!FUNC_4(VAR_29->attrs[VAR_11]))
  return -VAR_2;

 if (!VAR_29->attrs[VAR_15] ||
     !FUNC_15(VAR_29->attrs[VAR_15]))
  return -VAR_2;

 if (VAR_29->attrs[VAR_5]) {
  VAR_32.auth_type =
   FUNC_14(VAR_29->attrs[VAR_5]);
  if (!FUNC_10(VAR_30, VAR_32.auth_type,
          VAR_21))
   return -VAR_2;
 } else
  VAR_32.auth_type = VAR_20;

 VAR_32.privacy = VAR_29->attrs[VAR_14];

 VAR_35 = FUNC_8(VAR_30, VAR_29, &VAR_32.crypto,
          VAR_24);
 if (VAR_35)
  return VAR_35;

 if (VAR_31->ieee80211_ptr->iftype != VAR_23 &&
     VAR_31->ieee80211_ptr->iftype != VAR_22)
  return -VAR_3;

 VAR_33 = &VAR_30->wiphy;

 VAR_32.bg_scan_period = -1;
 if (VAR_29->attrs[VAR_6] &&
  (VAR_33->flags & VAR_27)) {
  VAR_32.bg_scan_period =
   FUNC_13(VAR_29->attrs[VAR_6]);
 }

 if (VAR_29->attrs[VAR_13])
  VAR_32.bssid = FUNC_11(VAR_29->attrs[VAR_13]);
 VAR_32.ssid = FUNC_11(VAR_29->attrs[VAR_15]);
 VAR_32.ssid_len = FUNC_15(VAR_29->attrs[VAR_15]);

 if (VAR_29->attrs[VAR_11]) {
  VAR_32.ie = FUNC_11(VAR_29->attrs[VAR_11]);
  VAR_32.ie_len = FUNC_15(VAR_29->attrs[VAR_11]);
 }

 if (VAR_29->attrs[VAR_16]) {
  VAR_32.mfp = FUNC_14(VAR_29->attrs[VAR_16]);
  if (VAR_32.mfp != VAR_26 &&
      VAR_32.mfp != VAR_25)
   return -VAR_2;
 } else {
  VAR_32.mfp = VAR_25;
 }

 if (VAR_29->attrs[VAR_19]) {
  VAR_32.channel =
   FUNC_3(VAR_33,
       FUNC_14(VAR_29->attrs[VAR_19]));
  if (!VAR_32.channel ||
      VAR_32.channel->flags & VAR_4)
   return -VAR_2;
 }

 if (VAR_32.privacy && VAR_29->attrs[VAR_12]) {
  VAR_34 = FUNC_9(VAR_30,
       VAR_29->attrs[VAR_12], ((void*)0));
  if (FUNC_0(VAR_34))
   return FUNC_1(VAR_34);
 }

 if (FUNC_12(VAR_29->attrs[VAR_7]))
  VAR_32.flags |= VAR_0;

 if (VAR_29->attrs[VAR_10])
  FUNC_6(&VAR_32.ht_capa_mask,
         FUNC_11(VAR_29->attrs[VAR_10]),
         sizeof(VAR_32.ht_capa_mask));

 if (VAR_29->attrs[VAR_9]) {
  if (!VAR_29->attrs[VAR_10]) {
   FUNC_5(VAR_34);
   return -VAR_2;
  }
  FUNC_6(&VAR_32.ht_capa,
         FUNC_11(VAR_29->attrs[VAR_9]),
         sizeof(VAR_32.ht_capa));
 }

 if (FUNC_12(VAR_29->attrs[VAR_8]))
  VAR_32.flags |= VAR_1;

 if (VAR_29->attrs[VAR_18])
  FUNC_6(&VAR_32.vht_capa_mask,
         FUNC_11(VAR_29->attrs[VAR_18]),
         sizeof(VAR_32.vht_capa_mask));

 if (VAR_29->attrs[VAR_17]) {
  if (!VAR_29->attrs[VAR_18]) {
   FUNC_5(VAR_34);
   return -VAR_2;
  }
  FUNC_6(&VAR_32.vht_capa,
         FUNC_11(VAR_29->attrs[VAR_17]),
         sizeof(VAR_32.vht_capa));
 }

 VAR_35 = FUNC_2(VAR_30, VAR_31, &VAR_32, VAR_34);
 if (VAR_35)
  FUNC_5(VAR_34);
 return VAR_35;
}
