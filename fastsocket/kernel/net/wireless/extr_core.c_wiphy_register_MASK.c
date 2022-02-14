
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_8__ {int flags; } ;
struct wiphy {int interface_modes; int flags; struct ieee80211_supported_band** bands; TYPE_3__* addresses; int perm_addr; scalar_t__ max_acl_mac_addrs; int n_addresses; scalar_t__ ap_sme_capa; TYPE_1__ wowlan; } ;
struct regulatory_request {char* alpha2; int initiator; int wiphy_idx; } ;
struct TYPE_11__ {int cap; scalar_t__ ht_supported; } ;
struct ieee80211_supported_band {int band; int n_channels; int n_bitrates; TYPE_5__* channels; TYPE_4__ ht_cap; } ;
struct TYPE_13__ {scalar_t__ pattern_min_len; scalar_t__ pattern_max_len; scalar_t__ n_patterns; } ;
struct TYPE_14__ {int registered; int * debugfsdir; int dev; TYPE_6__ wowlan; } ;
struct cfg80211_registered_device {TYPE_7__ wiphy; int list; int rfkill; TYPE_2__* ops; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_12__ {int band; int max_power; int orig_mpwr; int orig_mag; int flags; int orig_flags; } ;
struct TYPE_10__ {int addr; } ;
struct TYPE_9__ {int set_mac_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wiphy*) ;
 int VAR_18 ;
 int FUNC_8 (struct wiphy*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct regulatory_request*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (struct wiphy*) ;
 int FUNC_22 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_23 (struct wiphy*) ;
 int FUNC_24 (struct wiphy*) ;

int FUNC_25(struct wiphy *VAR_19)
{
 struct cfg80211_registered_device *VAR_20 = FUNC_23(VAR_19);
 int VAR_21;
 enum ieee80211_band VAR_22;
 struct ieee80211_supported_band *VAR_23;
 bool VAR_24 = 0;
 int VAR_25;
 u16 VAR_26 = VAR_19->interface_modes;







 if (FUNC_1(VAR_19->ap_sme_capa &&
      !(VAR_19->flags & VAR_11)))
  return -VAR_0;

 if (FUNC_1(VAR_19->addresses && !VAR_19->n_addresses))
  return -VAR_0;

 if (FUNC_1(VAR_19->addresses &&
      !FUNC_9(VAR_19->perm_addr) &&
      FUNC_12(VAR_19->perm_addr, VAR_19->addresses[0].addr,
      VAR_1)))
  return -VAR_0;

 if (FUNC_1(VAR_19->max_acl_mac_addrs &&
      (!(VAR_19->flags & VAR_11) ||
       !VAR_20->ops->set_mac_acl)))
  return -VAR_0;

 if (VAR_19->addresses)
  FUNC_13(VAR_19->perm_addr, VAR_19->addresses[0].addr, VAR_1);


 FUNC_1(!VAR_26);
 VAR_26 &= ((1 << VAR_9) - 1) & ~1;
 if (FUNC_1(VAR_26 != VAR_19->interface_modes))
  VAR_19->interface_modes = VAR_26;

 VAR_21 = FUNC_24(VAR_19);
 if (VAR_21)
  return VAR_21;


 for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
  VAR_23 = VAR_19->bands[VAR_22];
  if (!VAR_23)
   continue;

  VAR_23->band = VAR_22;
  if (FUNC_1(!VAR_23->n_channels))
   return -VAR_0;




  if (FUNC_1(VAR_22 != VAR_3 &&
       !VAR_23->n_bitrates))
   return -VAR_0;






  if (VAR_14 &&
      VAR_22 == VAR_2 &&
      VAR_23->ht_cap.ht_supported) {
   VAR_23->ht_cap.cap &= ~VAR_5;
   VAR_23->ht_cap.cap &= ~VAR_4;
  }






  if (FUNC_1(VAR_23->n_bitrates > 32))
   return -VAR_0;

  for (VAR_25 = 0; VAR_25 < VAR_23->n_channels; VAR_25++) {
   VAR_23->channels[VAR_25].orig_flags =
    VAR_23->channels[VAR_25].flags;
   VAR_23->channels[VAR_25].orig_mag = VAR_7;
   VAR_23->channels[VAR_25].orig_mpwr =
    VAR_23->channels[VAR_25].max_power;
   VAR_23->channels[VAR_25].band = VAR_22;
  }

  VAR_24 = 1;
 }

 if (!VAR_24) {
  FUNC_1(1);
  return -VAR_0;
 }
 FUNC_8(VAR_19);

 FUNC_14(&VAR_15);

 VAR_21 = FUNC_5(&VAR_20->wiphy.dev);
 if (VAR_21) {
  FUNC_15(&VAR_15);
  return VAR_21;
 }


 FUNC_22(VAR_19);

 FUNC_10(&VAR_20->list, &VAR_16);
 VAR_17++;


 VAR_20->wiphy.debugfsdir =
  FUNC_3(FUNC_20(&VAR_20->wiphy),
       VAR_18);
 if (FUNC_0(VAR_20->wiphy.debugfsdir))
  VAR_20->wiphy.debugfsdir = ((void*)0);

 if (VAR_19->flags & VAR_10) {
  struct regulatory_request VAR_27;

  VAR_27.wiphy_idx = FUNC_7(VAR_19);
  VAR_27.initiator = VAR_8;
  VAR_27.alpha2[0] = '9';
  VAR_27.alpha2[1] = '9';

  FUNC_16(&VAR_27);
 }

 FUNC_2(VAR_20);
 FUNC_15(&VAR_15);





 VAR_21 = FUNC_17(VAR_20->rfkill);
 if (VAR_21) {
  FUNC_6(&VAR_20->wiphy.dev);

  FUNC_14(&VAR_15);
  FUNC_4(VAR_20->wiphy.debugfsdir);
  FUNC_11(&VAR_20->list);
  FUNC_21(VAR_19);
  FUNC_15(&VAR_15);
  return VAR_21;
 }

 FUNC_18();
 VAR_20->wiphy.registered = 1;
 FUNC_19();
 return 0;
}
