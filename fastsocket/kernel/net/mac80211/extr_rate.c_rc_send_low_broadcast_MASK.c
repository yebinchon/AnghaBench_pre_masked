
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_supported_band {int n_bitrates; } ;
typedef int s8 ;



__attribute__((used)) static void FUNC_0(s8 *VAR_0, u32 VAR_1,
      struct ieee80211_supported_band *VAR_2)
{
 u8 VAR_3;

 if (VAR_1 == 0)
  return;
 if (*VAR_0 < 0)
  return;
 if (VAR_1 & (1 << *VAR_0))
  return;

 for (VAR_3 = *VAR_0 + 1; VAR_3 <= VAR_2->n_bitrates; VAR_3++) {
  if (VAR_1 & (1 << VAR_3)) {
   *VAR_0 = VAR_3;
   return;
  }
 }


}
