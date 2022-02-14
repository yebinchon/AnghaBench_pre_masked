
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct key_params {int cipher; int seq; int seq_len; int key; int key_len; } ;
struct TYPE_8__ {int security; } ;
struct TYPE_7__ {int mfp; } ;
struct TYPE_9__ {TYPE_2__ mesh; TYPE_1__ mgd; } ;
struct TYPE_12__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_5__* local; TYPE_3__ u; TYPE_6__ vif; } ;
struct TYPE_10__ {int flags; } ;
struct ieee80211_key {TYPE_4__ conf; struct sta_info* sta; } ;
struct TYPE_11__ {int sta_mtx; struct ieee80211_key* wep_tx_tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct ieee80211_key*) ;
 int FUNC_2 (struct ieee80211_key*) ;
 int FUNC_3 (int) ;



 int VAR_7 ;
 int VAR_8 ;
 struct ieee80211_key* FUNC_4 (int,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ieee80211_key*) ;
 int FUNC_6 (struct ieee80211_key*,struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct sta_info* FUNC_11 (struct ieee80211_sub_if_data*,int const*) ;
 struct sta_info* FUNC_12 (struct ieee80211_sub_if_data*,int const*) ;
 scalar_t__ FUNC_13 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_14(struct wiphy *VAR_9, struct net_device *VAR_10,
        u8 VAR_11, bool VAR_12, const u8 *VAR_13,
        struct key_params *VAR_14)
{
 struct ieee80211_sub_if_data *VAR_15 = FUNC_0(VAR_10);
 struct sta_info *VAR_16 = ((void*)0);
 struct ieee80211_key *VAR_17;
 int VAR_18;

 if (!FUNC_7(VAR_15))
  return -VAR_1;


 switch (VAR_14->cipher) {
 case 128:
 case 130:
 case 129:
  if (FUNC_1(VAR_15->local->wep_tx_tfm))
   return -VAR_0;
  break;
 default:
  break;
 }

 VAR_17 = FUNC_4(VAR_14->cipher, VAR_11, VAR_14->key_len,
      VAR_14->key, VAR_14->seq_len, VAR_14->seq);
 if (FUNC_1(VAR_17))
  return FUNC_2(VAR_17);

 if (VAR_12)
  VAR_17->conf.flags |= VAR_3;

 FUNC_9(&VAR_15->local->sta_mtx);

 if (VAR_13) {
  if (FUNC_8(&VAR_15->vif))
   VAR_16 = FUNC_11(VAR_15, VAR_13);
  else
   VAR_16 = FUNC_12(VAR_15, VAR_13);
  if (!VAR_16 || !FUNC_13(VAR_16, VAR_7)) {
   FUNC_5(VAR_17);
   VAR_18 = -VAR_2;
   goto out_unlock;
  }
 }

 switch (VAR_15->vif.type) {
 case 134:
  if (VAR_15->u.mgd.mfp != VAR_6)
   VAR_17->conf.flags |= VAR_4;
  break;
 case 141:
 case 140:

  if (VAR_17->sta && FUNC_13(VAR_17->sta, VAR_8))
   VAR_17->conf.flags |= VAR_4;
  break;
 case 142:

  break;
 case 139:





 case 132:
 case 138:
 case 136:
 case 133:
 case 131:
 case 137:
 case 135:

  FUNC_3(1);
  break;
 }

 VAR_18 = FUNC_6(VAR_17, VAR_15, VAR_16);

 out_unlock:
 FUNC_10(&VAR_15->local->sta_mtx);

 return VAR_18;
}
