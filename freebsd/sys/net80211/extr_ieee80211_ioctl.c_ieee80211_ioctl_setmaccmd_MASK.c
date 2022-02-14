
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_aclator const* iv_acl; } ;
struct ieee80211req {int i_val; } ;
typedef struct ieee80211_aclator {int (* iac_setioctl ) (struct ieee80211vap*,struct ieee80211req*) ;int (* iac_detach ) (struct ieee80211vap*) ;int (* iac_flush ) (struct ieee80211vap*) ;int (* iac_setpolicy ) (struct ieee80211vap*,int) ;int (* iac_attach ) (struct ieee80211vap*) ;} const ieee80211_aclator ;


 int VAR_0 ;






 struct ieee80211_aclator const* FUNC_0 (char*) ;
 int FUNC_1 (struct ieee80211vap*) ;
 int FUNC_2 (struct ieee80211vap*,int) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (struct ieee80211vap*,struct ieee80211req*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_1, struct ieee80211req *VAR_2)
{
 const struct ieee80211_aclator *VAR_3 = VAR_1->iv_acl;

 switch (VAR_2->i_val) {
 case 129:
 case 131:
 case 130:
 case 128:
  if (VAR_3 == ((void*)0)) {
   VAR_3 = FUNC_0("mac");
   if (VAR_3 == ((void*)0) || !VAR_3->iac_attach(VAR_1))
    return VAR_0;
   VAR_1->iv_acl = VAR_3;
  }
  VAR_3->iac_setpolicy(VAR_1, VAR_2->i_val);
  break;
 case 132:
  if (VAR_3 != ((void*)0))
   VAR_3->iac_flush(VAR_1);

  break;
 case 133:
  if (VAR_3 != ((void*)0)) {
   VAR_1->iv_acl = ((void*)0);
   VAR_3->iac_detach(VAR_1);
  }
  break;
 default:
  if (VAR_3 == ((void*)0))
   return VAR_0;
  else
   return VAR_3->iac_setioctl(VAR_1, VAR_2);
 }
 return 0;
}
