
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_tx_queue_params {int aifs; int acm; int uapsd; int txop; void* cw_max; void* cw_min; } ;
struct TYPE_9__ {int qos; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct ieee80211_if_managed {int flags; int uapsd_queues; int wmm_last_param_set; } ;
struct TYPE_6__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int wmm_acm; TYPE_5__ vif; struct ieee80211_tx_queue_params* tx_conf; TYPE_1__ u; } ;
struct TYPE_8__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_3__ hw; TYPE_2__* ops; } ;
typedef int params ;
struct TYPE_7__ {int conf_tx; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,struct ieee80211_tx_queue_params*) ;
 void* FUNC_2 (int const) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct ieee80211_tx_queue_params*,int ,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int,int,int,int,void*,void*,int ,int) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*,int) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_local *VAR_6,
         struct ieee80211_sub_if_data *VAR_7,
         const u8 *VAR_8, size_t VAR_9)
{
 struct ieee80211_tx_queue_params VAR_10;
 struct ieee80211_if_managed *VAR_11 = &VAR_7->u.mgd;
 size_t VAR_12;
 int VAR_13;
 const u8 *VAR_14;
 u8 VAR_15 = 0;

 if (!VAR_6->ops->conf_tx)
  return 0;

 if (VAR_6->hw.queues < VAR_0)
  return 0;

 if (!VAR_8)
  return 0;

 if (VAR_9 < 8 || VAR_8[5] != 1)
  return 0;

 if (VAR_11->flags & VAR_1)
  VAR_15 = VAR_11->uapsd_queues;

 VAR_13 = VAR_8[6] & 0x0f;
 if (VAR_13 == VAR_11->wmm_last_param_set)
  return 0;
 VAR_11->wmm_last_param_set = VAR_13;

 VAR_14 = VAR_8 + 8;
 VAR_12 = VAR_9 - 8;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));

 VAR_7->wmm_acm = 0;
 for (; VAR_12 >= 4; VAR_12 -= 4, VAR_14 += 4) {
  int VAR_16 = (VAR_14[0] >> 5) & 0x03;
  int VAR_17 = (VAR_14[0] >> 4) & 0x01;
  bool VAR_18 = 0;
  int VAR_19;

  switch (VAR_16) {
  case 1:
   VAR_19 = 3;
   if (VAR_17)
    VAR_7->wmm_acm |= FUNC_0(1) | FUNC_0(2);
   if (VAR_15 & VAR_3)
    VAR_18 = 1;
   break;
  case 2:
   VAR_19 = 1;
   if (VAR_17)
    VAR_7->wmm_acm |= FUNC_0(4) | FUNC_0(5);
   if (VAR_15 & VAR_4)
    VAR_18 = 1;
   break;
  case 3:
   VAR_19 = 0;
   if (VAR_17)
    VAR_7->wmm_acm |= FUNC_0(6) | FUNC_0(7);
   if (VAR_15 & VAR_5)
    VAR_18 = 1;
   break;
  case 0:
  default:
   VAR_19 = 2;
   if (VAR_17)
    VAR_7->wmm_acm |= FUNC_0(0) | FUNC_0(3);
   if (VAR_15 & VAR_2)
    VAR_18 = 1;
   break;
  }

  VAR_10.aifs = VAR_14[0] & 0x0f;
  VAR_10.cw_max = FUNC_2((VAR_14[1] & 0xf0) >> 4);
  VAR_10.cw_min = FUNC_2(VAR_14[1] & 0x0f);
  VAR_10.txop = FUNC_3(VAR_14 + 2);
  VAR_10.acm = VAR_17;
  VAR_10.uapsd = VAR_18;

  FUNC_5(VAR_7,
    "WMM queue=%d aci=%d acm=%d aifs=%d cWmin=%d cWmax=%d txop=%d uapsd=%d\n",
    VAR_19, VAR_16, VAR_17,
    VAR_10.aifs, VAR_10.cw_min, VAR_10.cw_max,
    VAR_10.txop, VAR_10.uapsd);
  VAR_7->tx_conf[VAR_19] = VAR_10;
  if (FUNC_1(VAR_6, VAR_7, VAR_19, &VAR_10))
   FUNC_6(VAR_7,
      "failed to set TX queue parameters for queue %d\n",
      VAR_19);
 }


 VAR_7->vif.bss_conf.qos = 1;
 return 1;
}
