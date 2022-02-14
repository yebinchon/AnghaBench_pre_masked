
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_opmode; scalar_t__ iv_roaming; int iv_flags; scalar_t__ iv_state; } ;
struct ieee80211_scan_state {struct ieee80211vap* ss_vap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_scan_state*) ;
 int FUNC_2 (struct ieee80211_scan_state*,struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_scan_state *VAR_4)
{
 struct ieee80211vap *VAR_5 = VAR_4->ss_vap;

 FUNC_1(VAR_4);
 FUNC_0(VAR_5->iv_opmode == VAR_1,
  ("wrong mode %u", VAR_5->iv_opmode));
 if (VAR_5->iv_roaming == VAR_2 &&
     (VAR_5->iv_flags & VAR_0) &&
     VAR_5->iv_state >= VAR_3)

  FUNC_2(VAR_4, VAR_5);
}
