
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct tid_ampdu_rx {int rcu_head; int session_timer; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int * tid_rx; int mtx; } ;
struct sta_info {TYPE_2__ sta; int sdata; TYPE_1__ ampdu_mlme; struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 size_t VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct ieee80211_local*,int ,int ,TYPE_2__*,size_t,int *,int ) ;
 int FUNC_4 (int ,char*,int ,size_t,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,size_t,size_t,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct tid_ampdu_rx* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int ,size_t) ;

void FUNC_10(struct sta_info *VAR_3, u16 VAR_4,
         u16 VAR_5, u16 VAR_6, bool VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_3->local;
 struct tid_ampdu_rx *VAR_9;

 FUNC_6(&VAR_3->ampdu_mlme.mtx);

 VAR_9 = FUNC_8(VAR_3->ampdu_mlme.tid_rx[VAR_4],
     FUNC_7(&VAR_3->ampdu_mlme.mtx));

 if (!VAR_9)
  return;

 FUNC_0(VAR_3->ampdu_mlme.tid_rx[VAR_4], ((void*)0));

 FUNC_4(VAR_3->sdata,
        "Rx BA session stop requested for %pM tid %u %s reason: %d\n",
        VAR_3->sta.addr, VAR_4,
        VAR_5 == VAR_1 ? "recipient" : "inititator",
        (int)VAR_6);

 if (FUNC_3(VAR_8, VAR_3->sdata, VAR_0,
        &VAR_3->sta, VAR_4, ((void*)0), 0))
  FUNC_9(VAR_3->sdata,
      "HW problem - can not stop rx aggregation for %pM tid %d\n",
      VAR_3->sta.addr, VAR_4);


 if (VAR_5 == VAR_1 && VAR_7)
  FUNC_5(VAR_3->sdata, VAR_3->sta.addr,
         VAR_4, VAR_1, VAR_6);

 FUNC_2(&VAR_9->session_timer);

 FUNC_1(&VAR_9->rcu_head, VAR_2);
}
