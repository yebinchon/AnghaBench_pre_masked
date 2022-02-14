
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct aclstate {struct ieee80211vap* as_vap; int as_policy; int as_list; } ;


 int FUNC_0 (struct aclstate*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_5)
{
 struct aclstate *VAR_6;

 VAR_6 = (struct aclstate *) FUNC_1(sizeof(struct aclstate),
  VAR_3, VAR_1 | VAR_2);
 if (VAR_6 == ((void*)0))
  return 0;
 FUNC_0(VAR_6, "acl");
 FUNC_2(&VAR_6->as_list);
 VAR_6->as_policy = VAR_0;
 VAR_6->as_vap = VAR_5;
 VAR_5->iv_as = VAR_6;
 VAR_4++;
 return 1;
}
