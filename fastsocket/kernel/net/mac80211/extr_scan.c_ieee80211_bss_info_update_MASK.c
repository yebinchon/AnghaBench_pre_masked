
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; scalar_t__ parse_error; scalar_t__ wmm_info; scalar_t__ wmm_param; int ext_supp_rates; int supp_rates; int * erp_info; } ;
struct ieee80211_rx_status {int signal; int device_timestamp; } ;
struct ieee80211_mgmt {int frame_control; } ;
struct TYPE_2__ {int flags; int max_signal; int wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
struct ieee80211_channel {int dummy; } ;
struct ieee80211_bss {int valid_data; int has_erp_value; int supp_rates_len; int wmm_used; int uapsd_supported; scalar_t__ supp_rates; int erp_value; int corrupt_data; int device_ts_presp; int device_ts_beacon; } ;
struct cfg80211_bss {scalar_t__ priv; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cfg80211_bss* FUNC_0 (int ,struct ieee80211_channel*,struct ieee80211_mgmt*,size_t,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee802_11_elems*) ;
 int FUNC_3 (scalar_t__,int ,int) ;

struct ieee80211_bss *
FUNC_4(struct ieee80211_local *VAR_9,
     struct ieee80211_rx_status *VAR_10,
     struct ieee80211_mgmt *VAR_11, size_t VAR_12,
     struct ieee802_11_elems *VAR_13,
     struct ieee80211_channel *VAR_14)
{
 bool VAR_15 = FUNC_1(VAR_11->frame_control);
 struct cfg80211_bss *VAR_16;
 struct ieee80211_bss *VAR_17;
 int VAR_18, VAR_19;
 s32 VAR_20 = 0;

 if (VAR_9->hw.flags & VAR_6)
  VAR_20 = VAR_10->signal * 100;
 else if (VAR_9->hw.flags & VAR_7)
  VAR_20 = (VAR_10->signal * 100) / VAR_9->hw.max_signal;

 VAR_16 = FUNC_0(VAR_9->hw.wiphy, VAR_14,
      VAR_11, VAR_12, VAR_20, VAR_0);
 if (!VAR_16)
  return ((void*)0);

 VAR_17 = (void *)VAR_16->priv;

 if (VAR_15)
  VAR_17->device_ts_beacon = VAR_10->device_timestamp;
 else
  VAR_17->device_ts_presp = VAR_10->device_timestamp;

 if (VAR_13->parse_error) {
  if (VAR_15)
   VAR_17->corrupt_data |= VAR_1;
  else
   VAR_17->corrupt_data |= VAR_2;
 } else {
  if (VAR_15)
   VAR_17->corrupt_data &= ~VAR_1;
  else
   VAR_17->corrupt_data &= ~VAR_2;
 }


 if (VAR_13->erp_info && (!VAR_13->parse_error ||
    !(VAR_17->valid_data & VAR_3))) {
  VAR_17->erp_value = VAR_13->erp_info[0];
  VAR_17->has_erp_value = 1;
  if (!VAR_13->parse_error)
   VAR_17->valid_data |= VAR_3;
 }


 if (!VAR_13->parse_error ||
     !(VAR_17->valid_data & VAR_4)) {
  VAR_19 = 0;
  if (VAR_13->supp_rates) {
   VAR_18 = VAR_8;
   if (VAR_18 > VAR_13->supp_rates_len)
    VAR_18 = VAR_13->supp_rates_len;
   FUNC_3(VAR_17->supp_rates, VAR_13->supp_rates, VAR_18);
   VAR_19 += VAR_18;
  }
  if (VAR_13->ext_supp_rates) {
   VAR_18 = VAR_8 - VAR_19;
   if (VAR_18 > VAR_13->ext_supp_rates_len)
    VAR_18 = VAR_13->ext_supp_rates_len;
   FUNC_3(VAR_17->supp_rates + VAR_19, VAR_13->ext_supp_rates,
          VAR_18);
   VAR_19 += VAR_18;
  }
  if (VAR_19) {
   VAR_17->supp_rates_len = VAR_19;
   if (!VAR_13->parse_error)
    VAR_17->valid_data |= VAR_4;
  }
 }

 if (!VAR_13->parse_error ||
     !(VAR_17->valid_data & VAR_5)) {
  VAR_17->wmm_used = VAR_13->wmm_param || VAR_13->wmm_info;
  VAR_17->uapsd_supported = FUNC_2(VAR_13);
  if (!VAR_13->parse_error)
   VAR_17->valid_data |= VAR_5;
 }

 return VAR_17;
}
