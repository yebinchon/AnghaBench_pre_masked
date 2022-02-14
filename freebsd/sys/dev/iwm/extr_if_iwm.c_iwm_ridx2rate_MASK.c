
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211_rateset {int rs_nrates; int* rs_rates; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

uint8_t
FUNC_0(struct ieee80211_rateset *VAR_2, int VAR_3)
{
 int VAR_4;
 uint8_t VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->rs_nrates; VAR_4++) {
  VAR_5 = (VAR_2->rs_rates[VAR_4] & VAR_0);
  if (VAR_5 == VAR_1[VAR_3].rate)
   return VAR_2->rs_rates[VAR_4];
 }

 return 0;
}
