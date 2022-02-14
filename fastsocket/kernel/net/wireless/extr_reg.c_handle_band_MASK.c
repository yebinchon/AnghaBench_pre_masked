
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ieee80211_supported_band {unsigned int n_channels; int * channels; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int FUNC_0 (struct wiphy*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_0,
   enum nl80211_reg_initiator VAR_1,
   struct ieee80211_supported_band *VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_channels; VAR_3++)
  FUNC_0(VAR_0, VAR_1, &VAR_2->channels[VAR_3]);
}
