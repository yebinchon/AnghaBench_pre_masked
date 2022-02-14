
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scanner {int dummy; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 struct ieee80211_scanner const** VAR_2 ;

const struct ieee80211_scanner *
FUNC_1(enum ieee80211_opmode VAR_3)
{
 if (VAR_3 >= VAR_0)
  return ((void*)0);
 if (VAR_2[VAR_3] == ((void*)0))
  FUNC_0(VAR_1[VAR_3]);
 return VAR_2[VAR_3];
}
