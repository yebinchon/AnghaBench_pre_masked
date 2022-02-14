
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {struct ieee80211_aclator const* iv_acl; } ;
struct ieee80211req {int i_len; scalar_t__ i_type; int i_data; } ;
typedef struct ieee80211_aclator {int (* iac_remove ) (struct ieee80211vap*,int *) ;int (* iac_add ) (struct ieee80211vap*,int *) ;int (* iac_attach ) (struct ieee80211vap*) ;} const ieee80211_aclator ;
typedef int mac ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 struct ieee80211_aclator const* FUNC_1 (char*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211vap*,int *) ;
 int FUNC_4 (struct ieee80211vap*,int *) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_3, struct ieee80211req *VAR_4)
{
 uint8_t VAR_5[VAR_1];
 const struct ieee80211_aclator *VAR_6 = VAR_3->iv_acl;
 int VAR_7;

 if (VAR_4->i_len != sizeof(VAR_5))
  return VAR_0;
 VAR_7 = FUNC_0(VAR_4->i_data, VAR_5, VAR_4->i_len);
 if (VAR_7)
  return VAR_7;
 if (VAR_6 == ((void*)0)) {
  VAR_6 = FUNC_1("mac");
  if (VAR_6 == ((void*)0) || !VAR_6->iac_attach(VAR_3))
   return VAR_0;
  VAR_3->iv_acl = VAR_6;
 }
 if (VAR_4->i_type == VAR_2)
  VAR_6->iac_add(VAR_3, VAR_5);
 else
  VAR_6->iac_remove(VAR_3, VAR_5);
 return 0;
}
