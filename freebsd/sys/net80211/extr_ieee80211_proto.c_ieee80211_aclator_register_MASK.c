
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_aclator {char* iac_name; } ;


 struct ieee80211_aclator const* VAR_0 ;
 int FUNC_0 (char*,char*) ;

void
FUNC_1(const struct ieee80211_aclator *VAR_1)
{
 FUNC_0("wlan: %s acl policy registered\n", VAR_1->iac_name);
 VAR_0 = VAR_1;
}
