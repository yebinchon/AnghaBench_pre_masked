
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum ieee80211_phytype { ____Placeholder_ieee80211_phytype } ieee80211_phytype ;


 int VAR_0 ;
 int VAR_1 ;

uint8_t
FUNC_0(uint8_t VAR_2, enum ieee80211_phytype VAR_3)
{
 if (VAR_3 == VAR_1) {
  static const uint8_t VAR_4[16] = {
   [0xb] = 12,
   [0xf] = 18,
   [0xa] = 24,
   [0xe] = 36,
   [0x9] = 48,
   [0xd] = 72,
   [0x8] = 96,
   [0xc] = 108
  };
  return VAR_4[VAR_2 & 0xf];
 }
 if (VAR_3 == VAR_0) {
  static const uint8_t VAR_5[16] = {
   [0xa] = 2,
   [0x4] = 4,
   [0x7] = 11,
   [0xe] = 22,
   [0xc] = 44,
  };
  return VAR_5[VAR_2 & 0xf];
 }
 return 0;
}
