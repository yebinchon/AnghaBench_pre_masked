
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_flags_ht; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int dummy; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211com*,int) ;

void
FUNC_3(struct ieee80211vap *VAR_0, int VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_0->iv_ic;

 FUNC_0(VAR_2);
 if (VAR_1 < 0) {
  VAR_1 = -VAR_1;
  VAR_0->iv_flags_ht &= ~VAR_1;
 } else
  VAR_0->iv_flags_ht |= VAR_1;
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(VAR_2);
}
