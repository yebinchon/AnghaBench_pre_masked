
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ probe_send_count; int nullfunc_failed; } ;
struct TYPE_5__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {int work; TYPE_3__* local; TYPE_2__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_6__ {int hw; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_0,
        struct ieee80211_hdr *VAR_1, bool VAR_2)
{
 if (!FUNC_0(VAR_1->frame_control))
     return;

 if (FUNC_1(VAR_1->frame_control) &&
     VAR_0->u.mgd.probe_send_count > 0) {
  if (VAR_2)
   FUNC_3(VAR_0);
  else
   VAR_0->u.mgd.nullfunc_failed = 1;
  FUNC_2(&VAR_0->local->hw, &VAR_0->work);
  return;
 }

 if (VAR_2)
  FUNC_3(VAR_0);
}
