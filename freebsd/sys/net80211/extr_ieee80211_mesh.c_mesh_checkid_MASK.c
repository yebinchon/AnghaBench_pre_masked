
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ieee80211_node {scalar_t__ ni_mllid; } ;



__attribute__((used)) static void
FUNC_0(void *VAR_0, struct ieee80211_node *VAR_1)
{
 uint16_t *VAR_2 = VAR_0;

 if (*VAR_2 == VAR_1->ni_mllid)
  *(uint16_t *)VAR_0 = 0;
}
