
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_sta_info {size_t lowest_rix; unsigned int sp_ack_dur; unsigned int n_rates; int stats_update; struct minstrel_rate* r; scalar_t__ max_prob_rate; struct minstrel_rate* max_tp_rate; struct ieee80211_sta* sta; } ;
struct minstrel_rate {unsigned int rix; int bitrate; int sample_limit; int retry_count; int retry_count_cts; int retry_count_rtscts; unsigned int perfect_tx_time; unsigned int ack_time; int adjusted_retry_count; } ;
struct minstrel_priv {unsigned int cw_min; unsigned int segment_size; int max_retry; int cw_max; } ;
struct ieee80211_supported_band {unsigned int n_bitrates; struct ieee80211_rate* bitrates; int band; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rate {int bitrate; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct minstrel_rate*,struct ieee80211_rate*) ;
 unsigned int FUNC_1 (int ,int,int,int,int) ;
 int FUNC_2 (struct minstrel_sta_info*) ;
 int VAR_1 ;
 int FUNC_3 (struct minstrel_rate*,int ,int) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct minstrel_priv*,struct minstrel_sta_info*) ;
 size_t FUNC_6 (struct ieee80211_supported_band*,struct ieee80211_sta*) ;
 int FUNC_7 (struct ieee80211_sta*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2, struct ieee80211_supported_band *VAR_3,
               struct ieee80211_sta *VAR_4, void *VAR_5)
{
 struct minstrel_sta_info *VAR_6 = VAR_5;
 struct minstrel_priv *VAR_7 = VAR_2;
 struct ieee80211_rate *VAR_8;
 unsigned int VAR_9, VAR_10 = 0;
 unsigned int VAR_11 = 9;

 VAR_6->sta = VAR_4;
 VAR_6->lowest_rix = FUNC_6(VAR_3, VAR_4);
 VAR_8 = &VAR_3->bitrates[VAR_6->lowest_rix];
 VAR_6->sp_ack_dur = FUNC_1(VAR_3->band, 10,
    VAR_8->bitrate,
    !!(VAR_8->flags & VAR_0), 1);

 FUNC_3(VAR_6->max_tp_rate, 0, sizeof(VAR_6->max_tp_rate));
 VAR_6->max_prob_rate = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3->n_bitrates; VAR_9++) {
  struct minstrel_rate *VAR_12 = &VAR_6->r[VAR_10];
  unsigned int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
  unsigned int VAR_16;
  unsigned int VAR_17 = VAR_7->cw_min;

  if (!FUNC_7(VAR_4, VAR_3->band, VAR_9))
   continue;
  VAR_10++;
  FUNC_3(VAR_12, 0, sizeof(*VAR_12));

  VAR_12->rix = VAR_9;
  VAR_12->bitrate = VAR_3->bitrates[VAR_9].bitrate / 5;
  FUNC_0(VAR_3->band, VAR_12, &VAR_3->bitrates[VAR_9]);



  VAR_12->sample_limit = -1;
  VAR_12->retry_count = 1;
  VAR_12->retry_count_cts = 1;
  VAR_12->retry_count_rtscts = 1;
  VAR_13 = VAR_12->perfect_tx_time + VAR_6->sp_ack_dur;
  do {

   VAR_16 = VAR_12->ack_time + VAR_12->perfect_tx_time;


   VAR_16 += (VAR_11 * VAR_17) >> 1;
   VAR_17 = FUNC_4((VAR_17 << 1) | 1, VAR_7->cw_max);

   VAR_13 += VAR_16;
   VAR_14 += VAR_16 + VAR_6->sp_ack_dur;
   VAR_15 += VAR_16 + 2 * VAR_6->sp_ack_dur;
   if ((VAR_14 < VAR_7->segment_size) &&
    (VAR_12->retry_count_cts < VAR_7->max_retry))
    VAR_12->retry_count_cts++;
   if ((VAR_15 < VAR_7->segment_size) &&
    (VAR_12->retry_count_rtscts < VAR_7->max_retry))
    VAR_12->retry_count_rtscts++;
  } while ((VAR_13 < VAR_7->segment_size) &&
    (++VAR_12->retry_count < VAR_7->max_retry));
  VAR_12->adjusted_retry_count = VAR_12->retry_count;
  if (!(VAR_3->bitrates[VAR_9].flags & VAR_0))
   VAR_12->retry_count_cts = VAR_12->retry_count;
 }

 for (VAR_9 = VAR_10; VAR_9 < VAR_3->n_bitrates; VAR_9++) {
  struct minstrel_rate *VAR_18 = &VAR_6->r[VAR_9];
  VAR_18->rix = -1;
 }

 VAR_6->n_rates = VAR_10;
 VAR_6->stats_update = VAR_1;

 FUNC_2(VAR_6);
 FUNC_5(VAR_7, VAR_6);
}
