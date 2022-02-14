
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_rateset {scalar_t__ rs_nrates; scalar_t__ rs_rates; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int) ;

uint8_t *
FUNC_1(uint8_t *VAR_2, const struct ieee80211_rateset *VAR_3)
{



 if (VAR_3->rs_nrates > VAR_1) {
  int VAR_4 = VAR_3->rs_nrates - VAR_1;
  *VAR_2++ = VAR_0;
  *VAR_2++ = VAR_4;
  FUNC_0(VAR_2, VAR_3->rs_rates + VAR_1, VAR_4);
  VAR_2 += VAR_4;
 }
 return VAR_2;
}
