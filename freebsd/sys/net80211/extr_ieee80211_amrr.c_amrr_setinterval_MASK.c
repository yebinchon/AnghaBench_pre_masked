
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_amrr* iv_rs; } ;
struct ieee80211_amrr {int amrr_interval; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(const struct ieee80211vap *VAR_0, int VAR_1)
{
 struct ieee80211_amrr *VAR_2 = VAR_0->iv_rs;

 if (!VAR_2)
  return;

 if (VAR_1 < 100)
  VAR_1 = 100;
 VAR_2->amrr_interval = FUNC_0(VAR_1);
}
