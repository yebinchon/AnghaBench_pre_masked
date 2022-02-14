
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct openbsd_driver_data {int sock; int ifname; } ;
struct ieee80211_bssid {int i_bssid; int i_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct ieee80211_bssid*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2, u8 *VAR_3)
{
 struct openbsd_driver_data *VAR_4 = VAR_2;
 struct ieee80211_bssid VAR_5;

 FUNC_2(VAR_5.i_name, VAR_4->ifname, sizeof(VAR_5.i_name));
 if (FUNC_0(VAR_4->sock, VAR_1, &VAR_5) < 0)
  return -1;

 FUNC_1(VAR_3, VAR_5.i_bssid, VAR_0);
 return 0;
}
