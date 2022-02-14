
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {struct ieee80211_supported_band** bands; } ;
struct TYPE_2__ {size_t band; } ;
struct reg_beacon {TYPE_1__ chan; } ;
struct ieee80211_supported_band {unsigned int n_channels; } ;


 int FUNC_0 (struct wiphy*,unsigned int,struct reg_beacon*) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_0,
        struct reg_beacon *VAR_1)
{
 unsigned int VAR_2;
 struct ieee80211_supported_band *VAR_3;

 if (!VAR_0->bands[VAR_1->chan.band])
  return;

 VAR_3 = VAR_0->bands[VAR_1->chan.band];

 for (VAR_2 = 0; VAR_2 < VAR_3->n_channels; VAR_2++)
  FUNC_0(VAR_0, VAR_2, VAR_1);
}
