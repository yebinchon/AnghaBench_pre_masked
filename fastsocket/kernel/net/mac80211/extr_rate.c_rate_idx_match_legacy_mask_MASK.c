
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_tx_rate {int idx; } ;



__attribute__((used)) static bool FUNC_0(struct ieee80211_tx_rate *VAR_0,
           int VAR_1, u32 VAR_2)
{
 int VAR_3;


 for (VAR_3 = VAR_0->idx; VAR_3 >= 0; VAR_3--) {
  if (VAR_2 & (1 << VAR_3)) {

   VAR_0->idx = VAR_3;
   return 1;
  }
 }


 for (VAR_3 = VAR_0->idx + 1; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2 & (1 << VAR_3)) {

   VAR_0->idx = VAR_3;
   return 1;
  }
 }
 return 0;
}
