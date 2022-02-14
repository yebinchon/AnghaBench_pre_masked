
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct aclstate* iv_as; } ;
struct aclstate {int as_policy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211vap*,int ,char*,int) ;




 int VAR_5 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_6, int VAR_7)
{
 struct aclstate *VAR_8 = VAR_6->iv_as;

 FUNC_0(VAR_6, VAR_5,
  "ACL: set policy to %u\n", VAR_7);

 switch (VAR_7) {
 case 129:
  VAR_8->as_policy = VAR_2;
  break;
 case 131:
  VAR_8->as_policy = VAR_0;
  break;
 case 130:
  VAR_8->as_policy = VAR_1;
  break;
 case 128:
  VAR_8->as_policy = VAR_3;
  break;
 default:
  return VAR_4;
 }
 return 0;
}
