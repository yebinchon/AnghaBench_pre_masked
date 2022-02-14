
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
struct TYPE_12__ {int bandwidth; int smps_mode; int ht_cap; } ;
struct sta_info {TYPE_6__ sta; void* cur_max_bandwidth; } ;
struct TYPE_8__ {int tx_params; int* rx_mask; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; int ampdu_factor; int ampdu_density; TYPE_2__ mcs; } ;
struct ieee80211_supported_band {struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_9__ {int width; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; } ;
struct TYPE_7__ {int tx_params; int* rx_mask; } ;
struct ieee80211_ht_cap {int ampdu_params_info; TYPE_1__ mcs; int cap_info; } ;
typedef int ht_cap ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;






 scalar_t__ VAR_25 ;
 int FUNC_0 (int) ;




 int VAR_26 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_sta_ht_cap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct ieee80211_sta_ht_cap*,int) ;
 int FUNC_4 (int *,struct ieee80211_sta_ht_cap*,int) ;
 int FUNC_5 (struct ieee80211_sta_ht_cap*,int ,int) ;
 int FUNC_6 (struct sta_info*,int ) ;

bool FUNC_7(struct ieee80211_sub_if_data *VAR_27,
           struct ieee80211_supported_band *VAR_28,
           const struct ieee80211_ht_cap *VAR_29,
           struct sta_info *VAR_30)
{
 struct ieee80211_sta_ht_cap VAR_31, VAR_32;
 u8 VAR_33, VAR_34;
 int VAR_35, VAR_36;
 bool VAR_37;
 enum ieee80211_sta_rx_bandwidth VAR_38;
 enum ieee80211_smps_mode VAR_39;

 FUNC_5(&VAR_31, 0, sizeof(VAR_31));

 if (!VAR_29 || !VAR_28->ht_cap.ht_supported)
  goto apply;

 VAR_31.ht_supported = 1;

 VAR_32 = VAR_28->ht_cap;







 if (VAR_27->vif.type == VAR_25 &&
     !FUNC_6(VAR_30, VAR_26))
  FUNC_1(VAR_27, &VAR_32);







 VAR_31.cap = FUNC_2(VAR_29->cap_info) &
  (VAR_32.cap | ~(VAR_4 |
     VAR_10 |
     VAR_3 |
     VAR_6 |
     VAR_7 |
     VAR_2));





 if (!(VAR_32.cap & VAR_11))
  VAR_31.cap &= ~VAR_5;
 if (!(VAR_32.cap & VAR_5))
  VAR_31.cap &= ~VAR_11;

 VAR_33 = VAR_29->ampdu_params_info;
 VAR_31.ampdu_factor =
  VAR_33 & VAR_1;
 VAR_31.ampdu_density =
  (VAR_33 & VAR_0) >> 2;


 VAR_34 = VAR_32.mcs.tx_params;


 VAR_31.mcs.tx_params = VAR_29->mcs.tx_params;


 if (!(VAR_34 & VAR_13))
  goto apply;


 if (VAR_34 & VAR_17)
  VAR_36 =
   ((VAR_34 & VAR_15)
    >> VAR_16) + 1;
 else
  VAR_36 = VAR_14;
 for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++)
  VAR_31.mcs.rx_mask[VAR_35] =
   VAR_32.mcs.rx_mask[VAR_35] & VAR_29->mcs.rx_mask[VAR_35];

 if (VAR_34 & VAR_18)
  for (VAR_35 = VAR_19;
       VAR_35 < VAR_12; VAR_35++)
   VAR_31.mcs.rx_mask[VAR_35] =
    VAR_32.mcs.rx_mask[VAR_35] &
     VAR_29->mcs.rx_mask[VAR_35];


 if (VAR_32.mcs.rx_mask[32/8] & VAR_29->mcs.rx_mask[32/8] & 1)
  VAR_31.mcs.rx_mask[32/8] |= 1;

 apply:
 VAR_37 = FUNC_3(&VAR_30->sta.ht_cap, &VAR_31, sizeof(VAR_31));

 FUNC_4(&VAR_30->sta.ht_cap, &VAR_31, sizeof(VAR_31));

 switch (VAR_27->vif.bss_conf.chandef.width) {
 default:
  FUNC_0(1);

 case 135:
 case 136:
  VAR_38 = VAR_23;
  break;
 case 134:
 case 133:
 case 132:
 case 137:
  VAR_38 = VAR_31.cap & VAR_10 ?
    VAR_24 : VAR_23;
  break;
 }

 if (VAR_38 != VAR_30->sta.bandwidth)
  VAR_37 = 1;
 VAR_30->sta.bandwidth = VAR_38;

 VAR_30->cur_max_bandwidth =
  VAR_31.cap & VAR_10 ?
    VAR_24 : VAR_23;

 switch ((VAR_31.cap & VAR_8)
   >> VAR_9) {
 case 129:
 case 128:
  VAR_39 = VAR_22;
  break;
 case 130:
  VAR_39 = VAR_20;
  break;
 case 131:
  VAR_39 = VAR_21;
  break;
 }

 if (VAR_39 != VAR_30->sta.smps_mode)
  VAR_37 = 1;
 VAR_30->sta.smps_mode = VAR_39;

 return VAR_37;
}
