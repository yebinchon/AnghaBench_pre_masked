
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_des_ssid; int iv_des_nssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int ,int ,int ,int ,int ,int ) ;

int
FUNC_1(struct ieee80211vap *VAR_2)
{
 return FUNC_0(VAR_2,
     VAR_0,
     VAR_1, 0, 0,
     VAR_2->iv_des_nssid, VAR_2->iv_des_ssid);
}
