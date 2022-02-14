
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_channel {int ic_minpower; int ic_maxpower; } ;


 int VAR_0 ;

__attribute__((used)) static uint8_t *
FUNC_0(uint8_t *VAR_1, const struct ieee80211_channel *VAR_2)
{
 VAR_1[0] = VAR_0;
 VAR_1[1] = 2;
 VAR_1[2] = VAR_2->ic_minpower;
 VAR_1[3] = VAR_2->ic_maxpower;
 return VAR_1 + 4;
}
