
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ps_data {int bc_buf; int num_sta_ps; } ;
struct ieee80211_tx_info {int hw_queue; int flags; } ;
struct ieee80211_tx_data {TYPE_5__* skb; TYPE_6__* local; TYPE_7__* sdata; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_17__ {scalar_t__ type; int cab_queue; } ;
struct TYPE_11__ {struct ps_data ps; } ;
struct TYPE_12__ {TYPE_2__ mesh; } ;
struct TYPE_16__ {TYPE_8__ vif; TYPE_3__ u; TYPE_1__* bss; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_15__ {scalar_t__ total_ps_buffered; TYPE_4__ hw; } ;
struct TYPE_14__ {scalar_t__ data; } ;
struct TYPE_10__ {struct ps_data ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (TYPE_5__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*,char*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_5__*) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_10(struct ieee80211_tx_data *VAR_9)
{
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_9->skb);
 struct ieee80211_hdr *VAR_11 = (struct ieee80211_hdr *)VAR_9->skb->data;
 struct ps_data *VAR_12;
 if (VAR_9->sdata->vif.type == VAR_4 ||
     VAR_9->sdata->vif.type == VAR_5) {
  if (!VAR_9->sdata->bss)
   return VAR_7;

  VAR_12 = &VAR_9->sdata->bss->ps;
 } else if (FUNC_4(&VAR_9->sdata->vif)) {
  VAR_12 = &VAR_9->sdata->u.mesh.ps;
 } else {
  return VAR_7;
 }



 if (FUNC_3(VAR_11->frame_control))
  return VAR_7;


 if (!FUNC_1(&VAR_12->num_sta_ps))
  return VAR_7;

 VAR_10->flags |= VAR_3;
 if (VAR_9->local->hw.flags & VAR_2)
  VAR_10->hw_queue = VAR_9->sdata->vif.cab_queue;


 if (!(VAR_9->local->hw.flags & VAR_1))
  return VAR_7;


 if (VAR_9->local->total_ps_buffered >= VAR_6)
  FUNC_6(VAR_9->local);

 if (FUNC_8(&VAR_12->bc_buf) >= VAR_0) {
  FUNC_5(VAR_9->sdata,
         "BC TX buffer full - dropping the oldest frame\n");
  FUNC_2(FUNC_7(&VAR_12->bc_buf));
 } else
  VAR_9->local->total_ps_buffered++;

 FUNC_9(&VAR_12->bc_buf, VAR_9->skb);

 return VAR_8;
}
