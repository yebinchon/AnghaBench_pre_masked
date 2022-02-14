
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_rate_stats {unsigned int probability; int cur_tp; } ;
struct minstrel_ht_sta {int overhead; unsigned int avg_ampdu_len; TYPE_1__* groups; } ;
struct TYPE_4__ {scalar_t__* duration; } ;
struct TYPE_3__ {struct minstrel_rate_stats* rates; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct minstrel_ht_sta *VAR_2, int VAR_3, int VAR_4)
{
 struct minstrel_rate_stats *VAR_5;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_5 = &VAR_2->groups[VAR_3].rates[VAR_4];
 VAR_8 = VAR_5->probability;

 if (VAR_8 < FUNC_0(1, 10)) {
  VAR_5->cur_tp = 0;
  return;
 }





 if (VAR_8 > FUNC_0(9, 10))
  VAR_8 = FUNC_0(9, 10);

 if (VAR_3 != VAR_0)
  VAR_6 = 1000 * VAR_2->overhead / FUNC_1(VAR_2->avg_ampdu_len);

 VAR_6 += VAR_1[VAR_3].duration[VAR_4];
 VAR_7 = 1000000 * ((VAR_5->probability * 1000) / VAR_6);

 VAR_5->cur_tp = FUNC_1(VAR_7);
}
