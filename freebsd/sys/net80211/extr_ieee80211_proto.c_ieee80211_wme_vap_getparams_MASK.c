
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211vap {TYPE_2__* iv_ic; } ;
struct chanAccParams {int dummy; } ;
struct TYPE_3__ {int wme_chanParams; } ;
struct TYPE_4__ {TYPE_1__ ic_wme; } ;


 int FUNC_0 (struct chanAccParams*,int *,int) ;

void
FUNC_1(struct ieee80211vap *VAR_0, struct chanAccParams *VAR_1)
{

 FUNC_0(VAR_1, &VAR_0->iv_ic->ic_wme.wme_chanParams, sizeof(*VAR_1));
}
