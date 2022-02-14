
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct minstrel_rate_stats {int cur_tp; int cur_prob; int probability; int retry_count; int last_success; int last_attempts; scalar_t__ att_hist; scalar_t__ succ_hist; } ;
struct minstrel_ht_sta {int max_tp_rate; int max_tp_rate2; int max_prob_rate; TYPE_1__* groups; } ;
struct mcs_group {int flags; int streams; } ;
struct TYPE_2__ {int supported; struct minstrel_rate_stats* rates; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int) ;
 struct mcs_group* VAR_5 ;
 int FUNC_2 (char*,char*,unsigned int,...) ;

__attribute__((used)) static char *
FUNC_3(struct minstrel_ht_sta *VAR_6, int VAR_7, char *VAR_8)
{
 unsigned int VAR_9 = VAR_3 * VAR_4;
 const struct mcs_group *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 char VAR_15 = '2';
 char VAR_16 = 'L';

 if (!VAR_6->groups[VAR_7].supported)
  return VAR_8;

 VAR_10 = &VAR_5[VAR_7];
 if (VAR_10->flags & VAR_0)
  VAR_15 = '4';
 if (VAR_10->flags & VAR_1)
  VAR_16 = 'S';

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  struct minstrel_rate_stats *VAR_17 = &VAR_6->groups[VAR_7].rates[VAR_11];
  static const int VAR_18[4] = { 10, 20, 55, 110 };
  int VAR_19 = VAR_7 * VAR_2 + VAR_11;

  if (!(VAR_6->groups[VAR_7].supported & FUNC_0(VAR_11)))
   continue;

  if (VAR_7 == VAR_9)
   VAR_8 += FUNC_2(VAR_8, "CCK/%cP   ", VAR_11 < 4 ? 'L' : 'S');
  else
   VAR_8 += FUNC_2(VAR_8, "HT%c0/%cGI ", VAR_15, VAR_16);

  *(VAR_8++) = (VAR_19 == VAR_6->max_tp_rate) ? 'T' : ' ';
  *(VAR_8++) = (VAR_19 == VAR_6->max_tp_rate2) ? 't' : ' ';
  *(VAR_8++) = (VAR_19 == VAR_6->max_prob_rate) ? 'P' : ' ';

  if (VAR_7 == VAR_9) {
   int VAR_20 = VAR_18[VAR_11 % 4];
   VAR_8 += FUNC_2(VAR_8, " %2u.%1uM", VAR_20 / 10, VAR_20 % 10);
  } else {
   VAR_8 += FUNC_2(VAR_8, " MCS%-2u", (VAR_10->streams - 1) *
      VAR_2 + VAR_11);
  }

  VAR_12 = VAR_17->cur_tp / 10;
  VAR_13 = FUNC_1(VAR_17->cur_prob * 1000);
  VAR_14 = FUNC_1(VAR_17->probability * 1000);

  VAR_8 += FUNC_2(VAR_8, "      %6u.%1u   %6u.%1u    %6u.%1u    "
    "%3u            %3u(%3u)  %8llu    %8llu\n",
    VAR_12 / 10, VAR_12 % 10,
    VAR_14 / 10, VAR_14 % 10,
    VAR_13 / 10, VAR_13 % 10,
    VAR_17->retry_count,
    VAR_17->last_success,
    VAR_17->last_attempts,
    (unsigned long long)VAR_17->succ_hist,
    (unsigned long long)VAR_17->att_hist);
 }

 return VAR_8;
}
