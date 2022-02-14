
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct ieee80211_channel {scalar_t__ ic_freq; int ic_flags; } ;


 int VAR_0 ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_0(struct ieee80211_channel VAR_1[], int VAR_2, uint16_t VAR_3,
    uint32_t VAR_4)
{
 struct ieee80211_channel *VAR_5;
 int VAR_6;

 VAR_4 &= VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_1[VAR_6];
  if (VAR_5->ic_freq == VAR_3 &&
      (VAR_5->ic_flags & VAR_0) == VAR_4)
   return VAR_5;
 }
 return ((void*)0);
}
