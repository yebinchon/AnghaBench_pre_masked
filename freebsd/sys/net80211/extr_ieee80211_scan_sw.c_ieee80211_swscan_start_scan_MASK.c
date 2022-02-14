
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_scanner {int dummy; } ;
struct ieee80211_scan_ssid {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211_scanner const*,struct ieee80211vap*,int,int ,int ,int ,int ,struct ieee80211_scan_ssid const*) ;

__attribute__((used)) static int
FUNC_4(const struct ieee80211_scanner *VAR_0,
    struct ieee80211vap *VAR_1, int VAR_2,
    u_int VAR_3, u_int VAR_4, u_int VAR_5,
    u_int VAR_6, const struct ieee80211_scan_ssid VAR_7[])
{
 struct ieee80211com *VAR_8 = VAR_1->iv_ic;
 int VAR_9;

 FUNC_2(VAR_8);

 FUNC_0(VAR_8);
 VAR_9 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_1(VAR_8);

 return VAR_9;
}
