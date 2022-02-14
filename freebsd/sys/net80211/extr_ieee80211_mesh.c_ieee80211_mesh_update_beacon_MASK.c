
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; } ;
struct ieee80211_beacon_offsets {int bo_flags; int bo_meshconf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct ieee80211vap*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(struct ieee80211vap *VAR_2,
 struct ieee80211_beacon_offsets *VAR_3)
{
 FUNC_0(VAR_2->iv_opmode == VAR_1, ("not a MBSS vap"));

 if (FUNC_3(VAR_3->bo_flags, VAR_0)) {
  (void)FUNC_2(VAR_3->bo_meshconf, VAR_2);
  FUNC_1(VAR_3->bo_flags, VAR_0);
 }
}
