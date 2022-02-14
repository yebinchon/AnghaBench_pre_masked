
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211_hwmp_state* iv_hwmp; } ;
struct ieee80211req {int i_type; int i_val; } ;
struct ieee80211_hwmp_state {int hs_rootmode; int hs_maxhops; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211vap*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_3, struct ieee80211req *VAR_4)
{
 struct ieee80211_hwmp_state *VAR_5 = VAR_3->iv_hwmp;
 int VAR_6;

 if (VAR_3->iv_opmode != VAR_2)
  return VAR_1;
 VAR_6 = 0;
 switch (VAR_4->i_type) {
 case 128:
  if (VAR_4->i_val < 0 || VAR_4->i_val > 3)
   return VAR_0;
  VAR_5->hs_rootmode = VAR_4->i_val;
  FUNC_0(VAR_3);
  break;
 case 129:
  if (VAR_4->i_val <= 0 || VAR_4->i_val > 255)
   return VAR_0;
  VAR_5->hs_maxhops = VAR_4->i_val;
  break;
 default:
  return VAR_1;
 }
 return VAR_6;
}
