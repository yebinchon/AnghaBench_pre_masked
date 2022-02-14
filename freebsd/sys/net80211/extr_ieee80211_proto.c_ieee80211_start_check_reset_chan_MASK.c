
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_curchan; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct ieee80211vap *VAR_2)
{
 struct ieee80211com *VAR_3 = VAR_2->iv_ic;

 if ((VAR_2->iv_opmode == VAR_1 &&
      FUNC_0(VAR_3->ic_curchan)) ||
     (VAR_2->iv_opmode == VAR_0 &&
      FUNC_1(VAR_3->ic_curchan)))
  return (1);
 return (0);
}
