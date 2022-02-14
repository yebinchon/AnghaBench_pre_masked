
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


typedef int u8 ;
typedef int u16 ;
struct tid_ampdu_tx {scalar_t__ dialog_token; int buf_size; int last_tx; scalar_t__ timeout; int session_timer; int state; int addba_resp_timer; } ;
struct TYPE_12__ {int mtx; scalar_t__* addba_req_num; } ;
struct TYPE_7__ {int addr; } ;
struct sta_info {TYPE_6__ ampdu_mlme; TYPE_1__ sta; int sdata; } ;
struct TYPE_8__ {scalar_t__ dialog_token; int status; int capab; } ;
struct TYPE_9__ {TYPE_2__ addba_resp; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
struct TYPE_11__ {TYPE_4__ action; } ;
struct ieee80211_mgmt {TYPE_5__ u; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct sta_info*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (struct ieee80211_local*,struct sta_info*,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct tid_ampdu_tx* FUNC_9 (struct sta_info*,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

void FUNC_12(struct ieee80211_local *VAR_9,
      struct sta_info *VAR_10,
      struct ieee80211_mgmt *VAR_11,
      size_t VAR_12)
{
 struct tid_ampdu_tx *VAR_13;
 u16 VAR_14, VAR_15;
 u8 VAR_16;

 VAR_14 = FUNC_5(VAR_11->u.action.u.addba_resp.capab);
 VAR_15 = (VAR_14 & VAR_6) >> 2;
 VAR_16 = (VAR_14 & VAR_5) >> 6;

 FUNC_7(&VAR_10->ampdu_mlme.mtx);

 VAR_13 = FUNC_9(VAR_10, VAR_15);
 if (!VAR_13)
  goto out;

 if (VAR_11->u.action.u.addba_resp.dialog_token != VAR_13->dialog_token) {
  FUNC_3(VAR_10->sdata, "wrong addBA response token, %pM tid %d\n",
         VAR_10->sta.addr, VAR_15);
  goto out;
 }

 FUNC_2(&VAR_13->addba_resp_timer);

 FUNC_3(VAR_10->sdata, "switched off addBA timer for %pM tid %d\n",
        VAR_10->sta.addr, VAR_15);






 if (FUNC_11(VAR_4, &VAR_13->state) ||
     FUNC_11(VAR_3, &VAR_13->state)) {
  FUNC_3(VAR_10->sdata,
         "got addBA resp for %pM tid %d but we already gave up\n",
         VAR_10->sta.addr, VAR_15);
  goto out;
 }







 if (FUNC_5(VAR_11->u.action.u.addba_resp.status)
   == VAR_7 && VAR_16) {
  if (FUNC_10(VAR_2,
         &VAR_13->state)) {

   goto out;
  }

  VAR_13->buf_size = VAR_16;

  if (FUNC_11(VAR_1, &VAR_13->state))
   FUNC_4(VAR_9, VAR_10, VAR_15);

  VAR_10->ampdu_mlme.addba_req_num[VAR_15] = 0;

  if (VAR_13->timeout) {
   FUNC_6(&VAR_13->session_timer,
      FUNC_0(VAR_13->timeout));
   VAR_13->last_tx = VAR_8;
  }

 } else {
  FUNC_1(VAR_10, VAR_15, VAR_0);
 }

 out:
 FUNC_8(&VAR_10->ampdu_mlme.mtx);
}
