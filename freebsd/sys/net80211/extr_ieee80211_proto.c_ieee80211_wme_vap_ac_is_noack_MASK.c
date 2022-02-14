
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211vap {TYPE_4__* iv_ic; } ;
struct TYPE_6__ {TYPE_1__* cap_wmeParams; } ;
struct TYPE_7__ {TYPE_2__ wme_chanParams; } ;
struct TYPE_8__ {TYPE_3__ ic_wme; } ;
struct TYPE_5__ {int wmep_noackPolicy; } ;


 int VAR_0 ;

int
FUNC_0(struct ieee80211vap *VAR_1, int VAR_2)
{

 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return (0);


 return (!! VAR_1->iv_ic->ic_wme.wme_chanParams.cap_wmeParams[VAR_2].wmep_noackPolicy);
}
