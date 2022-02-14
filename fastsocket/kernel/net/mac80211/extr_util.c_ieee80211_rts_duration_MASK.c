
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {size_t rts_cts_rate_idx; } ;
struct ieee80211_tx_info {size_t band; TYPE_3__ control; } ;
struct ieee80211_supported_band {int band; struct ieee80211_rate* bitrates; } ;
struct TYPE_9__ {int use_short_preamble; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_5__ vif; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
struct TYPE_7__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
struct TYPE_6__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int,int) ;
 struct ieee80211_sub_if_data* FUNC_3 (struct ieee80211_vif*) ;

__le16 FUNC_4(struct ieee80211_hw *VAR_2,
         struct ieee80211_vif *VAR_3, size_t VAR_4,
         const struct ieee80211_tx_info *VAR_5)
{
 struct ieee80211_local *VAR_6 = FUNC_1(VAR_2);
 struct ieee80211_rate *VAR_7;
 struct ieee80211_sub_if_data *VAR_8;
 bool VAR_9;
 int VAR_10;
 u16 VAR_11;
 struct ieee80211_supported_band *VAR_12;

 VAR_12 = VAR_6->hw.wiphy->bands[VAR_5->band];

 VAR_9 = 0;

 VAR_7 = &VAR_12->bitrates[VAR_5->control.rts_cts_rate_idx];

 VAR_10 = 0;
 if (VAR_3) {
  VAR_8 = FUNC_3(VAR_3);
  VAR_9 = VAR_8->vif.bss_conf.use_short_preamble;
  if (VAR_8->flags & VAR_1)
   VAR_10 = VAR_7->flags & VAR_0;
 }


 VAR_11 = FUNC_2(VAR_12->band, 10, VAR_7->bitrate,
           VAR_10, VAR_9);

 VAR_11 += FUNC_2(VAR_12->band, VAR_4, VAR_7->bitrate,
     VAR_10, VAR_9);

 VAR_11 += FUNC_2(VAR_12->band, 10, VAR_7->bitrate,
     VAR_10, VAR_9);

 return FUNC_0(VAR_11);
}
