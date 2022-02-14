
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_rate_stats {scalar_t__ attempts; scalar_t__ att_hist; scalar_t__ last_attempts; scalar_t__ success; scalar_t__ last_success; scalar_t__ sample_skipped; int succ_hist; int cur_prob; int probability; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct minstrel_rate_stats *VAR_1)
{
 if (FUNC_2(VAR_1->attempts > 0)) {
  VAR_1->sample_skipped = 0;
  VAR_1->cur_prob = FUNC_0(VAR_1->success, VAR_1->attempts);
  if (!VAR_1->att_hist)
   VAR_1->probability = VAR_1->cur_prob;
  else
   VAR_1->probability = FUNC_1(VAR_1->probability,
    VAR_1->cur_prob, VAR_0);
  VAR_1->att_hist += VAR_1->attempts;
  VAR_1->succ_hist += VAR_1->success;
 } else {
  VAR_1->sample_skipped++;
 }
 VAR_1->last_success = VAR_1->success;
 VAR_1->last_attempts = VAR_1->attempts;
 VAR_1->success = 0;
 VAR_1->attempts = 0;
}
