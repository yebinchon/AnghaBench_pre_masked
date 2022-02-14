
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct aclstate {int as_policy; } ;



__attribute__((used)) static int
FUNC_0(struct ieee80211vap *VAR_0)
{
 struct aclstate *VAR_1 = VAR_0->iv_as;

 return VAR_1->as_policy;
}
