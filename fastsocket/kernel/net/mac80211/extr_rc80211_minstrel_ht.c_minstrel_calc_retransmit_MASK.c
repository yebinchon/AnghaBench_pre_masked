
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_rate_stats {scalar_t__ probability; int retry_count; int retry_count_rtscts; int retry_updated; } ;
struct minstrel_priv {unsigned int cw_min; unsigned int segment_size; int max_retry; int cw_max; } ;
struct minstrel_ht_sta {unsigned int overhead; unsigned int overhead_rtscts; int avg_ampdu_len; } ;
struct mcs_group {unsigned int* duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,int ) ;
 struct minstrel_rate_stats* FUNC_3 (struct minstrel_ht_sta*,int) ;
 struct mcs_group* VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct minstrel_priv *VAR_3, struct minstrel_ht_sta *VAR_4,
                         int VAR_5)
{
 struct minstrel_rate_stats *VAR_6;
 const struct mcs_group *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = VAR_3->cw_min;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 9;
 unsigned int VAR_14 = FUNC_1(VAR_4->avg_ampdu_len);
 unsigned int VAR_15 = 0, VAR_16 = 0;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6->probability < FUNC_0(1, 10)) {
  VAR_6->retry_count = 1;
  VAR_6->retry_count_rtscts = 1;
  return;
 }

 VAR_6->retry_count = 2;
 VAR_6->retry_count_rtscts = 2;
 VAR_6->retry_updated = 1;

 VAR_7 = &VAR_2[VAR_5 / VAR_0];
 VAR_10 = VAR_7->duration[VAR_5 % VAR_0] * VAR_14 / 1000;


 VAR_12 = (VAR_13 * VAR_11) >> 1;
 VAR_11 = FUNC_2((VAR_11 << 1) | 1, VAR_3->cw_max);
 VAR_12 += (VAR_13 * VAR_11) >> 1;
 VAR_11 = FUNC_2((VAR_11 << 1) | 1, VAR_3->cw_max);

 if (VAR_5 / VAR_0 != VAR_1) {
  VAR_15 = VAR_4->overhead;
  VAR_16 = VAR_4->overhead_rtscts;
 }


 VAR_8 = VAR_12 + 2 * (VAR_15 + VAR_10);
 VAR_9 = VAR_12 + 2 * (VAR_16 + VAR_10);


 do {

  VAR_12 = (VAR_13 * VAR_11) >> 1;
  VAR_11 = FUNC_2((VAR_11 << 1) | 1, VAR_3->cw_max);


  VAR_8 += VAR_12 + VAR_15 + VAR_10;
  VAR_9 += VAR_12 + VAR_16 + VAR_10;

  if (VAR_9 < VAR_3->segment_size)
   VAR_6->retry_count_rtscts++;
 } while ((VAR_8 < VAR_3->segment_size) &&
          (++VAR_6->retry_count < VAR_3->max_retry));
}
