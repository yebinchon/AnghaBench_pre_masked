
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;

int
FUNC_1(const struct ieee80211_rateset *VAR_1)
{
 static const int VAR_2[] = { 2, 4, 11, 22, 12, 24, 48 };
 int VAR_3, VAR_4;

 if (VAR_1->rs_nrates < FUNC_0(VAR_2))
  return 0;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_1->rs_nrates; VAR_4++) {
   int VAR_5 = VAR_1->rs_rates[VAR_4] & VAR_0;
   if (VAR_2[VAR_3] == VAR_5)
    goto next;
   if (VAR_5 > VAR_2[VAR_3])
    return 0;
  }
  return 0;
 next:
  ;
 }
 return 1;
}
