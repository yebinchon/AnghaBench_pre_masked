
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_state {int ss_iflags; scalar_t__ ss_scanend; } ;
struct ieee80211vap {int iv_flags_ext; int (* iv_sta_ps ) (struct ieee80211vap*,int ) ;} ;
struct ieee80211com {int ic_flags_ext; int ic_flags; } ;
struct ieee80211_scan_state {scalar_t__ ss_next; scalar_t__ ss_last; int ss_flags; struct ieee80211vap* ss_vap; struct ieee80211com* ss_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct scan_state* FUNC_2 (struct ieee80211_scan_state*) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ieee80211vap*,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_scan_state *VAR_8, int VAR_9)
{
 struct scan_state *VAR_10 = FUNC_2(VAR_8);
 struct ieee80211com *VAR_11 = VAR_8->ss_ic;
 struct ieee80211vap *VAR_12 = VAR_8->ss_vap;

 FUNC_0(VAR_11);







 VAR_11->ic_flags &= ~VAR_2;
 if (VAR_9) {




  if ((VAR_12->iv_flags_ext & VAR_1) == 0)
   VAR_12->iv_sta_ps(VAR_12, 0);
  if (VAR_8->ss_next >= VAR_8->ss_last)
   VAR_11->ic_flags_ext &= ~VAR_0;


  if (!(VAR_10->ss_iflags & VAR_6))
   FUNC_3(VAR_12);
 }
 VAR_10->ss_iflags &= ~(VAR_7 | VAR_5);
 VAR_10->ss_scanend = 0;
 VAR_8->ss_flags &= ~(VAR_3 | VAR_4);
 FUNC_1(VAR_11);

}
