
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int privacy; } ;
struct TYPE_9__ {int default_key; int default_mgmt_key; TYPE_5__* keys; TYPE_3__ connect; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_4__ wext; scalar_t__ current_bss; int netdev; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct key_params {scalar_t__ cipher; int key; scalar_t__ key_len; } ;
struct TYPE_7__ {int flags; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct TYPE_10__ {int * data; struct key_params* params; } ;
struct TYPE_6__ {int set_default_mgmt_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct cfg80211_registered_device*,int ,int) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 scalar_t__ FUNC_2 (struct cfg80211_registered_device*,struct key_params*,int,int,int const*) ;
 TYPE_5__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*,int,int,int const*,struct key_params*) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int,int,int const*) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,int,int,int) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,int) ;

__attribute__((used)) static int FUNC_9(struct cfg80211_registered_device *VAR_12,
         struct net_device *VAR_13, bool VAR_14,
         const u8 *VAR_15, bool VAR_16, bool VAR_17,
         int VAR_18, struct key_params *VAR_19)
{
 struct wireless_dev *VAR_20 = VAR_13->ieee80211_ptr;
 int VAR_21, VAR_22;
 bool VAR_23 = 0;

 if (VAR_14 && !VAR_15)
  return -VAR_0;

 if (!VAR_20->wext.keys) {
  VAR_20->wext.keys = FUNC_3(sizeof(*VAR_20->wext.keys),
           VAR_5);
  if (!VAR_20->wext.keys)
   return -VAR_3;
  for (VAR_22 = 0; VAR_22 < 6; VAR_22++)
   VAR_20->wext.keys->params[VAR_22].key =
    VAR_20->wext.keys->data[VAR_22];
 }

 if (VAR_20->iftype != VAR_6 &&
     VAR_20->iftype != VAR_7)
  return -VAR_4;

 if (VAR_19->cipher == VAR_9) {
  if (!VAR_20->current_bss)
   return -VAR_2;

  if (!VAR_12->ops->set_default_mgmt_key)
   return -VAR_4;

  if (VAR_18 < 4 || VAR_18 > 5)
   return -VAR_0;
 } else if (VAR_18 < 0 || VAR_18 > 3)
  return -VAR_0;

 if (VAR_16) {
  VAR_21 = 0;
  if (VAR_20->current_bss) {




   if (VAR_18 == VAR_20->wext.default_key &&
       VAR_20->iftype == VAR_6) {
    FUNC_0(VAR_12, VAR_20->netdev, 1);
    VAR_23 = 1;
   }

   if (!VAR_14 && VAR_15 &&
       !(VAR_12->wiphy.flags & VAR_8))
    VAR_21 = -VAR_1;
   else
    VAR_21 = FUNC_6(VAR_12, VAR_13, VAR_18, VAR_14,
         VAR_15);
  }
  VAR_20->wext.connect.privacy = 0;




  if (VAR_21 == -VAR_1)
   VAR_21 = 0;
  if (!VAR_21) {
   if (!VAR_15) {
    VAR_20->wext.keys->params[VAR_18].key_len = 0;
    VAR_20->wext.keys->params[VAR_18].cipher = 0;
   }
   if (VAR_18 == VAR_20->wext.default_key)
    VAR_20->wext.default_key = -1;
   else if (VAR_18 == VAR_20->wext.default_mgmt_key)
    VAR_20->wext.default_mgmt_key = -1;
  }

  if (!VAR_21 && VAR_23)
   VAR_21 = FUNC_1(VAR_12, VAR_20);

  return VAR_21;
 }

 if (VAR_15)
  VAR_17 = 0;

 if (FUNC_2(VAR_12, VAR_19, VAR_18, VAR_14, VAR_15))
  return -VAR_0;

 VAR_21 = 0;
 if (VAR_20->current_bss)
  VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_18, VAR_14, VAR_15, VAR_19);
 if (VAR_21)
  return VAR_21;

 if (!VAR_15) {
  VAR_20->wext.keys->params[VAR_18] = *VAR_19;
  FUNC_4(VAR_20->wext.keys->data[VAR_18],
   VAR_19->key, VAR_19->key_len);
  VAR_20->wext.keys->params[VAR_18].key =
   VAR_20->wext.keys->data[VAR_18];
 }

 if ((VAR_19->cipher == VAR_11 ||
      VAR_19->cipher == VAR_10) &&
     (VAR_17 || (!VAR_15 && VAR_20->wext.default_key == -1))) {
  if (VAR_20->current_bss) {





   if (VAR_20->iftype == VAR_6 &&
       VAR_20->wext.default_key == -1) {
    FUNC_0(VAR_12, VAR_20->netdev, 1);
    VAR_23 = 1;
   }
   VAR_21 = FUNC_7(VAR_12, VAR_13, VAR_18, 1, 1);
  }
  if (!VAR_21) {
   VAR_20->wext.default_key = VAR_18;
   if (VAR_23)
    VAR_21 = FUNC_1(VAR_12, VAR_20);
  }
  return VAR_21;
 }

 if (VAR_19->cipher == VAR_9 &&
     (VAR_17 || (!VAR_15 && VAR_20->wext.default_mgmt_key == -1))) {
  if (VAR_20->current_bss)
   VAR_21 = FUNC_8(VAR_12, VAR_13, VAR_18);
  if (!VAR_21)
   VAR_20->wext.default_mgmt_key = VAR_18;
  return VAR_21;
 }

 return 0;
}
