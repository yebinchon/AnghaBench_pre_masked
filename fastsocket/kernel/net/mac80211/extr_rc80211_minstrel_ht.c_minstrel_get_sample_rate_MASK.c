
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate_stats {scalar_t__ probability; int sample_skipped; } ;
struct minstrel_priv {int dummy; } ;
struct minstrel_mcs_group_data {size_t column; size_t index; struct minstrel_rate_stats* rates; } ;
struct minstrel_ht_sta {scalar_t__ sample_wait; size_t sample_group; int max_tp_rate; int max_tp_rate2; int max_prob_rate; scalar_t__ max_prob_streams; int sample_tries; int sample_slow; struct minstrel_mcs_group_data* groups; } ;
struct TYPE_2__ {scalar_t__ streams; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct minstrel_ht_sta*) ;
 int** VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct minstrel_priv *VAR_3, struct minstrel_ht_sta *VAR_4)
{
 struct minstrel_rate_stats *VAR_5;
 struct minstrel_mcs_group_data *VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_4->sample_wait > 0) {
  VAR_4->sample_wait--;
  return -1;
 }

 if (!VAR_4->sample_tries)
  return -1;

 VAR_6 = &VAR_4->groups[VAR_4->sample_group];
 VAR_9 = VAR_2[VAR_6->column][VAR_6->index];
 VAR_5 = &VAR_6->rates[VAR_9];
 VAR_8 = VAR_4->sample_group;
 VAR_9 += VAR_8 * VAR_0;
 FUNC_2(VAR_4);






 if (VAR_9 == VAR_4->max_tp_rate ||
     VAR_9 == VAR_4->max_tp_rate2 ||
     VAR_9 == VAR_4->max_prob_rate)
  return -1;





 if (VAR_5->probability > FUNC_0(95, 100))
  return -1;





 VAR_7 = FUNC_1(VAR_9);
 if (VAR_7 >= FUNC_1(VAR_4->max_tp_rate2) &&
     (VAR_4->max_prob_streams <
      VAR_1[VAR_8].streams ||
      VAR_7 >= FUNC_1(VAR_4->max_prob_rate))) {
  if (VAR_5->sample_skipped < 20)
   return -1;

  if (VAR_4->sample_slow++ > 2)
   return -1;
 }
 VAR_4->sample_tries--;

 return VAR_9;
}
