
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_scan_ssid {scalar_t__ len; int ssid; } ;
struct ieee80211_node {scalar_t__ ni_esslen; int ni_essid; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const struct ieee80211_node *VAR_0,
 int VAR_1, const struct ieee80211_scan_ssid VAR_2[])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0->ni_esslen == VAR_2[VAR_3].len &&
       FUNC_0(VAR_0->ni_essid, VAR_2[VAR_3].ssid, VAR_0->ni_esslen) == 0)
   return 1;
 }
 return 0;
}
