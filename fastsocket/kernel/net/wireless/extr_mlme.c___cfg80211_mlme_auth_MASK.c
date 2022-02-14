
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_auth_request {int ie_len; int sae_data_len; int auth_type; int key_len; int key_idx; TYPE_3__* bss; int const* key; int const* sae_data; int const* ie; } ;
typedef int req ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;
struct TYPE_7__ {int channel; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,int ,int ) ;
 TYPE_3__* FUNC_2 (int *,struct ieee80211_channel*,int const*,int const*,int,int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 int FUNC_5 (struct cfg80211_auth_request*,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_auth_request*) ;

int FUNC_7(struct cfg80211_registered_device *VAR_6,
    struct net_device *VAR_7,
    struct ieee80211_channel *VAR_8,
    enum nl80211_auth_type VAR_9,
    const u8 *VAR_10,
    const u8 *VAR_11, int VAR_12,
    const u8 *VAR_13, int VAR_14,
    const u8 *VAR_15, int VAR_16, int VAR_17,
    const u8 *VAR_18, int VAR_19)
{
 struct wireless_dev *VAR_20 = VAR_7->ieee80211_ptr;
 struct cfg80211_auth_request VAR_21;
 int VAR_22;

 FUNC_0(VAR_20);

 if (VAR_9 == VAR_4)
  if (!VAR_15 || !VAR_16 || VAR_17 < 0 || VAR_17 > 4)
   return -VAR_2;

 if (VAR_20->current_bss &&
     FUNC_4(VAR_10, VAR_20->current_bss->pub.bssid))
  return -VAR_1;

 FUNC_5(&VAR_21, 0, sizeof(VAR_21));

 VAR_21.ie = VAR_13;
 VAR_21.ie_len = VAR_14;
 VAR_21.sae_data = VAR_18;
 VAR_21.sae_data_len = VAR_19;
 VAR_21.auth_type = VAR_9;
 VAR_21.bss = FUNC_2(&VAR_6->wiphy, VAR_8, VAR_10, VAR_11, VAR_12,
       VAR_5, VAR_5);
 VAR_21.key = VAR_15;
 VAR_21.key_len = VAR_16;
 VAR_21.key_idx = VAR_17;
 if (!VAR_21.bss)
  return -VAR_3;

 VAR_22 = FUNC_1(VAR_6, VAR_20, VAR_21.bss->channel,
        VAR_0);
 if (VAR_22)
  goto out;

 VAR_22 = FUNC_6(VAR_6, VAR_7, &VAR_21);

out:
 FUNC_3(&VAR_6->wiphy, VAR_21.bss);
 return VAR_22;
}
