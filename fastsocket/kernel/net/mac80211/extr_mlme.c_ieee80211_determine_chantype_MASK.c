
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ieee80211_vht_operation {int chan_width; int center_freq_seg2_idx; int center_freq_seg1_idx; } ;
struct TYPE_8__ {int vht_supported; } ;
struct TYPE_7__ {int cap; int ht_supported; } ;
struct ieee80211_supported_band {TYPE_3__ vht_cap; TYPE_2__ ht_cap; } ;
struct ieee80211_if_managed {scalar_t__ flags; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__* local; TYPE_1__ u; } ;
struct ieee80211_ht_operation {int ht_param; int primary_chan; } ;
struct ieee80211_channel {scalar_t__ center_freq; int band; } ;
struct cfg80211_chan_def {scalar_t__ width; scalar_t__ center_freq1; void* center_freq2; struct ieee80211_channel* chan; } ;
struct TYPE_9__ {int wiphy; } ;
struct TYPE_10__ {TYPE_4__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;




 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_3 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int ,struct cfg80211_chan_def*,int ) ;
 int FUNC_5 (struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_6 (struct cfg80211_chan_def*) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,...) ;

__attribute__((used)) static u32
FUNC_9(struct ieee80211_sub_if_data *VAR_12,
        struct ieee80211_supported_band *VAR_13,
        struct ieee80211_channel *VAR_14,
        const struct ieee80211_ht_operation *VAR_15,
        const struct ieee80211_vht_operation *VAR_16,
        struct cfg80211_chan_def *VAR_17, bool VAR_18)
{
 struct ieee80211_if_managed *VAR_19 = &VAR_12->u.mgd;
 struct cfg80211_chan_def VAR_20;
 u32 VAR_21, VAR_22;

 VAR_17->chan = VAR_14;
 VAR_17->width = VAR_8;
 VAR_17->center_freq1 = VAR_14->center_freq;
 VAR_17->center_freq2 = 0;

 if (!VAR_15 || !VAR_13->ht_cap.ht_supported) {
  VAR_22 = VAR_4 | VAR_5;
  goto out;
 }

 VAR_17->width = VAR_7;

 VAR_21 = FUNC_7(VAR_15->primary_chan,
        VAR_14->band);

 if (!VAR_18 && VAR_14->center_freq != VAR_21) {







  FUNC_8(VAR_12,
      "Wrong control channel: center-freq: %d ht-cfreq: %d ht->primary_chan: %d band: %d - Disabling HT\n",
      VAR_14->center_freq, VAR_21,
      VAR_15->primary_chan, VAR_14->band);
  VAR_22 = VAR_4 | VAR_5;
  goto out;
 }


 if (VAR_13->ht_cap.cap & VAR_1) {
  switch (VAR_15->ht_param & VAR_2) {
  case 133:
   VAR_17->width = VAR_9;
   VAR_17->center_freq1 += 10;
   break;
  case 132:
   VAR_17->width = VAR_9;
   VAR_17->center_freq1 -= 10;
   break;
  }
 } else {

  VAR_22 = VAR_5;

  VAR_22 |= VAR_3;
  goto out;
 }

 if (!VAR_16 || !VAR_13->vht_cap.vht_supported) {
  VAR_22 = VAR_5;
  goto out;
 }

 VAR_20.chan = VAR_14;
 VAR_20.center_freq1 =
  FUNC_7(VAR_16->center_freq_seg1_idx,
            VAR_14->band);
 VAR_20.center_freq2 = 0;

 switch (VAR_16->chan_width) {
 case 128:
  VAR_20.width = VAR_17->width;
  break;
 case 130:
  VAR_20.width = VAR_10;
  break;
 case 131:
  VAR_20.width = VAR_6;
  break;
 case 129:
  VAR_20.width = VAR_11;
  VAR_20.center_freq2 =
   FUNC_7(
    VAR_16->center_freq_seg2_idx,
    VAR_14->band);
  break;
 default:
  if (!(VAR_19->flags & VAR_5))
   FUNC_8(VAR_12,
       "AP VHT operation IE has invalid channel width (%d), disable VHT\n",
       VAR_16->chan_width);
  VAR_22 = VAR_5;
  goto out;
 }

 if (!FUNC_5(&VAR_20)) {
  if (!(VAR_19->flags & VAR_5))
   FUNC_8(VAR_12,
       "AP VHT information is invalid, disable VHT\n");
  VAR_22 = VAR_5;
  goto out;
 }

 if (FUNC_3(VAR_17, &VAR_20)) {
  VAR_22 = 0;
  goto out;
 }

 if (!FUNC_2(VAR_17, &VAR_20)) {
  if (!(VAR_19->flags & VAR_5))
   FUNC_8(VAR_12,
       "AP VHT information doesn't match HT, disable VHT\n");
  VAR_22 = VAR_5;
  goto out;
 }

 *VAR_17 = VAR_20;

 VAR_22 = 0;

out:

 if (VAR_22 & VAR_5)
  VAR_20 = *VAR_17;
 while (!FUNC_4(VAR_12->local->hw.wiphy, VAR_17,
     VAR_18 ? 0 :
         VAR_0)) {
  if (FUNC_0(VAR_17->width == VAR_8)) {
   VAR_22 = VAR_4 |
         VAR_5;
   break;
  }

  VAR_22 |= FUNC_6(VAR_17);
 }

 if (VAR_17->width != VAR_20.width && !VAR_18)
  FUNC_8(VAR_12,
      "capabilities/regulatory prevented using AP HT/VHT configuration, downgraded\n");

 FUNC_1(!FUNC_5(VAR_17));
 return VAR_22;
}
