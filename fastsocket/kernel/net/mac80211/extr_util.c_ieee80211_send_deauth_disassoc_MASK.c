
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* reason_code; } ;
struct TYPE_9__ {TYPE_1__ deauth; } ;
typedef struct ieee80211_mgmt {TYPE_2__ u; int bssid; int sa; int da; scalar_t__ seq_ctrl; scalar_t__ duration; void* frame_control; } const ieee80211_mgmt ;
typedef struct ieee80211_mgmt u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_13__ {TYPE_5__ mgd; } ;
struct TYPE_11__ {scalar_t__ type; struct ieee80211_mgmt const* addr; } ;
struct ieee80211_sub_if_data {TYPE_6__ u; TYPE_4__ vif; struct ieee80211_local* local; } ;
struct TYPE_10__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_3__ hw; } ;
struct TYPE_14__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_1 (int) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_4 (int ,struct ieee80211_mgmt const*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_6,
        const u8 *VAR_7, u16 VAR_8, u16 VAR_9,
        bool VAR_10, u8 *VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_6->local;
 struct sk_buff *VAR_13;
 struct ieee80211_mgmt *VAR_14 = (void *)VAR_11;


 VAR_14->frame_control = FUNC_1(VAR_2 | VAR_8);
 VAR_14->duration = 0;
 VAR_14->seq_ctrl = 0;
 FUNC_4(VAR_14->da, VAR_7, VAR_0);
 FUNC_4(VAR_14->sa, VAR_6->vif.addr, VAR_0);
 FUNC_4(VAR_14->bssid, VAR_7, VAR_0);

 VAR_14->u.deauth.reason_code = FUNC_1(VAR_9);

 if (VAR_10) {
  VAR_13 = FUNC_2(VAR_12->hw.extra_tx_headroom +
        VAR_1);
  if (!VAR_13)
   return;

  FUNC_6(VAR_13, VAR_12->hw.extra_tx_headroom);


  FUNC_4(FUNC_5(VAR_13, VAR_1),
         VAR_14, VAR_1);

  if (VAR_6->vif.type != VAR_5 ||
      !(VAR_6->u.mgd.flags & VAR_3))
   FUNC_0(VAR_13)->flags |=
    VAR_4;

  FUNC_3(VAR_6, VAR_13);
 }
}
