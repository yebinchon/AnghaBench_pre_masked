
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ieee80211_tx_queue_params {int cw_max; int cw_min; int txop; int aifs; int uapsd; } ;
struct TYPE_11__ {int qos; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_5__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sub_if_data {int flags; TYPE_6__ vif; struct ieee80211_tx_queue_params* tx_conf; struct ieee80211_local* local; } ;
struct TYPE_8__ {int queues; } ;
struct ieee80211_local {TYPE_2__ hw; TYPE_1__* ops; } ;
struct TYPE_10__ {TYPE_3__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_4__ def; } ;
typedef int qparam ;
struct TYPE_9__ {scalar_t__ band; } ;
struct TYPE_7__ {int conf_tx; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int,struct ieee80211_tx_queue_params*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_tx_queue_params*,int ,int) ;
 struct ieee80211_chanctx_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct ieee80211_sub_if_data *VAR_7,
          bool VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_7->local;
 struct ieee80211_tx_queue_params VAR_10;
 struct ieee80211_chanctx_conf *VAR_11;
 int VAR_12;
 bool VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_9->ops->conf_tx)
  return;

 if (VAR_9->hw.queues < VAR_2)
  return;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));

 FUNC_4();
 VAR_11 = FUNC_3(VAR_7->vif.chanctx_conf);
 VAR_13 = (VAR_11 &&
     VAR_11->def.chan->band == VAR_1) &&
   !(VAR_7->flags & VAR_3);
 FUNC_5();






 VAR_14 = (VAR_7->vif.type != VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {

  VAR_16 = 1023;
  if (VAR_13)
   VAR_15 = 31;
  else
   VAR_15 = 15;

  if (VAR_14) {
   switch (VAR_12) {
   case 130:
    VAR_10.cw_max = VAR_16;
    VAR_10.cw_min = VAR_15;
    VAR_10.txop = 0;
    VAR_10.aifs = 7;
    break;

   default:
   case 131:
    VAR_10.cw_max = VAR_16;
    VAR_10.cw_min = VAR_15;
    VAR_10.txop = 0;
    VAR_10.aifs = 3;
    break;
   case 129:
    VAR_10.cw_max = VAR_15;
    VAR_10.cw_min = (VAR_15 + 1) / 2 - 1;
    if (VAR_13)
     VAR_10.txop = 6016/32;
    else
     VAR_10.txop = 3008/32;
    VAR_10.aifs = 2;
    break;
   case 128:
    VAR_10.cw_max = (VAR_15 + 1) / 2 - 1;
    VAR_10.cw_min = (VAR_15 + 1) / 4 - 1;
    if (VAR_13)
     VAR_10.txop = 3264/32;
    else
     VAR_10.txop = 1504/32;
    VAR_10.aifs = 2;
    break;
   }
  } else {

   VAR_10.cw_max = VAR_16;
   VAR_10.cw_min = VAR_15;
   VAR_10.txop = 0;
   VAR_10.aifs = 2;
  }

  VAR_10.uapsd = 0;

  VAR_7->tx_conf[VAR_12] = VAR_10;
  FUNC_0(VAR_9, VAR_7, VAR_12, &VAR_10);
 }

 if (VAR_7->vif.type != VAR_4 &&
     VAR_7->vif.type != VAR_5) {
  VAR_7->vif.bss_conf.qos = VAR_14;
  if (VAR_8)
   FUNC_1(VAR_7,
        VAR_0);
 }
}
