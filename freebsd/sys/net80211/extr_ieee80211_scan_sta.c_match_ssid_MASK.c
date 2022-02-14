
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_scan_ssid {int len; int ssid; } ;


 scalar_t__ FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const uint8_t *VAR_0,
 int VAR_1, const struct ieee80211_scan_ssid VAR_2[])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(VAR_0, VAR_2[VAR_3].ssid, VAR_2[VAR_3].len))
   return 1;
 }
 return 0;
}
