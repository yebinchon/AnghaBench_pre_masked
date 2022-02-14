
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_freq_range {scalar_t__ end_freq_khz; scalar_t__ start_freq_khz; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct ieee80211_freq_range *VAR_1,
         u32 VAR_2)
{






 u32 VAR_3 = VAR_2 > 45 * 1000000 ?
   10 * 1000000 : 2 * 1000000;
 if (FUNC_0(VAR_2 - VAR_1->start_freq_khz) <= VAR_3)
  return 1;
 if (FUNC_0(VAR_2 - VAR_1->end_freq_khz) <= VAR_3)
  return 1;
 return 0;

}
