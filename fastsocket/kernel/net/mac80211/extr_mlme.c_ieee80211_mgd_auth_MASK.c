
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ieee80211_if_managed {int mtx; struct ieee80211_mgd_auth_data* auth_data; int bssid; scalar_t__ associated; scalar_t__ assoc_data; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int dev; TYPE_1__ u; struct ieee80211_local* local; } ;
struct ieee80211_mgd_auth_data {size_t data_len; int key_len; TYPE_3__* bss; int done; int algorithm; int * key; int key_idx; int * data; void* sae_status; void* sae_trans; } ;
struct TYPE_6__ {int wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; int wep_tx_tfm; } ;
struct cfg80211_auth_request {int auth_type; int sae_data_len; int ie_len; int key_len; TYPE_3__* bss; scalar_t__ key; int key_idx; scalar_t__ ie; scalar_t__ sae_data; } ;
typedef int frame_buf ;
typedef int __le16 ;
struct TYPE_7__ {int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,TYPE_3__*,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_8 (struct ieee80211_mgd_auth_data*) ;
 struct ieee80211_mgd_auth_data* FUNC_9 (int,int ) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int *,scalar_t__,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*,int ) ;
 int FUNC_16 (struct ieee80211_sub_if_data*,int ) ;

int FUNC_17(struct ieee80211_sub_if_data *VAR_14,
         struct cfg80211_auth_request *VAR_15)
{
 struct ieee80211_local *VAR_16 = VAR_14->local;
 struct ieee80211_if_managed *VAR_17 = &VAR_14->u.mgd;
 struct ieee80211_mgd_auth_data *VAR_18;
 u16 VAR_19;
 int VAR_20;



 switch (VAR_15->auth_type) {
 case 130:
  VAR_19 = VAR_10;
  break;
 case 128:
  if (FUNC_0(VAR_16->wep_tx_tfm))
   return -VAR_3;
  VAR_19 = VAR_12;
  break;
 case 132:
  VAR_19 = VAR_8;
  break;
 case 131:
  VAR_19 = VAR_9;
  break;
 case 129:
  VAR_19 = VAR_11;
  break;
 default:
  return -VAR_3;
 }

 VAR_18 = FUNC_9(sizeof(*VAR_18) + VAR_15->sae_data_len +
       VAR_15->ie_len, VAR_5);
 if (!VAR_18)
  return -VAR_2;

 VAR_18->bss = VAR_15->bss;

 if (VAR_15->sae_data_len >= 4) {
  __le16 *VAR_21 = (__le16 *) VAR_15->sae_data;
  VAR_18->sae_trans = FUNC_10(VAR_21[0]);
  VAR_18->sae_status = FUNC_10(VAR_21[1]);
  FUNC_11(VAR_18->data, VAR_15->sae_data + 4,
         VAR_15->sae_data_len - 4);
  VAR_18->data_len += VAR_15->sae_data_len - 4;
 }

 if (VAR_15->ie && VAR_15->ie_len) {
  FUNC_11(&VAR_18->data[VAR_18->data_len],
         VAR_15->ie, VAR_15->ie_len);
  VAR_18->data_len += VAR_15->ie_len;
 }

 if (VAR_15->key && VAR_15->key_len) {
  VAR_18->key_len = VAR_15->key_len;
  VAR_18->key_idx = VAR_15->key_idx;
  FUNC_11(VAR_18->key, VAR_15->key, VAR_15->key_len);
 }

 VAR_18->algorithm = VAR_19;



 FUNC_13(&VAR_17->mtx);

 if ((VAR_17->auth_data && !VAR_17->auth_data->done) ||
     VAR_17->assoc_data) {
  VAR_20 = -VAR_1;
  goto err_free;
 }

 if (VAR_17->auth_data)
  FUNC_4(VAR_14, 0);


 VAR_17->auth_data = VAR_18;

 if (VAR_17->associated) {
  u8 VAR_22[VAR_6];

  FUNC_7(VAR_14, VAR_7,
           VAR_13,
           0, VAR_22);

  FUNC_1(VAR_14->dev, VAR_22,
           sizeof(VAR_22));
 }

 FUNC_15(VAR_14, "authenticate with %pM\n", VAR_15->bss->bssid);

 VAR_20 = FUNC_5(VAR_14, VAR_15->bss, 0);
 if (VAR_20)
  goto err_clear;

 VAR_20 = FUNC_6(VAR_14);
 if (VAR_20) {
  FUNC_16(VAR_14, VAR_15->bss->bssid);
  goto err_clear;
 }


 FUNC_2(VAR_16->hw.wiphy, VAR_18->bss);
 VAR_20 = 0;
 goto out_unlock;

 err_clear:
 FUNC_12(VAR_17->bssid, 0, VAR_4);
 FUNC_3(VAR_14, VAR_0);
 VAR_17->auth_data = ((void*)0);
 err_free:
 FUNC_8(VAR_18);
 out_unlock:
 FUNC_14(&VAR_17->mtx);

 return VAR_20;
}
