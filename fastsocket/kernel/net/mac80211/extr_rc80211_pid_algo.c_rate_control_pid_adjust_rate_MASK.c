
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_pid_sta_info {int txrate_idx; int events; } ;
struct rc_pid_rateinfo {int rev_index; scalar_t__ diff; int index; } ;
struct ieee80211_supported_band {int band; int n_bitrates; TYPE_1__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int bitrate; } ;


 int FUNC_0 (int *,int,int ) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_supported_band *VAR_0,
      struct ieee80211_sta *VAR_1,
      struct rc_pid_sta_info *VAR_2, int VAR_3,
      struct rc_pid_rateinfo *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11 = VAR_2->txrate_idx;

 VAR_10 = VAR_0->band;
 VAR_9 = VAR_0->n_bitrates;


 VAR_5 = VAR_4[VAR_11].rev_index;
 VAR_6 = VAR_5 + VAR_3;


 if (VAR_6 < 0)
  VAR_6 = VAR_4[0].rev_index;
 else if (VAR_6 >= VAR_9)
  VAR_6 = VAR_4[VAR_9 - 1].rev_index;

 VAR_8 = VAR_6;

 if (VAR_3 < 0) {

  for (VAR_7 = VAR_5; VAR_7 >= VAR_6; VAR_7--)
   if (VAR_4[VAR_7].diff <= VAR_4[VAR_5].diff &&
       FUNC_1(VAR_1, VAR_10, VAR_4[VAR_7].index))
    VAR_8 = VAR_7;
 } else {

  for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_9; VAR_7++)
   if (VAR_4[VAR_7].diff <= VAR_4[VAR_6].diff &&
       FUNC_1(VAR_1, VAR_10, VAR_4[VAR_7].index))
    VAR_8 = VAR_7;
 }


 do {
  if (FUNC_1(VAR_1, VAR_10, VAR_4[VAR_8].index)) {
   VAR_2->txrate_idx = VAR_4[VAR_8].index;
   break;
  }
  if (VAR_3 < 0)
   VAR_8--;
  else
   VAR_8++;
 } while (VAR_8 < VAR_9 && VAR_8 >= 0);






}
