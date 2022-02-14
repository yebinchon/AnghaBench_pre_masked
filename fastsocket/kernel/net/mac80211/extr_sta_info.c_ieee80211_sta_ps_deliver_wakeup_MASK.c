
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int aid; int addr; } ;
struct sta_info {TYPE_3__ sta; TYPE_2__* ps_tx_buf; TYPE_2__* tx_filtered; scalar_t__ driver_buffered_tids; struct ieee80211_sub_if_data* sdata; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_4__ {int flags; } ;
struct ieee80211_local {int total_ps_buffered; TYPE_1__ hw; } ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sta_info*,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,TYPE_3__*) ;
 int FUNC_4 (struct ieee80211_local*,struct sk_buff_head*,int ,struct sta_info*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,char*,int ,int ,int,int) ;
 int FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (TYPE_2__*,struct sk_buff_head*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct sta_info*) ;

void FUNC_12(struct sta_info *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = VAR_6->sdata;
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct sk_buff_head VAR_9;
 int VAR_10 = 0, VAR_11 = 0, VAR_12;
 unsigned long VAR_13;

 FUNC_2(VAR_6, VAR_4);

 FUNC_1(FUNC_0(VAR_2) > 1);
 VAR_6->driver_buffered_tids = 0;

 if (!(VAR_8->hw.flags & VAR_0))
  FUNC_3(VAR_8, VAR_7, VAR_3, &VAR_6->sta);

 FUNC_6(&VAR_9);


 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  int VAR_14 = FUNC_7(&VAR_9), VAR_15;

  FUNC_9(&VAR_6->tx_filtered[VAR_12].lock, VAR_13);
  FUNC_8(&VAR_6->tx_filtered[VAR_12], &VAR_9);
  FUNC_10(&VAR_6->tx_filtered[VAR_12].lock, VAR_13);
  VAR_15 = FUNC_7(&VAR_9);
  VAR_10 += VAR_15 - VAR_14;
  VAR_14 = VAR_15;

  FUNC_9(&VAR_6->ps_tx_buf[VAR_12].lock, VAR_13);
  FUNC_8(&VAR_6->ps_tx_buf[VAR_12], &VAR_9);
  FUNC_10(&VAR_6->ps_tx_buf[VAR_12].lock, VAR_13);
  VAR_15 = FUNC_7(&VAR_9);
  VAR_11 += VAR_15 - VAR_14;
 }

 FUNC_4(VAR_8, &VAR_9, VAR_5, VAR_6);

 VAR_8->total_ps_buffered -= VAR_11;

 FUNC_11(VAR_6);

 FUNC_5(VAR_7,
        "STA %pM aid %d sending %d filtered/%d PS frames since STA not sleeping anymore\n",
        VAR_6->sta.addr, VAR_6->sta.aid, VAR_10, VAR_11);
}
