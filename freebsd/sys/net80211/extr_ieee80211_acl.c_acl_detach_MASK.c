
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct aclstate {int dummy; } ;


 int FUNC_0 (struct aclstate*) ;
 int FUNC_1 (struct aclstate*,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct ieee80211vap*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct ieee80211vap *VAR_2)
{
 struct aclstate *VAR_3 = VAR_2->iv_as;

 FUNC_2(VAR_1 > 0, ("imbalanced attach/detach"));
 VAR_1--;

 FUNC_3(VAR_2);
 VAR_2->iv_as = ((void*)0);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_0);
}
