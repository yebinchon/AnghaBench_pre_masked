
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct minstrel_rate_stats {int success; int attempts; } ;
struct minstrel_priv {int update_interval; } ;
struct minstrel_ht_sta {int ampdu_len; int sample_wait; int sample_tries; scalar_t__ sample_count; int sample_packets; int max_prob_rate; scalar_t__ stats_update; int max_tp_rate2; int max_tp_rate; int avg_ampdu_len; int ampdu_packets; } ;
struct minstrel_ht_sta_priv {int legacy; int is_ht; struct minstrel_ht_sta ht; } ;
struct ieee80211_tx_rate {int count; } ;
struct TYPE_3__ {int ampdu_ack_len; int ampdu_len; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ status; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_4__ {void (* tx_status ) (void*,struct ieee80211_supported_band*,struct ieee80211_sta*,int *,struct sk_buff*) ;} ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_3 (struct ieee80211_sta*,struct sk_buff*) ;
 int FUNC_4 (struct minstrel_ht_sta*,int *,int) ;
 struct minstrel_rate_stats* FUNC_5 (struct minstrel_ht_sta*,int ) ;
 struct minstrel_rate_stats* FUNC_6 (struct minstrel_priv*,struct minstrel_ht_sta*,struct ieee80211_tx_rate*) ;
 int FUNC_7 (struct minstrel_priv*,struct ieee80211_tx_rate*) ;
 int FUNC_8 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 int FUNC_9 (struct minstrel_priv*,struct minstrel_ht_sta*) ;
 void FUNC_10 (void*,struct ieee80211_supported_band*,struct ieee80211_sta*,int *,struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(void *VAR_10, struct ieee80211_supported_band *VAR_11,
                      struct ieee80211_sta *VAR_12, void *VAR_13,
                      struct sk_buff *VAR_14)
{
 struct minstrel_ht_sta_priv *VAR_15 = VAR_13;
 struct minstrel_ht_sta *VAR_16 = &VAR_15->ht;
 struct ieee80211_tx_info *VAR_17 = FUNC_0(VAR_14);
 struct ieee80211_tx_rate *VAR_18 = VAR_17->status.rates;
 struct minstrel_rate_stats *VAR_19, *VAR_20;
 struct minstrel_priv *VAR_21 = VAR_10;
 bool VAR_22, VAR_23 = 0;
 int VAR_24;

 if (!VAR_15->is_ht)
  return VAR_9.tx_status(VAR_10, VAR_11, VAR_12, &VAR_15->legacy, VAR_14);


 if ((VAR_17->flags & VAR_1) &&
     !(VAR_17->flags & VAR_5))
  return;

 if (!(VAR_17->flags & VAR_5)) {
  VAR_17->status.ampdu_ack_len =
   (VAR_17->flags & VAR_4 ? 1 : 0);
  VAR_17->status.ampdu_len = 1;
 }

 VAR_16->ampdu_packets++;
 VAR_16->ampdu_len += VAR_17->status.ampdu_len;

 if (!VAR_16->sample_wait && !VAR_16->sample_tries && VAR_16->sample_count > 0) {
  VAR_16->sample_wait = 16 + 2 * FUNC_2(VAR_16->avg_ampdu_len);
  VAR_16->sample_tries = 1;
  VAR_16->sample_count--;
 }

 if (VAR_17->flags & VAR_2)
  VAR_16->sample_packets += VAR_17->status.ampdu_len;

 VAR_22 = !FUNC_7(VAR_21, &VAR_18[0]);
 for (VAR_24 = 0; !VAR_22; VAR_24++) {
  VAR_22 = (VAR_24 == VAR_3 - 1) ||
         !FUNC_7(VAR_21, &VAR_18[VAR_24 + 1]);

  VAR_19 = FUNC_6(VAR_21, VAR_16, &VAR_18[VAR_24]);

  if (VAR_22)
   VAR_19->success += VAR_17->status.ampdu_ack_len;

  VAR_19->attempts += VAR_18[VAR_24].count * VAR_17->status.ampdu_len;
 }





 VAR_19 = FUNC_5(VAR_16, VAR_16->max_tp_rate);
 if (VAR_19->attempts > 30 &&
     FUNC_1(VAR_19->success, VAR_19->attempts) <
     FUNC_1(20, 100)) {
  FUNC_4(VAR_16, &VAR_16->max_tp_rate, 1);
  VAR_23 = 1;
 }

 VAR_20 = FUNC_5(VAR_16, VAR_16->max_tp_rate2);
 if (VAR_20->attempts > 30 &&
     FUNC_1(VAR_20->success, VAR_20->attempts) <
     FUNC_1(20, 100)) {
  FUNC_4(VAR_16, &VAR_16->max_tp_rate2, 0);
  VAR_23 = 1;
 }

 if (FUNC_11(VAR_8, VAR_16->stats_update + (VAR_21->update_interval / 2 * VAR_0) / 1000)) {
  VAR_23 = 1;
  FUNC_9(VAR_21, VAR_16);
  if (!(VAR_17->flags & VAR_1) &&
      VAR_16->max_prob_rate / VAR_6 != VAR_7)
   FUNC_3(VAR_12, VAR_14);
 }

 if (VAR_23)
  FUNC_8(VAR_21, VAR_16);
}
