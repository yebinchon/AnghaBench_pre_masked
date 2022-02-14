
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_ie_htcap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int*,struct ieee80211_node*) ;

uint8_t *
FUNC_1(uint8_t *VAR_3, struct ieee80211_node *VAR_4)
{
 VAR_3[0] = VAR_2;
 VAR_3[1] = 4 + sizeof(struct ieee80211_ie_htcap) - 2;
 VAR_3[2] = (VAR_0 >> 0) & 0xff;
 VAR_3[3] = (VAR_0 >> 8) & 0xff;
 VAR_3[4] = (VAR_0 >> 16) & 0xff;
 VAR_3[5] = VAR_1;
 return FUNC_0(VAR_3 + 6, VAR_4);
}
