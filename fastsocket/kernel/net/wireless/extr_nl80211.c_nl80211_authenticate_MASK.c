
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int n_cipher_suites; scalar_t__* cipher_suites; } ;
struct net_device {TYPE_4__ wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_7__ {scalar_t__ key_len; scalar_t__ cipher; int * key; } ;
struct key_parse {int idx; int type; TYPE_3__ p; } ;
struct ieee80211_channel {int flags; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_4__ wiphy; TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;
struct TYPE_6__ {scalar_t__ iftype; } ;
struct TYPE_5__ {int auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct net_device*,struct net_device*,struct ieee80211_channel*,int,int const*,int const*,int,int const*,int,int *,scalar_t__,int,int const*,int) ;
 struct ieee80211_channel* FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct genl_info*,struct key_parse*) ;
 int FUNC_4 (struct net_device*,int,int ) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{
 struct cfg80211_registered_device *VAR_21 = VAR_20->user_ptr[0];
 struct net_device *VAR_22 = VAR_20->user_ptr[1];
 struct ieee80211_channel *VAR_23;
 const u8 *VAR_24, *VAR_25, *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
 int VAR_28, VAR_29, VAR_30 = 0, VAR_31 = 0;
 enum nl80211_auth_type VAR_32;
 struct key_parse VAR_33;
 bool VAR_34;

 if (!FUNC_2(VAR_20->attrs[VAR_4]))
  return -VAR_0;

 if (!VAR_20->attrs[VAR_6])
  return -VAR_0;

 if (!VAR_20->attrs[VAR_3])
  return -VAR_0;

 if (!VAR_20->attrs[VAR_8])
  return -VAR_0;

 if (!VAR_20->attrs[VAR_9])
  return -VAR_0;

 VAR_28 = FUNC_3(VAR_20, &VAR_33);
 if (VAR_28)
  return VAR_28;

 if (VAR_33.idx >= 0) {
  if (VAR_33.type != -1 && VAR_33.type != VAR_14)
   return -VAR_0;
  if (!VAR_33.p.key || !VAR_33.p.key_len)
   return -VAR_0;
  if ((VAR_33.p.cipher != VAR_16 ||
       VAR_33.p.key_len != VAR_18) &&
      (VAR_33.p.cipher != VAR_15 ||
       VAR_33.p.key_len != VAR_17))
   return -VAR_0;
  if (VAR_33.idx > 4)
   return -VAR_0;
 } else {
  VAR_33.p.key_len = 0;
  VAR_33.p.key = ((void*)0);
 }

 if (VAR_33.idx >= 0) {
  int VAR_35;
  bool VAR_36 = 0;
  for (VAR_35 = 0; VAR_35 < VAR_21->wiphy.n_cipher_suites; VAR_35++) {
   if (VAR_33.p.cipher == VAR_21->wiphy.cipher_suites[VAR_35]) {
    VAR_36 = 1;
    break;
   }
  }
  if (!VAR_36)
   return -VAR_0;
 }

 if (!VAR_21->ops->auth)
  return -VAR_1;

 if (VAR_22->ieee80211_ptr->iftype != VAR_13 &&
     VAR_22->ieee80211_ptr->iftype != VAR_12)
  return -VAR_1;

 VAR_24 = FUNC_5(VAR_20->attrs[VAR_6]);
 VAR_23 = FUNC_1(&VAR_21->wiphy,
  FUNC_6(VAR_20->attrs[VAR_9]));
 if (!VAR_23 || (VAR_23->flags & VAR_2))
  return -VAR_0;

 VAR_25 = FUNC_5(VAR_20->attrs[VAR_8]);
 VAR_29 = FUNC_7(VAR_20->attrs[VAR_8]);

 if (VAR_20->attrs[VAR_4]) {
  VAR_26 = FUNC_5(VAR_20->attrs[VAR_4]);
  VAR_30 = FUNC_7(VAR_20->attrs[VAR_4]);
 }

 VAR_32 = FUNC_6(VAR_20->attrs[VAR_3]);
 if (!FUNC_4(VAR_21, VAR_32, VAR_11))
  return -VAR_0;

 if (VAR_32 == VAR_10 &&
     !VAR_20->attrs[VAR_7])
  return -VAR_0;

 if (VAR_20->attrs[VAR_7]) {
  if (VAR_32 != VAR_10)
   return -VAR_0;
  VAR_27 = FUNC_5(VAR_20->attrs[VAR_7]);
  VAR_31 = FUNC_7(VAR_20->attrs[VAR_7]);

  if (VAR_31 < 4)
   return -VAR_0;
 }

 VAR_34 = !!VAR_20->attrs[VAR_5];





 if (VAR_34)
  return 0;

 return FUNC_0(VAR_21, VAR_22, VAR_23, VAR_32, VAR_24,
      VAR_25, VAR_29, VAR_26, VAR_30,
      VAR_33.p.key, VAR_33.p.key_len, VAR_33.idx,
      VAR_27, VAR_31);
}
