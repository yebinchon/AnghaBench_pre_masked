
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct ieee80211_frame {int i_addr2; } ;
struct aclstate {int as_policy; } ;






 int * FUNC_0 (struct aclstate*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_0, const struct ieee80211_frame *VAR_1)
{
 struct aclstate *VAR_2 = VAR_0->iv_as;

 switch (VAR_2->as_policy) {
 case 129:
 case 128:
  return 1;
 case 131:
  return FUNC_0(VAR_2, VAR_1->i_addr2) != ((void*)0);
 case 130:
  return FUNC_0(VAR_2, VAR_1->i_addr2) == ((void*)0);
 }
 return 0;
}
