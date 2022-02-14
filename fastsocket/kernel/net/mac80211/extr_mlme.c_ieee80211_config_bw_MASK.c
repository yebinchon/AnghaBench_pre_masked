
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_13__ {int bandwidth; } ;
struct sta_info {int cur_max_bandwidth; TYPE_5__ sta; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_16__ {struct ieee80211_channel* chan; } ;
struct TYPE_14__ {scalar_t__ ht_operation_mode; TYPE_8__ chandef; } ;
struct TYPE_15__ {TYPE_6__ bss_conf; } ;
struct ieee80211_if_managed {int flags; int bssid; } ;
struct TYPE_9__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_11__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct ieee80211_ht_operation {int operation_mode; } ;
struct ieee80211_channel {size_t band; } ;
struct cfg80211_chan_def {int width; int center_freq2; int center_freq1; TYPE_4__* chan; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
struct TYPE_12__ {int center_freq; } ;
struct TYPE_10__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cfg80211_chan_def*,TYPE_8__*) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (struct cfg80211_chan_def*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,struct ieee80211_channel*,struct ieee80211_ht_operation const*,struct ieee80211_vht_operation const*,struct cfg80211_chan_def*,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct cfg80211_chan_def*,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int ,...) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_sub_if_data *VAR_12,
          struct sta_info *VAR_13,
          const struct ieee80211_ht_operation *VAR_14,
          const struct ieee80211_vht_operation *VAR_15,
          const u8 *VAR_16, u32 *VAR_17)
{
 struct ieee80211_local *VAR_18 = VAR_12->local;
 struct ieee80211_if_managed *VAR_19 = &VAR_12->u.mgd;
 struct ieee80211_supported_band *VAR_20;
 struct ieee80211_channel *VAR_21;
 struct cfg80211_chan_def VAR_22;
 u16 VAR_23;
 u32 VAR_24;
 enum ieee80211_sta_rx_bandwidth VAR_25;
 int VAR_26;


 if (VAR_19->flags & VAR_6 || !VAR_14)
  return 0;


 if (VAR_19->flags & VAR_7)
  VAR_15 = ((void*)0);

 if (FUNC_0(!VAR_13))
  return -VAR_1;

 VAR_21 = VAR_12->vif.bss_conf.chandef.chan;
 VAR_20 = VAR_18->hw.wiphy->bands[VAR_21->band];


 VAR_24 = FUNC_4(VAR_12, VAR_20, VAR_21, VAR_14,
          VAR_15, &VAR_22, 1);
 if (VAR_19->flags & VAR_5 &&
     VAR_22.width == 128)
  VAR_24 |= FUNC_3(&VAR_22);
 if (VAR_19->flags & VAR_3 &&
     VAR_22.width == 133)
  VAR_24 |= FUNC_3(&VAR_22);
 if (VAR_19->flags & VAR_4 &&
     VAR_22.width > 132)
  VAR_24 |= FUNC_3(&VAR_22);

 if (FUNC_1(&VAR_22, &VAR_12->vif.bss_conf.chandef))
  return 0;

 FUNC_8(VAR_12,
     "AP %pM changed bandwidth, new config is %d MHz, width %d (%d/%d MHz)\n",
     VAR_19->bssid, VAR_22.chan->center_freq, VAR_22.width,
     VAR_22.center_freq1, VAR_22.center_freq2);

 if (VAR_24 != (VAR_19->flags & (VAR_6 |
          VAR_7 |
          VAR_4 |
          VAR_5 |
          VAR_3)) ||
     !FUNC_2(&VAR_22)) {
  FUNC_8(VAR_12,
      "AP %pM changed bandwidth in a way we can't support - disconnect\n",
      VAR_19->bssid);
  return -VAR_1;
 }

 switch (VAR_22.width) {
 case 131:
 case 132:
  VAR_25 = VAR_9;
  break;
 case 130:
  VAR_25 = VAR_10;
  break;
 case 129:
  VAR_25 = VAR_11;
  break;
 case 128:
 case 133:
  VAR_25 = VAR_8;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_25 > VAR_13->cur_max_bandwidth)
  VAR_25 = VAR_13->cur_max_bandwidth;

 if (VAR_25 < VAR_13->sta.bandwidth) {
  VAR_13->sta.bandwidth = VAR_25;
  FUNC_7(VAR_18, VAR_20, VAR_13,
      VAR_2);
 }

 VAR_26 = FUNC_5(VAR_12, &VAR_22, VAR_17);
 if (VAR_26) {
  FUNC_8(VAR_12,
      "AP %pM changed bandwidth to incompatible one - disconnect\n",
      VAR_19->bssid);
  return VAR_26;
 }

 if (VAR_25 > VAR_13->sta.bandwidth) {
  VAR_13->sta.bandwidth = VAR_25;
  FUNC_7(VAR_18, VAR_20, VAR_13,
      VAR_2);
 }

 VAR_23 = FUNC_6(VAR_14->operation_mode);


 if (VAR_12->vif.bss_conf.ht_operation_mode != VAR_23) {
  *VAR_17 |= VAR_0;
  VAR_12->vif.bss_conf.ht_operation_mode = VAR_23;
 }

 return 0;
}
