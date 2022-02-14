
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211_scan_state {TYPE_2__* ss_ops; } ;
typedef int ieee80211_scan_iter_func ;
struct TYPE_4__ {int (* scan_iterate ) (struct ieee80211_scan_state*,int *,void*) ;} ;
struct TYPE_3__ {struct ieee80211_scan_state* ic_scan; } ;


 int FUNC_0 (struct ieee80211_scan_state*,int *,void*) ;

void
FUNC_1(struct ieee80211vap *VAR_0,
 ieee80211_scan_iter_func *VAR_1, void *VAR_2)
{
 struct ieee80211_scan_state *VAR_3 = VAR_0->iv_ic->ic_scan;

 if (VAR_3->ss_ops != ((void*)0))
  VAR_3->ss_ops->scan_iterate(VAR_3, VAR_1, VAR_2);
}
