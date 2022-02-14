
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const struct ieee80211_rateset *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_0)
  return 1;
 for (VAR_4 = 0; VAR_4 < VAR_2->rs_nrates; VAR_4++)
  if ((VAR_2->rs_rates[VAR_4] & VAR_1) == VAR_3)
   return 1;
 return 0;
}
