
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int rx_nss; int bandwidth; } ;
struct sta_info {TYPE_3__ sta; int cur_max_bandwidth; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sta_info*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,int) ;

void FUNC_2(struct ieee80211_sub_if_data *VAR_9,
     struct sta_info *VAR_10, u8 VAR_11,
     enum ieee80211_band VAR_12, bool VAR_13)
{
 struct ieee80211_local *VAR_14 = VAR_9->local;
 struct ieee80211_supported_band *VAR_15;
 enum ieee80211_sta_rx_bandwidth VAR_16;
 u32 VAR_17 = 0;
 u8 VAR_18;

 VAR_15 = VAR_14->hw.wiphy->bands[VAR_12];


 if (VAR_11 & VAR_3)
  return;

 VAR_18 = VAR_11 & VAR_1;
 VAR_18 >>= VAR_2;
 VAR_18 += 1;

 if (VAR_10->sta.rx_nss != VAR_18) {
  VAR_10->sta.rx_nss = VAR_18;
  VAR_17 |= VAR_4;
 }

 if (VAR_13)
  goto change;

 switch (VAR_11 & VAR_0) {
 case 130:
  VAR_10->cur_max_bandwidth = VAR_6;
  break;
 case 129:
  VAR_10->cur_max_bandwidth = VAR_7;
  break;
 case 128:
  VAR_10->cur_max_bandwidth = VAR_8;
  break;
 case 131:
  VAR_10->cur_max_bandwidth = VAR_5;
  break;
 }

 VAR_16 = FUNC_0(VAR_10);
 if (VAR_16 != VAR_10->sta.bandwidth) {
  VAR_10->sta.bandwidth = VAR_16;
  VAR_17 |= VAR_4;
 }

 change:
 if (VAR_17)
  FUNC_1(VAR_14, VAR_15, VAR_10, VAR_17);
}
