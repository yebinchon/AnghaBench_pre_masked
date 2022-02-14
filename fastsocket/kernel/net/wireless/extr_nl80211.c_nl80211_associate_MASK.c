
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct ieee80211_channel {int flags; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct cfg80211_assoc_request {int use_mfp; int crypto; int vht_capa; int vht_capa_mask; int flags; int ht_capa; int ht_capa_mask; void* prev_bssid; void* ie_len; void* ie; } ;
typedef enum nl80211_mfp { ____Placeholder_nl80211_mfp } nl80211_mfp ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct TYPE_3__ {int assoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct ieee80211_channel*,int const*,int const*,int,struct cfg80211_assoc_request*) ;
 struct ieee80211_channel* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (struct net_device*,struct genl_info*,int *,int) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 void* FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_21, struct genl_info *VAR_22)
{
 struct cfg80211_registered_device *VAR_23 = VAR_22->user_ptr[0];
 struct net_device *VAR_24 = VAR_22->user_ptr[1];
 struct ieee80211_channel *VAR_25;
 struct cfg80211_assoc_request VAR_26 = {};
 const u8 *VAR_27, *VAR_28;
 int VAR_29, VAR_30 = 0;

 if (!FUNC_2(VAR_22->attrs[VAR_9]))
  return -VAR_2;

 if (!VAR_22->attrs[VAR_10] ||
     !VAR_22->attrs[VAR_12] ||
     !VAR_22->attrs[VAR_16])
  return -VAR_2;

 if (!VAR_23->ops->assoc)
  return -VAR_3;

 if (VAR_24->ieee80211_ptr->iftype != VAR_18 &&
     VAR_24->ieee80211_ptr->iftype != VAR_17)
  return -VAR_3;

 VAR_27 = FUNC_5(VAR_22->attrs[VAR_10]);

 VAR_25 = FUNC_1(&VAR_23->wiphy,
  FUNC_7(VAR_22->attrs[VAR_16]));
 if (!VAR_25 || (VAR_25->flags & VAR_4))
  return -VAR_2;

 VAR_28 = FUNC_5(VAR_22->attrs[VAR_12]);
 VAR_30 = FUNC_8(VAR_22->attrs[VAR_12]);

 if (VAR_22->attrs[VAR_9]) {
  VAR_26.ie = FUNC_5(VAR_22->attrs[VAR_9]);
  VAR_26.ie_len = FUNC_8(VAR_22->attrs[VAR_9]);
 }

 if (VAR_22->attrs[VAR_13]) {
  enum nl80211_mfp VAR_31 =
   FUNC_7(VAR_22->attrs[VAR_13]);
  if (VAR_31 == VAR_20)
   VAR_26.use_mfp = 1;
  else if (VAR_31 != VAR_19)
   return -VAR_2;
 }

 if (VAR_22->attrs[VAR_11])
  VAR_26.prev_bssid = FUNC_5(VAR_22->attrs[VAR_11]);

 if (FUNC_6(VAR_22->attrs[VAR_5]))
  VAR_26.flags |= VAR_0;

 if (VAR_22->attrs[VAR_8])
  FUNC_3(&VAR_26.ht_capa_mask,
         FUNC_5(VAR_22->attrs[VAR_8]),
         sizeof(VAR_26.ht_capa_mask));

 if (VAR_22->attrs[VAR_7]) {
  if (!VAR_22->attrs[VAR_8])
   return -VAR_2;
  FUNC_3(&VAR_26.ht_capa,
         FUNC_5(VAR_22->attrs[VAR_7]),
         sizeof(VAR_26.ht_capa));
 }

 if (FUNC_6(VAR_22->attrs[VAR_6]))
  VAR_26.flags |= VAR_1;

 if (VAR_22->attrs[VAR_15])
  FUNC_3(&VAR_26.vht_capa_mask,
         FUNC_5(VAR_22->attrs[VAR_15]),
         sizeof(VAR_26.vht_capa_mask));

 if (VAR_22->attrs[VAR_14]) {
  if (!VAR_22->attrs[VAR_15])
   return -VAR_2;
  FUNC_3(&VAR_26.vht_capa,
         FUNC_5(VAR_22->attrs[VAR_14]),
         sizeof(VAR_26.vht_capa));
 }

 VAR_29 = FUNC_4(VAR_23, VAR_22, &VAR_26.crypto, 1);
 if (!VAR_29)
  VAR_29 = FUNC_0(VAR_23, VAR_24, VAR_25, VAR_27,
       VAR_28, VAR_30, &VAR_26);

 return VAR_29;
}
