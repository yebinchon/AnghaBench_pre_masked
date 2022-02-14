
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct minstrel_priv {int* cck_rates; TYPE_2__* hw; } ;
struct ieee80211_supported_band {int n_bitrates; struct ieee80211_rate* bitrates; } ;
struct ieee80211_rate {int flags; int const bitrate; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int FUNC_0 (int const*) ;
 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct minstrel_priv *VAR_2)
{
 static const int VAR_3[4] = { 10, 20, 55, 110 };
 struct ieee80211_supported_band *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_2->hw->wiphy->bands[VAR_0];
 if (!VAR_4)
  return;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4->n_bitrates; VAR_5++) {
  struct ieee80211_rate *VAR_7 = &VAR_4->bitrates[VAR_5];

  if (VAR_7->flags & VAR_1)
   continue;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
   if (VAR_7->bitrate != VAR_3[VAR_6])
    continue;

   VAR_2->cck_rates[VAR_6] = VAR_5;
   break;
  }
 }
}
