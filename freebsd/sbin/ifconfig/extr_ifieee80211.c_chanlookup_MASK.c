
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_freq; int ic_flags; } ;


 int VAR_0 ;

__attribute__((used)) static const struct ieee80211_channel *
FUNC_0(const struct ieee80211_channel VAR_1[], int VAR_2,
 int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_4 &= VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  const struct ieee80211_channel *VAR_6 = &VAR_1[VAR_5];
  if (VAR_6->ic_freq == VAR_3 &&
      (VAR_6->ic_flags & VAR_0) == VAR_4)
   return VAR_6;
 }
 return ((void*)0);
}
