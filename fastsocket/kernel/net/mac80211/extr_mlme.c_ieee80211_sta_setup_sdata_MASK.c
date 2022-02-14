
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ps; } ;
struct ieee80211_if_managed {int p2p_noa_index; int req_smps; int mtx; int uapsd_max_sp_len; int uapsd_queues; int powersave; scalar_t__ flags; int chswitch_timer; int conn_mon_timer; int bcn_mon_timer; int timer; int request_smps_work; int csa_connection_drop_work; int beacon_connection_loss_work; int chswitch_work; int monitor_work; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__* local; TYPE_2__ wdev; TYPE_1__ u; } ;
struct TYPE_7__ {int flags; int uapsd_max_sp_len; int uapsd_queues; } ;
struct TYPE_8__ {TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned long) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_12)
{
 struct ieee80211_if_managed *VAR_13;

 VAR_13 = &VAR_12->u.mgd;
 FUNC_0(&VAR_13->monitor_work, VAR_10);
 FUNC_0(&VAR_13->chswitch_work, VAR_5);
 FUNC_0(&VAR_13->beacon_connection_loss_work,
    VAR_3);
 FUNC_0(&VAR_13->csa_connection_drop_work,
    VAR_6);
 FUNC_0(&VAR_13->request_smps_work, VAR_7);
 FUNC_2(&VAR_13->timer, VAR_11,
      (unsigned long) VAR_12);
 FUNC_2(&VAR_13->bcn_mon_timer, VAR_8,
      (unsigned long) VAR_12);
 FUNC_2(&VAR_13->conn_mon_timer, VAR_9,
      (unsigned long) VAR_12);
 FUNC_2(&VAR_13->chswitch_timer, VAR_4,
      (unsigned long) VAR_12);

 VAR_13->flags = 0;
 VAR_13->powersave = VAR_12->wdev.ps;
 VAR_13->uapsd_queues = VAR_12->local->hw.uapsd_queues;
 VAR_13->uapsd_max_sp_len = VAR_12->local->hw.uapsd_max_sp_len;
 VAR_13->p2p_noa_index = -1;

 FUNC_1(&VAR_13->mtx);

 if (VAR_12->local->hw.flags & VAR_0)
  VAR_13->req_smps = VAR_1;
 else
  VAR_13->req_smps = VAR_2;
}
