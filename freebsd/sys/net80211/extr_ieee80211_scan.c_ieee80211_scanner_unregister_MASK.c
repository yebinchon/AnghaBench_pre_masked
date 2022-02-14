
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scanner {int dummy; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;


 int VAR_0 ;
 struct ieee80211_scanner const** VAR_1 ;

void
FUNC_0(enum ieee80211_opmode VAR_2,
 const struct ieee80211_scanner *VAR_3)
{
 if (VAR_2 >= VAR_0)
  return;
 if (VAR_1[VAR_2] == VAR_3)
  VAR_1[VAR_2] = ((void*)0);
}
