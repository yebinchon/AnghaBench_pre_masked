
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
struct timespec {int tv_sec; } ;
struct TYPE_10__ {int addr; int smps_mode; } ;
struct TYPE_7__ {int mtx; int work; } ;
struct sta_info {int* timer_to_tid; TYPE_5__ sta; int * last_seq_ctrl; int * tx_filtered; int * ps_tx_buf; int avg_signal; int last_connected; int sta_state; int last_rx; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; int plink_timer; TYPE_2__ ampdu_mlme; int drv_unblock_wk; int lock; } ;
struct TYPE_8__ {int user_mpm; } ;
struct TYPE_9__ {TYPE_3__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; int vif; struct ieee80211_local* local; } ;
struct TYPE_6__ {scalar_t__ sta_data_size; } ;
struct ieee80211_local {TYPE_1__ hw; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timespec*) ;
 int FUNC_3 (int *,int,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (struct sta_info*) ;
 struct sta_info* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int const*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ieee80211_sub_if_data*,char*,int ) ;
 scalar_t__ FUNC_13 (struct ieee80211_local*,struct sta_info*,int ) ;
 int VAR_8 ;

struct sta_info *FUNC_14(struct ieee80211_sub_if_data *VAR_9,
    const u8 *VAR_10, gfp_t VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_9->local;
 struct sta_info *VAR_13;
 struct timespec VAR_14;
 int VAR_15;

 VAR_13 = FUNC_7(sizeof(*VAR_13) + VAR_12->hw.sta_data_size, VAR_11);
 if (!VAR_13)
  return ((void*)0);

 FUNC_11(&VAR_13->lock);
 FUNC_0(&VAR_13->drv_unblock_wk, VAR_8);
 FUNC_0(&VAR_13->ampdu_mlme.work, VAR_6);
 FUNC_9(&VAR_13->ampdu_mlme.mtx);






 FUNC_8(VAR_13->sta.addr, VAR_10, VAR_0);
 VAR_13->local = VAR_12;
 VAR_13->sdata = VAR_9;
 VAR_13->last_rx = VAR_7;

 VAR_13->sta_state = VAR_4;

 FUNC_2(&VAR_14);
 VAR_13->last_connected = VAR_14.tv_sec;
 FUNC_3(&VAR_13->avg_signal, 1024, 8);

 if (FUNC_13(VAR_12, VAR_13, VAR_11)) {
  FUNC_6(VAR_13);
  return ((void*)0);
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {





  VAR_13->timer_to_tid[VAR_15] = VAR_15;
 }
 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++) {
  FUNC_10(&VAR_13->ps_tx_buf[VAR_15]);
  FUNC_10(&VAR_13->tx_filtered[VAR_15]);
 }

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  VAR_13->last_seq_ctrl[VAR_15] = FUNC_1(VAR_5);

 VAR_13->sta.smps_mode = VAR_3;

 FUNC_12(VAR_9, "Allocated STA %pM\n", VAR_13->sta.addr);

 return VAR_13;
}
