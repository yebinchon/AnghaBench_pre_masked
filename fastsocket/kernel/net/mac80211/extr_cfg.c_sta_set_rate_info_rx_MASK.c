
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sta_info {int last_rx_rate_flag; size_t last_rx_rate_idx; int sdata; TYPE_3__* local; int last_rx_rate_vht_nss; } ;
struct rate_info {size_t mcs; int flags; int legacy; int nss; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_0 (int ) ;

void FUNC_1(struct sta_info *VAR_14, struct rate_info *VAR_15)
{
 VAR_15->flags = 0;

 if (VAR_14->last_rx_rate_flag & VAR_11) {
  VAR_15->flags |= VAR_4;
  VAR_15->mcs = VAR_14->last_rx_rate_idx;
 } else if (VAR_14->last_rx_rate_flag & VAR_13) {
  VAR_15->flags |= VAR_6;
  VAR_15->nss = VAR_14->last_rx_rate_vht_nss;
  VAR_15->mcs = VAR_14->last_rx_rate_idx;
 } else {
  struct ieee80211_supported_band *VAR_16;

  VAR_16 = VAR_14->local->hw.wiphy->bands[
    FUNC_0(VAR_14->sdata)];
  VAR_15->legacy =
   VAR_16->bitrates[VAR_14->last_rx_rate_idx].bitrate;
 }

 if (VAR_14->last_rx_rate_flag & VAR_8)
  VAR_15->flags |= VAR_1;
 if (VAR_14->last_rx_rate_flag & VAR_12)
  VAR_15->flags |= VAR_5;
 if (VAR_14->last_rx_rate_flag & VAR_9)
  VAR_15->flags |= VAR_3;
 if (VAR_14->last_rx_rate_flag & VAR_10)
  VAR_15->flags |= VAR_2;
 if (VAR_14->last_rx_rate_flag & VAR_7)
  VAR_15->flags |= VAR_0;
}
