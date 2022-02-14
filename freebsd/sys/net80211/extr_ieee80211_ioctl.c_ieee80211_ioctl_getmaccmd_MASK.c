
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_aclator* iv_acl; } ;
struct ieee80211req {int dummy; } ;
struct ieee80211_aclator {int (* iac_getioctl ) (struct ieee80211vap*,struct ieee80211req*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,struct ieee80211req*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_1, struct ieee80211req *VAR_2)
{
 const struct ieee80211_aclator *VAR_3 = VAR_1->iv_acl;

 return (VAR_3 == ((void*)0) ? VAR_0 : VAR_3->iac_getioctl(VAR_1, VAR_2));
}
