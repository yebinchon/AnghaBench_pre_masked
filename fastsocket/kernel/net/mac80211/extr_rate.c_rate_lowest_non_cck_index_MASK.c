
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_supported_band {int n_bitrates; int band; struct ieee80211_rate* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rate {int bitrate; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (struct ieee80211_sta*,int ,int) ;

__attribute__((used)) static inline s8
FUNC_1(struct ieee80211_supported_band *VAR_0,
     struct ieee80211_sta *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_bitrates; VAR_2++) {
  struct ieee80211_rate *VAR_3 = &VAR_0->bitrates[VAR_2];
  if ((VAR_3->bitrate == 10) || (VAR_3->bitrate == 20) ||
      (VAR_3->bitrate == 55) || (VAR_3->bitrate == 110))
   continue;

  if (FUNC_0(VAR_1, VAR_0->band, VAR_2))
   return VAR_2;
 }


 return 0;
}
