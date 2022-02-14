
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wme_chanParams; } ;
struct ieee80211com {TYPE_1__ ic_wme; } ;
struct chanAccParams {int dummy; } ;


 int FUNC_0 (struct chanAccParams*,int *,int) ;

void
FUNC_1(struct ieee80211com *VAR_0, struct chanAccParams *VAR_1)
{

 FUNC_0(VAR_1, &VAR_0->ic_wme.wme_chanParams, sizeof(*VAR_1));
}
