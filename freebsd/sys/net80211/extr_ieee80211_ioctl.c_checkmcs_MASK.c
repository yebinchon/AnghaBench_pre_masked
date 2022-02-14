
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_htrateset {int rs_nrates; int* rs_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(const struct ieee80211_htrateset *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 if (VAR_3 == VAR_0)
  return 1;
 if ((VAR_3 & VAR_1) == 0)
  return 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->rs_nrates; VAR_5++)
  if (FUNC_0(VAR_2->rs_rates[VAR_5]) == VAR_4)
   return 1;
 return 0;
}
