
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {TYPE_1__* ic_scan_methods; } ;
struct TYPE_2__ {int (* sc_detach ) (struct ieee80211com*) ;} ;


 int FUNC_0 (struct ieee80211com*) ;

void
FUNC_1(struct ieee80211com *VAR_0)
{







 VAR_0->ic_scan_methods->sc_detach(VAR_0);
}
