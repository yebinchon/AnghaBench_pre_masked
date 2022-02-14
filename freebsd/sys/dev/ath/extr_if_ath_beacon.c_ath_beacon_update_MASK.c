
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_beacon_offsets {int bo_flags; } ;
struct ieee80211vap {struct ieee80211_beacon_offsets iv_bcn_off; } ;


 int FUNC_0 (int ,int) ;

void
FUNC_1(struct ieee80211vap *VAR_0, int VAR_1)
{
 struct ieee80211_beacon_offsets *VAR_2 = &VAR_0->iv_bcn_off;

 FUNC_0(VAR_2->bo_flags, VAR_1);
}
