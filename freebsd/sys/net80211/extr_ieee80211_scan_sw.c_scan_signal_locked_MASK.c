
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_task {int dummy; } ;
struct scan_state {int ss_iflags; struct timeout_task ss_scan_curchan; } ;
struct ieee80211com {int ic_tq; } ;
struct ieee80211_scan_state {struct ieee80211com* ss_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;
 int VAR_0 ;
 struct scan_state* FUNC_1 (struct ieee80211_scan_state*) ;
 scalar_t__ FUNC_2 (int ,struct timeout_task*,int *) ;
 int FUNC_3 (int ,struct timeout_task*,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_scan_state *VAR_1, int VAR_2)
{
 struct scan_state *VAR_3 = FUNC_1(VAR_1);
 struct timeout_task *VAR_4 = &VAR_3->ss_scan_curchan;
 struct ieee80211com *VAR_5 = VAR_1->ss_ic;

 FUNC_0(VAR_5);

 VAR_3->ss_iflags |= VAR_2;
 if (VAR_3->ss_iflags & VAR_0) {
  if (FUNC_2(VAR_5->ic_tq, VAR_4, ((void*)0)) == 0)
   FUNC_3(VAR_5->ic_tq, VAR_4, 0);
 }
}
