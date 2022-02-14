
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scanner {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_scanner const** VAR_1 ;

void
FUNC_0(const struct ieee80211_scanner *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  if (VAR_1[VAR_3] == VAR_2)
   VAR_1[VAR_3] = ((void*)0);
}
