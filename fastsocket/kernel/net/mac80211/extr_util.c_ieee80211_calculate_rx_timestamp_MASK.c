
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u16 ;
struct rate_info {size_t mcs; int legacy; int flags; int nss; } ;
struct ieee80211_supported_band {TYPE_3__* bitrates; } ;
struct ieee80211_rx_status {unsigned int mactime; int flag; size_t rate_idx; size_t band; int vht_nss; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
typedef int ri ;
struct TYPE_6__ {int bitrate; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct rate_info*) ;
 int FUNC_2 (struct ieee80211_rx_status*) ;
 int FUNC_3 (struct rate_info*,int ,int) ;

u64 FUNC_4(struct ieee80211_local *VAR_15,
         struct ieee80211_rx_status *VAR_16,
         unsigned int VAR_17,
         unsigned int VAR_18)
{
 u64 VAR_19 = VAR_16->mactime;
 struct rate_info VAR_20;
 u16 VAR_21;

 if (FUNC_0(!FUNC_2(VAR_16)))
  return 0;

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));


 if (VAR_16->flag & VAR_11) {
  VAR_20.mcs = VAR_16->rate_idx;
  VAR_20.flags |= VAR_4;
  if (VAR_16->flag & VAR_8)
   VAR_20.flags |= VAR_1;
  if (VAR_16->flag & VAR_13)
   VAR_20.flags |= VAR_5;
 } else if (VAR_16->flag & VAR_14) {
  VAR_20.flags |= VAR_6;
  VAR_20.mcs = VAR_16->rate_idx;
  VAR_20.nss = VAR_16->vht_nss;
  if (VAR_16->flag & VAR_8)
   VAR_20.flags |= VAR_1;
  if (VAR_16->flag & VAR_9)
   VAR_20.flags |= VAR_3;
  if (VAR_16->flag & VAR_10)
   VAR_20.flags |= VAR_2;
  if (VAR_16->flag & VAR_7)
   VAR_20.flags |= VAR_0;
  if (VAR_16->flag & VAR_13)
   VAR_20.flags |= VAR_5;
 } else {
  struct ieee80211_supported_band *VAR_22;

  VAR_22 = VAR_15->hw.wiphy->bands[VAR_16->band];
  VAR_20.legacy = VAR_22->bitrates[VAR_16->rate_idx].bitrate;
 }

 VAR_21 = FUNC_1(&VAR_20);


 if (VAR_16->flag & VAR_12)
  VAR_19 -= VAR_17 * 8 * 10 / VAR_21;

 VAR_19 += VAR_18 * 8 * 10 / VAR_21;

 return VAR_19;
}
