
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_supported_band {unsigned int n_channels; int * channels; } ;
struct ieee80211_regdomain {int dummy; } ;


 int FUNC_0 (struct wiphy*,int *,struct ieee80211_regdomain const*) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_0,
          struct ieee80211_supported_band *VAR_1,
          const struct ieee80211_regdomain *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_channels; VAR_3++)
  FUNC_0(VAR_0, &VAR_1->channels[VAR_3], VAR_2);
}
