
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_ie_htcap {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (int*,struct ieee80211_node*) ;

uint8_t *
FUNC_1(uint8_t *VAR_1, struct ieee80211_node *VAR_2)
{
 VAR_1[0] = VAR_0;
 VAR_1[1] = sizeof(struct ieee80211_ie_htcap) - 2;
 return FUNC_0(VAR_1 + 2, VAR_2);
}
