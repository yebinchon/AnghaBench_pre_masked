
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_rateset {int rs_nrates; int rs_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

uint8_t *
FUNC_1(uint8_t *VAR_2, const struct ieee80211_rateset *VAR_3)
{
 int VAR_4;

 *VAR_2++ = VAR_0;
 VAR_4 = VAR_3->rs_nrates;
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 *VAR_2++ = VAR_4;
 FUNC_0(VAR_2, VAR_3->rs_rates, VAR_4);
 return VAR_2 + VAR_4;
}
