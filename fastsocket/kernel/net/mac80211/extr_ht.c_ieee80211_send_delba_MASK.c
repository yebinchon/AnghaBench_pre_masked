
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_13__ {int const* bssid; } ;
struct TYPE_11__ {int const* bssid; } ;
struct TYPE_14__ {TYPE_4__ ibss; TYPE_2__ mgd; } ;
struct TYPE_12__ {scalar_t__ type; int const* addr; } ;
struct ieee80211_sub_if_data {TYPE_5__ u; TYPE_3__ vif; struct ieee80211_local* local; } ;
struct TYPE_15__ {void* reason_code; void* params; int action_code; } ;
struct TYPE_16__ {TYPE_6__ delba; } ;
struct TYPE_17__ {TYPE_7__ u; int category; } ;
struct TYPE_18__ {TYPE_8__ action; } ;
struct ieee80211_mgmt {TYPE_9__ u; void* frame_control; int bssid; int sa; int da; } ;
struct TYPE_10__ {scalar_t__ extra_tx_headroom; } ;
struct ieee80211_local {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,int) ;
 int FUNC_3 (int ,int const*,int ) ;
 int FUNC_4 (struct ieee80211_mgmt*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;

void FUNC_7(struct ieee80211_sub_if_data *VAR_10,
     const u8 *VAR_11, u16 VAR_12,
     u16 VAR_13, u16 VAR_14)
{
 struct ieee80211_local *VAR_15 = VAR_10->local;
 struct sk_buff *VAR_16;
 struct ieee80211_mgmt *VAR_17;
 u16 VAR_18;

 VAR_16 = FUNC_1(sizeof(*VAR_17) + VAR_15->hw.extra_tx_headroom);
 if (!VAR_16)
  return;

 FUNC_6(VAR_16, VAR_15->hw.extra_tx_headroom);
 VAR_17 = (struct ieee80211_mgmt *) FUNC_5(VAR_16, 24);
 FUNC_4(VAR_17, 0, 24);
 FUNC_3(VAR_17->da, VAR_11, VAR_0);
 FUNC_3(VAR_17->sa, VAR_10->vif.addr, VAR_0);
 if (VAR_10->vif.type == VAR_4 ||
     VAR_10->vif.type == VAR_5 ||
     VAR_10->vif.type == VAR_6)
  FUNC_3(VAR_17->bssid, VAR_10->vif.addr, VAR_0);
 else if (VAR_10->vif.type == VAR_7)
  FUNC_3(VAR_17->bssid, VAR_10->u.mgd.bssid, VAR_0);
 else if (VAR_10->vif.type == VAR_3)
  FUNC_3(VAR_17->bssid, VAR_10->u.ibss.bssid, VAR_0);

 VAR_17->frame_control = FUNC_0(VAR_1 |
       VAR_2);

 FUNC_5(VAR_16, 1 + sizeof(VAR_17->u.action.u.delba));

 VAR_17->u.action.category = VAR_9;
 VAR_17->u.action.u.delba.action_code = VAR_8;
 VAR_18 = (u16)(VAR_13 << 11);
 VAR_18 |= (u16)(VAR_12 << 12);

 VAR_17->u.action.u.delba.params = FUNC_0(VAR_18);
 VAR_17->u.action.u.delba.reason_code = FUNC_0(VAR_14);

 FUNC_2(VAR_10, VAR_16, VAR_12);
}
