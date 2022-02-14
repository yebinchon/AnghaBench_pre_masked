
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_state {int ss_iflags; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {int ss_flags; struct ieee80211vap* ss_vap; } ;


 int FUNC_0 (struct ieee80211vap*,int ,char*,char const*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211com*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211com*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct scan_state* FUNC_3 (struct ieee80211_scan_state*) ;
 int FUNC_4 (struct ieee80211_scan_state*,int) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211vap *VAR_6, int VAR_7, const char *VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_6->iv_ic;
 struct ieee80211_scan_state *VAR_10 = VAR_9->ic_scan;
 struct scan_state *VAR_11 = FUNC_3(VAR_10);
 int VAR_12;

 FUNC_1(VAR_9);
 VAR_12 = VAR_7 ? VAR_5 : VAR_4;
 if ((VAR_9->ic_flags & VAR_0) &&
     (VAR_7 || VAR_10->ss_vap == VAR_6) &&
     (VAR_11->ss_iflags & VAR_12) == 0) {
  FUNC_0(VAR_6, VAR_1,
      "%s: %s %s scan\n", VAR_8,
      VAR_7 ? "pause" : "cancel",
      VAR_10->ss_flags & VAR_2 ?
   "active" : "passive");


  VAR_10->ss_flags &= ~VAR_3;

  FUNC_4(VAR_10, VAR_12);
 } else {
  FUNC_0(VAR_6, VAR_1,
      "%s: called; F_SCAN=%d, vap=%s, signal=%d\n",
   VAR_8,
   !! (VAR_9->ic_flags & VAR_0),
   (VAR_10->ss_vap == VAR_6 ? "match" : "nomatch"),
   !! (VAR_11->ss_iflags & VAR_12));
 }
 FUNC_2(VAR_9);
}
