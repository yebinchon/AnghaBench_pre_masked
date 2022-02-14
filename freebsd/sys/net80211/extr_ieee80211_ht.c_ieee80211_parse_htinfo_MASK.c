
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ieee80211_node {int dummy; } ;
struct ieee80211_ie_htinfo {int dummy; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (struct ieee80211_node*,struct ieee80211_ie_htinfo const*) ;

void
FUNC_1(struct ieee80211_node *VAR_1, const uint8_t *VAR_2)
{
 if (VAR_2[0] == VAR_0)
  VAR_2 += 4;
 FUNC_0(VAR_1, (const struct ieee80211_ie_htinfo *) VAR_2);
}
