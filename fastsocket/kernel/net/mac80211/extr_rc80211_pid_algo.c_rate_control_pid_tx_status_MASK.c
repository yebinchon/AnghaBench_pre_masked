
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rc_pid_sta_info {scalar_t__ txrate_idx; scalar_t__ last_sample; int tx_num_xmit; scalar_t__ tx_num_failed; int events; } ;
struct rc_pid_info {int sampling_period; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_3__ {scalar_t__ idx; int count; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,struct ieee80211_tx_info*) ;
 int FUNC_3 (struct rc_pid_info*,struct ieee80211_supported_band*,struct ieee80211_sta*,struct rc_pid_sta_info*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct ieee80211_supported_band *VAR_3,
           struct ieee80211_sta *VAR_4, void *VAR_5,
           struct sk_buff *VAR_6)
{
 struct rc_pid_info *VAR_7 = VAR_2;
 struct rc_pid_sta_info *VAR_8 = VAR_5;
 unsigned long VAR_9;
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_6);

 if (!VAR_8)
  return;



 if (VAR_10->status.rates[0].idx != VAR_8->txrate_idx)
  return;

 VAR_8->tx_num_xmit++;
 if (!(VAR_10->flags & VAR_0)) {
  VAR_8->tx_num_failed += 2;
  VAR_8->tx_num_xmit++;
 } else if (VAR_10->status.rates[0].count > 1) {
  VAR_8->tx_num_failed++;
  VAR_8->tx_num_xmit++;
 }


 VAR_9 = FUNC_1(VAR_7->sampling_period);
 if (FUNC_4(VAR_1, VAR_8->last_sample + VAR_9))
  FUNC_3(VAR_7, VAR_3, VAR_4, VAR_8);
}
