
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_rate_stats {int retry_updated; int cur_tp; int probability; int cur_prob; } ;
struct minstrel_priv {int dummy; } ;
struct minstrel_mcs_group_data {int supported; int max_tp_rate; int max_tp_rate2; int max_prob_rate; struct minstrel_rate_stats* rates; } ;
struct minstrel_ht_sta {scalar_t__ ampdu_packets; int ampdu_len; int sample_count; int max_tp_rate; int max_tp_rate2; int max_prob_rate; int max_prob_streams; int stats_update; struct minstrel_mcs_group_data* groups; scalar_t__ sample_slow; int avg_ampdu_len; } ;
struct TYPE_3__ {int streams; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct minstrel_rate_stats*) ;
 int FUNC_4 (int ,int,int ) ;
 struct minstrel_rate_stats* FUNC_5 (struct minstrel_ht_sta*,int) ;
 int FUNC_6 (struct minstrel_ht_sta*,int,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void
FUNC_8(struct minstrel_priv *VAR_4, struct minstrel_ht_sta *VAR_5)
{
 struct minstrel_mcs_group_data *VAR_6;
 struct minstrel_rate_stats *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 bool VAR_15 = 0;

 if (VAR_5->ampdu_packets > 0) {
  VAR_5->avg_ampdu_len = FUNC_4(VAR_5->avg_ampdu_len,
   FUNC_2(VAR_5->ampdu_len, VAR_5->ampdu_packets), VAR_0);
  VAR_5->ampdu_len = 0;
  VAR_5->ampdu_packets = 0;
 }

 VAR_5->sample_slow = 0;
 VAR_5->sample_count = 0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  bool VAR_16 = 0;

  VAR_8 = 0;
  VAR_9 = 0;
  VAR_10 = 0;
  VAR_11 = 0;

  VAR_6 = &VAR_5->groups[VAR_12];
  if (!VAR_6->supported)
   continue;

  VAR_5->sample_count++;

  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (!(VAR_6->supported & FUNC_1(VAR_13)))
    continue;


   if (!VAR_16) {
    VAR_6->max_tp_rate = VAR_6->max_tp_rate2 =
     VAR_6->max_prob_rate = VAR_13;
    if (!VAR_15) {
     VAR_5->max_tp_rate = VAR_5->max_tp_rate2 =
      VAR_5->max_prob_rate = VAR_13;
     VAR_15 = 1;
    }
    VAR_16 = 1;
   }

   VAR_7 = &VAR_6->rates[VAR_13];
   VAR_7->retry_updated = 0;
   VAR_14 = VAR_1 * VAR_12 + VAR_13;
   FUNC_3(VAR_7);
   FUNC_6(VAR_5, VAR_12, VAR_13);

   if (!VAR_7->cur_tp)
    continue;

   if ((VAR_7->cur_tp > VAR_9 && VAR_7->probability >
        FUNC_2(3, 4)) || VAR_7->probability > VAR_8) {
    VAR_6->max_prob_rate = VAR_14;
    VAR_8 = VAR_7->probability;
    VAR_9 = VAR_7->cur_tp;
   }

   if (VAR_7->cur_tp > VAR_10) {
    FUNC_7(VAR_14, VAR_6->max_tp_rate);
    VAR_10 = VAR_7->cur_tp;
    VAR_7 = FUNC_5(VAR_5, VAR_14);
   }

   if (VAR_14 >= VAR_6->max_tp_rate)
    continue;

   if (VAR_7->cur_tp > VAR_11) {
    VAR_6->max_tp_rate2 = VAR_14;
    VAR_11 = VAR_7->cur_tp;
   }
  }
 }


 VAR_5->sample_count *= 8;

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 VAR_11 = 0;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  VAR_6 = &VAR_5->groups[VAR_12];
  if (!VAR_6->supported)
   continue;

  VAR_7 = FUNC_5(VAR_5, VAR_6->max_tp_rate);
  if (VAR_10 < VAR_7->cur_tp) {
   VAR_5->max_tp_rate2 = VAR_5->max_tp_rate;
   VAR_11 = VAR_10;
   VAR_5->max_tp_rate = VAR_6->max_tp_rate;
   VAR_10 = VAR_7->cur_tp;
   VAR_5->max_prob_streams = VAR_3[VAR_12].streams - 1;
  }

  VAR_7 = FUNC_5(VAR_5, VAR_6->max_tp_rate2);
  if (VAR_11 < VAR_7->cur_tp) {
   VAR_5->max_tp_rate2 = VAR_6->max_tp_rate2;
   VAR_11 = VAR_7->cur_tp;
  }
 }

 if (VAR_5->max_prob_streams < 1)
  VAR_5->max_prob_streams = 1;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++) {
  VAR_6 = &VAR_5->groups[VAR_12];
  if (!VAR_6->supported)
   continue;
  VAR_7 = FUNC_5(VAR_5, VAR_6->max_prob_rate);
  if (VAR_9 < VAR_7->cur_tp &&
      VAR_3[VAR_12].streams <= VAR_5->max_prob_streams) {
   VAR_5->max_prob_rate = VAR_6->max_prob_rate;
   VAR_8 = VAR_7->cur_prob;
   VAR_9 = VAR_7->cur_tp;
  }
 }


 VAR_5->stats_update = VAR_2;
}
