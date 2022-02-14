
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct minstrel_priv {int * cck_rates; TYPE_1__* hw; } ;
struct minstrel_ht_sta {int cck_supported; TYPE_3__* groups; int cck_supported_short; } ;
struct ieee80211_supported_band {scalar_t__ band; TYPE_2__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int supported; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct ieee80211_sta*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct minstrel_priv *VAR_4, struct minstrel_ht_sta *VAR_5,
         struct ieee80211_supported_band *VAR_6,
         struct ieee80211_sta *VAR_7)
{
 int VAR_8;

 if (VAR_6->band != VAR_0)
  return;

 if (!(VAR_4->hw->flags & VAR_1))
  return;

 VAR_5->cck_supported = 0;
 VAR_5->cck_supported_short = 0;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if (!FUNC_1(VAR_7, VAR_6->band, VAR_4->cck_rates[VAR_8]))
   continue;

  VAR_5->cck_supported |= FUNC_0(VAR_8);
  if (VAR_6->bitrates[VAR_8].flags & VAR_2)
   VAR_5->cck_supported_short |= FUNC_0(VAR_8);
 }

 VAR_5->groups[VAR_3].supported = VAR_5->cck_supported;
}
