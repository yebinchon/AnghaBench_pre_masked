
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct minstrel_priv {scalar_t__ has_mrr; } ;
struct minstrel_ht_sta {int overhead; int overhead_rtscts; int sample_count; int sample_wait; int sample_tries; int tx_flags; int sample_table; int r; TYPE_2__* groups; int avg_ampdu_len; int stats_update; struct ieee80211_sta* sta; } ;
struct minstrel_ht_sta_priv {int is_ht; struct minstrel_ht_sta legacy; int sample_table; int ratelist; struct minstrel_ht_sta ht; } ;
struct ieee80211_supported_band {int band; } ;
struct ieee80211_mcs_info {scalar_t__* rx_mask; } ;
struct TYPE_5__ {int cap; int ht_supported; struct ieee80211_mcs_info mcs; } ;
struct ieee80211_sta {scalar_t__ bandwidth; scalar_t__ smps_mode; TYPE_1__ ht_cap; } ;
struct TYPE_7__ {void (* rate_init ) (void*,struct ieee80211_supported_band*,struct ieee80211_sta*,struct minstrel_ht_sta*) ;} ;
struct TYPE_6__ {int flags; int streams; scalar_t__ supported; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int,int,int,int) ;
 int VAR_14 ;
 TYPE_3__ VAR_15 ;
 int FUNC_4 (struct minstrel_ht_sta*,int ,int) ;
 int FUNC_5 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_supported_band*,struct ieee80211_sta*) ;
 int FUNC_6 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_7 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 TYPE_2__* VAR_16 ;
 void FUNC_8 (void*,struct ieee80211_supported_band*,struct ieee80211_sta*,struct minstrel_ht_sta*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_17, struct ieee80211_supported_band *VAR_18,
                        struct ieee80211_sta *VAR_19, void *VAR_20)
{
 struct minstrel_priv *VAR_21 = VAR_17;
 struct minstrel_ht_sta_priv *VAR_22 = VAR_20;
 struct minstrel_ht_sta *VAR_23 = &VAR_22->ht;
 struct ieee80211_mcs_info *VAR_24 = &VAR_19->ht_cap.mcs;
 u16 VAR_25 = VAR_19->ht_cap.cap;
 int VAR_26 = 0;
 int VAR_27;
 int VAR_28;
 int VAR_29;


 if (!VAR_19->ht_cap.ht_supported)
  goto use_legacy;

 FUNC_1(FUNC_0(VAR_16) !=
  VAR_12 * VAR_13 + 1);

 VAR_22->is_ht = 1;
 FUNC_4(VAR_23, 0, sizeof(*VAR_23));

 VAR_23->sta = VAR_19;
 VAR_23->stats_update = VAR_14;

 VAR_27 = FUNC_3(VAR_18->band, 10, 60, 1, 1);
 VAR_23->overhead = FUNC_3(VAR_18->band, 0, 60, 1, 1) + VAR_27;
 VAR_23->overhead_rtscts = VAR_23->overhead + 2 * VAR_27;

 VAR_23->avg_ampdu_len = FUNC_2(1, 1);


 if (VAR_21->has_mrr) {
  VAR_23->sample_count = 16;
  VAR_23->sample_wait = 0;
 } else {
  VAR_23->sample_count = 8;
  VAR_23->sample_wait = 8;
 }
 VAR_23->sample_tries = 4;

 VAR_28 = (VAR_25 & VAR_1) >>
  VAR_2;
 VAR_23->tx_flags |= VAR_28 << VAR_8;

 if (VAR_25 & VAR_0)
  VAR_23->tx_flags |= VAR_7;

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_23->groups); VAR_29++) {
  VAR_23->groups[VAR_29].supported = 0;
  if (VAR_29 == VAR_11) {
   FUNC_5(VAR_21, VAR_23, VAR_18, VAR_19);
   continue;
  }

  if (VAR_16[VAR_29].flags & VAR_10) {
   if (VAR_16[VAR_29].flags & VAR_9) {
    if (!(VAR_25 & VAR_4))
     continue;
   } else {
    if (!(VAR_25 & VAR_3))
     continue;
   }
  }

  if (VAR_16[VAR_29].flags & VAR_9 &&
      VAR_19->bandwidth < VAR_6)
   continue;


  if (VAR_19->smps_mode == VAR_5 &&
      VAR_16[VAR_29].streams > 1)
   continue;

  VAR_23->groups[VAR_29].supported =
   VAR_24->rx_mask[VAR_16[VAR_29].streams - 1];

  if (VAR_23->groups[VAR_29].supported)
   VAR_26++;
 }

 if (!VAR_26)
  goto use_legacy;


 FUNC_7(VAR_21, VAR_23);
 FUNC_6(VAR_21, VAR_23);

 return;

use_legacy:
 VAR_22->is_ht = 0;
 FUNC_4(&VAR_22->legacy, 0, sizeof(VAR_22->legacy));
 VAR_22->legacy.r = VAR_22->ratelist;
 VAR_22->legacy.sample_table = VAR_22->sample_table;
 return VAR_15.rate_init(VAR_17, VAR_18, VAR_19, &VAR_22->legacy);
}
