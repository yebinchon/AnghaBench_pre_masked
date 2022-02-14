
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211com {int ic_flags; struct ieee80211_scan_state* ic_scan; int ic_tq; } ;
struct ieee80211_scan_state {TYPE_1__* ss_ops; } ;
struct TYPE_5__ {int ss_scan_curchan; int ss_scan_start; } ;
struct TYPE_4__ {int (* scan_detach ) (struct ieee80211_scan_state*) ;} ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct ieee80211_scan_state*) ;
 int FUNC_3 (struct ieee80211com*,int *) ;
 int FUNC_4 (struct ieee80211_scan_state*,int ) ;
 int FUNC_5 (struct ieee80211_scan_state*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211com *VAR_3)
{
 struct ieee80211_scan_state *VAR_4 = VAR_3->ic_scan;

 if (VAR_4 != ((void*)0)) {
  FUNC_4(VAR_4, VAR_1);
  FUNC_3(VAR_3, &FUNC_2(VAR_4)->ss_scan_start);
  FUNC_6(VAR_3->ic_tq,
      &FUNC_2(VAR_4)->ss_scan_curchan);
  FUNC_1((VAR_3->ic_flags & VAR_0) == 0,
      ("scan still running"));
  if (VAR_4->ss_ops != ((void*)0)) {
   VAR_4->ss_ops->scan_detach(VAR_4);
   VAR_4->ss_ops = ((void*)0);
  }
  VAR_3->ic_scan = ((void*)0);
  FUNC_0(FUNC_2(VAR_4), VAR_2);
 }
}
