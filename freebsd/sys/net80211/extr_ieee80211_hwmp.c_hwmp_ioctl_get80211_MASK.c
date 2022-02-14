
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211_hwmp_state* iv_hwmp; } ;
struct ieee80211req {int i_type; int i_val; } ;
struct ieee80211_hwmp_state {int hs_maxhops; int hs_rootmode; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct ieee80211vap *VAR_2, struct ieee80211req *VAR_3)
{
 struct ieee80211_hwmp_state *VAR_4 = VAR_2->iv_hwmp;
 int VAR_5;

 if (VAR_2->iv_opmode != VAR_1)
  return VAR_0;
 VAR_5 = 0;
 switch (VAR_3->i_type) {
 case 128:
  VAR_3->i_val = VAR_4->hs_rootmode;
  break;
 case 129:
  VAR_3->i_val = VAR_4->hs_maxhops;
  break;
 default:
  return VAR_0;
 }
 return VAR_5;
}
