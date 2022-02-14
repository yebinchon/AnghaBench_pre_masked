
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {scalar_t__ retry_short; scalar_t__ retry_long; int rts_threshold; int coverage_class; int frag_threshold; } ;
struct TYPE_3__ {scalar_t__ short_frame_max_tx_count; scalar_t__ long_frame_max_tx_count; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;
struct ieee80211_local {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_local*,int ) ;
 int FUNC_1 (struct ieee80211_local*,int ) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (struct ieee80211_local*,int ) ;
 struct ieee80211_local* FUNC_4 (struct wiphy*) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_8, u32 VAR_9)
{
 struct ieee80211_local *VAR_10 = FUNC_4(VAR_8);
 int VAR_11;

 if (VAR_9 & VAR_4) {
  VAR_11 = FUNC_1(VAR_10, VAR_8->frag_threshold);

  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9 & VAR_3) {
  VAR_11 = FUNC_0(VAR_10, VAR_8->coverage_class);

  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9 & VAR_7) {
  VAR_11 = FUNC_2(VAR_10, VAR_8->rts_threshold);

  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9 & VAR_6) {
  if (VAR_8->retry_short > VAR_2)
   return -VAR_0;
  VAR_10->hw.conf.short_frame_max_tx_count = VAR_8->retry_short;
 }
 if (VAR_9 & VAR_5) {
  if (VAR_8->retry_long > VAR_2)
   return -VAR_0;
  VAR_10->hw.conf.long_frame_max_tx_count = VAR_8->retry_long;
 }
 if (VAR_9 &
     (VAR_6 | VAR_5))
  FUNC_3(VAR_10, VAR_1);

 return 0;
}
