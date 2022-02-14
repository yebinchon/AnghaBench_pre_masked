
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ sme_state; TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_7__ {int vht_capa_mod_mask; int ht_capa_mod_mask; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; } ;
struct cfg80211_assoc_request {int bss; int vht_capa_mask; int ht_capa_mask; scalar_t__ prev_bssid; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct wireless_dev*,struct ieee80211_channel*,int ) ;
 int FUNC_2 (TYPE_3__*,struct ieee80211_channel*,int const*,int const*,int,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_assoc_request*) ;

int FUNC_8(struct cfg80211_registered_device *VAR_6,
     struct net_device *VAR_7,
     struct ieee80211_channel *VAR_8,
     const u8 *VAR_9,
     const u8 *VAR_10, int VAR_11,
     struct cfg80211_assoc_request *VAR_12)
{
 struct wireless_dev *VAR_13 = VAR_7->ieee80211_ptr;
 int VAR_14;
 bool VAR_15 = 0;

 FUNC_0(VAR_13);

 if (VAR_13->current_bss && VAR_12->prev_bssid &&
     FUNC_6(VAR_13->current_bss->pub.bssid, VAR_12->prev_bssid)) {




  if (VAR_13->sme_state == VAR_0) {
   VAR_15 = 1;
   VAR_13->sme_state = VAR_1;
  }
 } else if (VAR_13->current_bss)
  return -VAR_3;

 FUNC_3(&VAR_12->ht_capa_mask,
      VAR_6->wiphy.ht_capa_mod_mask);
 FUNC_4(&VAR_12->vht_capa_mask,
       VAR_6->wiphy.vht_capa_mod_mask);

 VAR_12->bss = FUNC_2(&VAR_6->wiphy, VAR_8, VAR_9, VAR_10, VAR_11,
        VAR_5, VAR_5);
 if (!VAR_12->bss) {
  if (VAR_15)
   VAR_13->sme_state = VAR_0;
  return -VAR_4;
 }

 VAR_14 = FUNC_1(VAR_6, VAR_13, VAR_8, VAR_2);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_7(VAR_6, VAR_7, VAR_12);

out:
 if (VAR_14) {
  if (VAR_15)
   VAR_13->sme_state = VAR_0;
  FUNC_5(&VAR_6->wiphy, VAR_12->bss);
 }

 return VAR_14;
}
