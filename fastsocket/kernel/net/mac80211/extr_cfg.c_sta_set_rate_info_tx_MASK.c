
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sta_info {int sdata; TYPE_3__* local; } ;
struct rate_info {size_t mcs; int flags; int legacy; int nss; } ;
struct ieee80211_tx_rate {int flags; size_t idx; } ;
struct ieee80211_supported_band {TYPE_4__* bitrates; } ;
struct TYPE_8__ {int bitrate; } ;
struct TYPE_6__ {TYPE_1__* wiphy; } ;
struct TYPE_7__ {TYPE_2__ hw; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;


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
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (struct ieee80211_tx_rate const*) ;
 int FUNC_2 (struct ieee80211_tx_rate const*) ;

void FUNC_3(struct sta_info *VAR_12,
     const struct ieee80211_tx_rate *VAR_13,
     struct rate_info *VAR_14)
{
 VAR_14->flags = 0;
 if (VAR_13->flags & VAR_3) {
  VAR_14->flags |= VAR_9;
  VAR_14->mcs = VAR_13->idx;
 } else if (VAR_13->flags & VAR_5) {
  VAR_14->flags |= VAR_11;
  VAR_14->mcs = FUNC_1(VAR_13);
  VAR_14->nss = FUNC_2(VAR_13);
 } else {
  struct ieee80211_supported_band *VAR_15;
  VAR_15 = VAR_12->local->hw.wiphy->bands[
    FUNC_0(VAR_12->sdata)];
  VAR_14->legacy = VAR_15->bitrates[VAR_13->idx].bitrate;
 }
 if (VAR_13->flags & VAR_1)
  VAR_14->flags |= VAR_7;
 if (VAR_13->flags & VAR_2)
  VAR_14->flags |= VAR_8;
 if (VAR_13->flags & VAR_0)
  VAR_14->flags |= VAR_6;
 if (VAR_13->flags & VAR_4)
  VAR_14->flags |= VAR_10;
}
