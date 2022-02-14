
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct minstrel_sta_info {int n_rates; size_t max_prob_rate; int stats_update; int max_tp_rate; struct minstrel_rate* r; } ;
struct minstrel_rate {int perfect_tx_time; scalar_t__ attempts; int cur_prob; int success; int probability; int last_success; int last_attempts; int cur_tp; int adjusted_retry_count; int retry_count; int sample_limit; scalar_t__ sample_skipped; int att_hist; int succ_hist; } ;
struct minstrel_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,size_t*,int) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct minstrel_sta_info*,int,size_t*) ;
 int FUNC_4 (struct minstrel_priv*,struct minstrel_sta_info*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct minstrel_priv *VAR_3, struct minstrel_sta_info *VAR_4)
{
 u8 VAR_5[VAR_1];
 u8 VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 for (VAR_8=0; VAR_8 < VAR_1; VAR_8++)
     VAR_5[VAR_8] = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->n_rates; VAR_8++) {
  struct minstrel_rate *VAR_9 = &VAR_4->r[VAR_8];

  VAR_7 = VAR_9->perfect_tx_time;
  if (!VAR_7)
   VAR_7 = 1000000;

  if (FUNC_5(VAR_9->attempts > 0)) {
   VAR_9->sample_skipped = 0;
   VAR_9->cur_prob = FUNC_0(VAR_9->success, VAR_9->attempts);
   VAR_9->succ_hist += VAR_9->success;
   VAR_9->att_hist += VAR_9->attempts;
   VAR_9->probability = FUNC_2(VAR_9->probability,
       VAR_9->cur_prob,
       VAR_0);
  } else
   VAR_9->sample_skipped++;

  VAR_9->last_success = VAR_9->success;
  VAR_9->last_attempts = VAR_9->attempts;
  VAR_9->success = 0;
  VAR_9->attempts = 0;


  if (VAR_9->probability < FUNC_0(10, 100))
   VAR_9->cur_tp = 0;
  else
   VAR_9->cur_tp = VAR_9->probability * (1000000 / VAR_7);



  if (VAR_9->probability > FUNC_0(95, 100) ||
      VAR_9->probability < FUNC_0(10, 100)) {
   VAR_9->adjusted_retry_count = VAR_9->retry_count >> 1;
   if (VAR_9->adjusted_retry_count > 2)
    VAR_9->adjusted_retry_count = 2;
   VAR_9->sample_limit = 4;
  } else {
   VAR_9->sample_limit = -1;
   VAR_9->adjusted_retry_count = VAR_9->retry_count;
  }
  if (!VAR_9->adjusted_retry_count)
   VAR_9->adjusted_retry_count = 2;

  FUNC_3(VAR_4, VAR_8, VAR_5);







  if (VAR_9->probability >= FUNC_0(95,100)) {
   if (VAR_9->cur_tp >= VAR_4->r[VAR_6].cur_tp)
    VAR_6 = VAR_8;
  } else {
   if (VAR_9->probability >= VAR_4->r[VAR_6].probability)
    VAR_6 = VAR_8;
  }
 }


 FUNC_1(VAR_4->max_tp_rate, VAR_5, sizeof(VAR_4->max_tp_rate));
 VAR_4->max_prob_rate = VAR_6;


 VAR_4->stats_update = VAR_2;

 FUNC_4(VAR_3, VAR_4);
}
