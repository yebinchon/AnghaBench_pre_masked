
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_htrateset {int rs_nrates; int* rs_rates; } ;



__attribute__((used)) static uint32_t
FUNC_0(const struct ieee80211_htrateset *VAR_0)
{
 uint32_t VAR_1;
 int VAR_2;

 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->rs_nrates; VAR_2++) {
  if (VAR_0->rs_rates[VAR_2] < 16)
   VAR_1 |= 1<<VAR_0->rs_rates[VAR_2];
 }
 return VAR_1;
}
