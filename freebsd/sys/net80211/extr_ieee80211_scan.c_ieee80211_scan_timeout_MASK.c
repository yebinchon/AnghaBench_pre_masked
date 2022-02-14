
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scan_state {TYPE_1__* ss_ops; } ;
struct TYPE_2__ {int (* scan_age ) (struct ieee80211_scan_state*) ;} ;


 int FUNC_0 (struct ieee80211_scan_state*) ;

void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct ieee80211_scan_state *VAR_1 = VAR_0->ic_scan;

 if (VAR_1->ss_ops != ((void*)0))
  VAR_1->ss_ops->scan_age(VAR_1);
}
