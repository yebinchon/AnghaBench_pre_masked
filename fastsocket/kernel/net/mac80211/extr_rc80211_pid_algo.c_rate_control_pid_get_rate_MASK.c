
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rc_pid_sta_info {int txrate_idx; int events; } ;
struct ieee80211_tx_rate_control {TYPE_2__* hw; scalar_t__ rts; struct ieee80211_supported_band* sband; struct sk_buff* skb; } ;
struct TYPE_9__ {TYPE_3__* rates; } ;
struct ieee80211_tx_info {TYPE_4__ control; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_5__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_10__ {int bitrate; } ;
struct TYPE_8__ {int idx; int count; } ;
struct TYPE_6__ {int short_frame_max_tx_count; int long_frame_max_tx_count; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*,void*,struct ieee80211_tx_rate_control*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, struct ieee80211_sta *VAR_1,
     void *VAR_2,
     struct ieee80211_tx_rate_control *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->skb;
 struct ieee80211_supported_band *VAR_5 = VAR_3->sband;
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_4);
 struct rc_pid_sta_info *VAR_7 = VAR_2;
 int VAR_8;

 if (VAR_3->rts)
  VAR_6->control.rates[0].count =
   VAR_3->hw->conf.long_frame_max_tx_count;
 else
  VAR_6->control.rates[0].count =
   VAR_3->hw->conf.short_frame_max_tx_count;


 if (FUNC_2(VAR_1, VAR_2, VAR_3))
  return;

 VAR_8 = VAR_7->txrate_idx;

 if (VAR_8 >= VAR_5->n_bitrates)
  VAR_8 = VAR_5->n_bitrates - 1;

 VAR_6->control.rates[0].idx = VAR_8;





}
