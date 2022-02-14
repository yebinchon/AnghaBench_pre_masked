
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_21__ {unsigned long data; int function; } ;
struct TYPE_12__ {unsigned long data; int function; } ;
struct tid_ampdu_rx {int ssn; int head_seq_num; int buf_size; int timeout; int last_rx; TYPE_8__ session_timer; scalar_t__ stored_mpdu_num; int dialog_token; struct tid_ampdu_rx* reorder_time; struct tid_ampdu_rx* reorder_buf; TYPE_10__ reorder_timer; int reorder_lock; } ;
struct TYPE_18__ {int cap; } ;
struct TYPE_13__ {int addr; TYPE_5__ ht_cap; } ;
struct TYPE_20__ {int mtx; scalar_t__* tid_rx; } ;
struct sta_info {TYPE_11__ sta; int sdata; TYPE_7__ ampdu_mlme; int * timer_to_tid; } ;
struct sk_buff {int dummy; } ;
struct TYPE_14__ {int capab; int start_seq_num; int timeout; int dialog_token; } ;
struct TYPE_15__ {TYPE_1__ addba_req; } ;
struct TYPE_16__ {TYPE_2__ u; } ;
struct TYPE_17__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {int sa; TYPE_4__ u; } ;
struct TYPE_19__ {int max_rx_aggregation_subframes; } ;
struct ieee80211_local {TYPE_6__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct sta_info*,int,int ,int ,int) ;
 int FUNC_2 (struct ieee80211_local*,int ,int ,TYPE_11__*,int,int*,int ) ;
 int FUNC_3 (int ,char*,int ,int,...) ;
 int FUNC_4 (int ,char*,int ,int,...) ;
 int FUNC_5 (int ,int ,int,int ,int,int,int,int) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int VAR_14 ;
 void* FUNC_8 (int,int,int ) ;
 int FUNC_9 (struct tid_ampdu_rx*) ;
 struct tid_ampdu_rx* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_8__*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__,struct tid_ampdu_rx*) ;
 int FUNC_16 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_17 (struct sta_info*,int ) ;

void FUNC_18(struct ieee80211_local *VAR_17,
         struct sta_info *VAR_18,
         struct ieee80211_mgmt *VAR_19,
         size_t VAR_20)
{
 struct tid_ampdu_rx *VAR_21;
 u16 VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u8 VAR_29;
 int VAR_30 = -VAR_0;


 VAR_29 = VAR_19->u.action.u.addba_req.dialog_token;
 VAR_24 = FUNC_11(VAR_19->u.action.u.addba_req.timeout);
 VAR_27 =
  FUNC_11(VAR_19->u.action.u.addba_req.start_seq_num) >> 4;

 VAR_22 = FUNC_11(VAR_19->u.action.u.addba_req.capab);
 VAR_25 = (VAR_22 & VAR_3) >> 1;
 VAR_23 = (VAR_22 & VAR_4) >> 2;
 VAR_26 = (VAR_22 & VAR_2) >> 6;

 VAR_28 = VAR_10;

 if (FUNC_17(VAR_18, VAR_13)) {
  FUNC_3(VAR_18->sdata,
         "Suspend in progress - Denying ADDBA request (%pM tid %d)\n",
         VAR_18->sta.addr, VAR_23);
  goto end_no_lock;
 }





 if (((VAR_25 != 1) &&
      (!(VAR_18->sta.ht_cap.cap & VAR_6))) ||
     (VAR_26 > VAR_7)) {
  VAR_28 = VAR_9;
  FUNC_4(VAR_18->sdata,
       "AddBA Req with bad params from %pM on tid %u. policy %d, buffer size %d\n",
       VAR_19->sa, VAR_23, VAR_25, VAR_26);
  goto end_no_lock;
 }

 if (VAR_26 == 0)
  VAR_26 = VAR_7;


 if (VAR_26 > VAR_17->hw.max_rx_aggregation_subframes)
  VAR_26 = VAR_17->hw.max_rx_aggregation_subframes;


 FUNC_13(&VAR_18->ampdu_mlme.mtx);

 if (VAR_18->ampdu_mlme.tid_rx[VAR_23]) {
  FUNC_4(VAR_18->sdata,
       "unexpected AddBA Req from %pM on tid %u\n",
       VAR_19->sa, VAR_23);


  FUNC_1(VAR_18, VAR_23, VAR_8,
      VAR_12,
      0);
 }


 VAR_21 = FUNC_10(sizeof(struct tid_ampdu_rx), VAR_1);
 if (!VAR_21)
  goto end;

 FUNC_16(&VAR_21->reorder_lock);


 VAR_21->session_timer.function = VAR_16;
 VAR_21->session_timer.data = (unsigned long)&VAR_18->timer_to_tid[VAR_23];
 FUNC_7(&VAR_21->session_timer);


 VAR_21->reorder_timer.function = VAR_15;
 VAR_21->reorder_timer.data = (unsigned long)&VAR_18->timer_to_tid[VAR_23];
 FUNC_6(&VAR_21->reorder_timer);


 VAR_21->reorder_buf =
  FUNC_8(VAR_26, sizeof(struct sk_buff *), VAR_1);
 VAR_21->reorder_time =
  FUNC_8(VAR_26, sizeof(unsigned long), VAR_1);
 if (!VAR_21->reorder_buf || !VAR_21->reorder_time) {
  FUNC_9(VAR_21->reorder_buf);
  FUNC_9(VAR_21->reorder_time);
  FUNC_9(VAR_21);
  goto end;
 }

 VAR_30 = FUNC_2(VAR_17, VAR_18->sdata, VAR_5,
          &VAR_18->sta, VAR_23, &VAR_27, 0);
 FUNC_3(VAR_18->sdata, "Rx A-MPDU request on %pM tid %d result %d\n",
        VAR_18->sta.addr, VAR_23, VAR_30);
 if (VAR_30) {
  FUNC_9(VAR_21->reorder_buf);
  FUNC_9(VAR_21->reorder_time);
  FUNC_9(VAR_21);
  goto end;
 }


 VAR_21->dialog_token = VAR_29;
 VAR_21->ssn = VAR_27;
 VAR_21->head_seq_num = VAR_27;
 VAR_21->buf_size = VAR_26;
 VAR_21->timeout = VAR_24;
 VAR_21->stored_mpdu_num = 0;
 VAR_28 = VAR_11;


 FUNC_15(VAR_18->ampdu_mlme.tid_rx[VAR_23], VAR_21);

 if (VAR_24) {
  FUNC_12(&VAR_21->session_timer, FUNC_0(VAR_24));
  VAR_21->last_rx = VAR_14;
 }

end:
 FUNC_14(&VAR_18->ampdu_mlme.mtx);

end_no_lock:
 FUNC_5(VAR_18->sdata, VAR_18->sta.addr, VAR_23,
      VAR_29, VAR_28, 1, VAR_26, VAR_24);
}
