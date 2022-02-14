
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;


 int VAR_0 ;

__attribute__((used)) static __inline int
FUNC_0(const struct ieee80211_rateset *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rs_nrates; VAR_3++)
  if ((VAR_1->rs_rates[VAR_3] & VAR_0) == VAR_2)
   return VAR_3;
 return -1;
}
