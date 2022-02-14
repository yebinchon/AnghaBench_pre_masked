
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum ieee80211_phytype { ____Placeholder_ieee80211_phytype } ieee80211_phytype ;



uint8_t
FUNC_0(int VAR_0, enum ieee80211_phytype VAR_1)
{

 switch (VAR_0) {

 case 12: return 0xb;
 case 18: return 0xf;
 case 24: return 0xa;
 case 36: return 0xe;
 case 48: return 0x9;
 case 72: return 0xd;
 case 96: return 0x8;
 case 108: return 0xc;

 case 2: return 10;
 case 4: return 20;
 case 11: return 55;
 case 22: return 110;

 case 44: return 220;
 }
 return 0;
}
