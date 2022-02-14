
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_pid_sta_info {int txrate_idx; } ;
struct rc_pid_rateinfo {int index; int rev_index; int diff; } ;
struct rc_pid_info {int norm_offset; struct rc_pid_rateinfo* rinfo; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_1__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {scalar_t__ bitrate; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_supported_band*,struct ieee80211_sta*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, struct ieee80211_supported_band *VAR_2,
      struct ieee80211_sta *VAR_3, void *VAR_4)
{
 struct rc_pid_sta_info *VAR_5 = VAR_4;
 struct rc_pid_info *VAR_6 = VAR_1;
 struct rc_pid_rateinfo *VAR_7 = VAR_6->rinfo;
 int VAR_8, VAR_9, VAR_10;
 bool VAR_11;
 for (VAR_8 = 0; VAR_8 < VAR_2->n_bitrates; VAR_8++) {
  VAR_7[VAR_8].index = VAR_8;
  VAR_7[VAR_8].rev_index = VAR_8;
  if (VAR_0)
   VAR_7[VAR_8].diff = 0;
  else
   VAR_7[VAR_8].diff = VAR_8 * VAR_6->norm_offset;
 }
 for (VAR_8 = 1; VAR_8 < VAR_2->n_bitrates; VAR_8++) {
  VAR_11 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_2->n_bitrates - VAR_8; VAR_9++)
   if (FUNC_1(VAR_2->bitrates[VAR_7[VAR_9].index].bitrate >
         VAR_2->bitrates[VAR_7[VAR_9 + 1].index].bitrate)) {
    VAR_10 = VAR_7[VAR_9].index;
    VAR_7[VAR_9].index = VAR_7[VAR_9 + 1].index;
    VAR_7[VAR_9 + 1].index = VAR_10;
    VAR_7[VAR_7[VAR_9].index].rev_index = VAR_9;
    VAR_7[VAR_7[VAR_9 + 1].index].rev_index = VAR_9 + 1;
    VAR_11 = 1;
   }
  if (!VAR_11)
   break;
 }

 VAR_5->txrate_idx = FUNC_0(VAR_2, VAR_3);
}
