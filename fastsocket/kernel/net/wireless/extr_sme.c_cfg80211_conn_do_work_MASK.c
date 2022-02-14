
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int netdev; TYPE_2__* conn; int wiphy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_connect_params {int bssid; int ssid_len; int ssid; int channel; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int flags; int crypto; int mfp; int ie_len; int ie; int key_idx; int key_len; int key; int auth_type; } ;
struct cfg80211_assoc_request {int use_mfp; int vht_capa_mask; int vht_capa; int ht_capa_mask; int ht_capa; int flags; int crypto; int ie_len; int ie; int prev_bssid; } ;
struct TYPE_4__ {int state; int prev_bssid; int prev_bssid_valid; struct cfg80211_connect_params params; } ;
struct TYPE_3__ {int assoc; int auth; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int) ;

 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cfg80211_registered_device*,int ,int ,int ,int ,int ,struct cfg80211_assoc_request*) ;
 int FUNC_3 (struct cfg80211_registered_device*,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ,int ,int *,int ) ;
 int FUNC_4 (struct cfg80211_registered_device*,int ,int ,int *,int ,int ,int) ;
 int FUNC_5 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct wireless_dev *VAR_5)
{
 struct cfg80211_registered_device *VAR_6 = FUNC_6(VAR_5->wiphy);
 struct cfg80211_connect_params *VAR_7;
 struct cfg80211_assoc_request VAR_8 = {};
 int VAR_9;

 FUNC_0(VAR_5);

 if (!VAR_5->conn)
  return 0;

 VAR_7 = &VAR_5->conn->params;

 switch (VAR_5->conn->state) {
 case 128:
  return FUNC_5(VAR_5);
 case 130:
  FUNC_1(!VAR_6->ops->auth);
  VAR_5->conn->state = VAR_1;
  return FUNC_3(VAR_6, VAR_5->netdev,
         VAR_7->channel, VAR_7->auth_type,
         VAR_7->bssid,
         VAR_7->ssid, VAR_7->ssid_len,
         ((void*)0), 0,
         VAR_7->key, VAR_7->key_len,
         VAR_7->key_idx, ((void*)0), 0);
 case 131:
  FUNC_1(!VAR_6->ops->assoc);
  VAR_5->conn->state = VAR_0;
  if (VAR_5->conn->prev_bssid_valid)
   VAR_8.prev_bssid = VAR_5->conn->prev_bssid;
  VAR_8.ie = VAR_7->ie;
  VAR_8.ie_len = VAR_7->ie_len;
  VAR_8.use_mfp = VAR_7->mfp != VAR_3;
  VAR_8.crypto = VAR_7->crypto;
  VAR_8.flags = VAR_7->flags;
  VAR_8.ht_capa = VAR_7->ht_capa;
  VAR_8.ht_capa_mask = VAR_7->ht_capa_mask;
  VAR_8.vht_capa = VAR_7->vht_capa;
  VAR_8.vht_capa_mask = VAR_7->vht_capa_mask;

  VAR_9 = FUNC_2(VAR_6, VAR_5->netdev, VAR_7->channel,
         VAR_7->bssid, VAR_7->ssid,
         VAR_7->ssid_len, &VAR_8);
  if (VAR_9)
   FUNC_4(VAR_6, VAR_5->netdev, VAR_7->bssid,
            ((void*)0), 0,
            VAR_4,
            0);
  return VAR_9;
 case 129:
  FUNC_4(VAR_6, VAR_5->netdev, VAR_7->bssid,
           ((void*)0), 0,
           VAR_4, 0);

  return -VAR_2;
 default:
  return 0;
 }
}
