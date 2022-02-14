
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct aclstate {int as_list; } ;
struct acl {int dummy; } ;


 int FUNC_0 (struct aclstate*) ;
 int FUNC_1 (struct aclstate*) ;
 int FUNC_2 (struct ieee80211vap*,int ,char*,char*) ;
 int VAR_0 ;
 struct acl* FUNC_3 (int *) ;
 int FUNC_4 (struct aclstate*,struct acl*) ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_1)
{
 struct aclstate *VAR_2 = VAR_1->iv_as;
 struct acl *VAR_3;

 FUNC_2(VAR_1, VAR_0, "ACL: %s\n", "free all");

 FUNC_0(VAR_2);
 while ((VAR_3 = FUNC_3(&VAR_2->as_list)) != ((void*)0))
  FUNC_4(VAR_2, VAR_3);
 FUNC_1(VAR_2);

 return 0;
}
