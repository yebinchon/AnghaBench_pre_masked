
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct tid_ampdu_tx {int state; int buf_size; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int mtx; } ;
struct sta_info {int lock; int sdata; TYPE_2__ sta; TYPE_1__ ampdu_mlme; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_local*,int ,int ,TYPE_2__*,int ,int *,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct tid_ampdu_tx*,int ) ;
 int FUNC_4 (int *) ;
 struct tid_ampdu_tx* FUNC_5 (struct sta_info*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_local *VAR_2,
      struct sta_info *VAR_3, u16 VAR_4)
{
 struct tid_ampdu_tx *VAR_5;

 FUNC_4(&VAR_3->ampdu_mlme.mtx);

 VAR_5 = FUNC_5(VAR_3, VAR_4);

 FUNC_1(VAR_3->sdata, "Aggregation is on for %pM tid %d\n",
        VAR_3->sta.addr, VAR_4);

 FUNC_0(VAR_2, VAR_3->sdata,
    VAR_1,
    &VAR_3->sta, VAR_4, ((void*)0), VAR_5->buf_size);





 FUNC_7(&VAR_3->lock);

 FUNC_3(VAR_3->sdata, VAR_5, VAR_4);





 FUNC_6(VAR_0, &VAR_5->state);
 FUNC_2(VAR_3->sdata, VAR_4);

 FUNC_8(&VAR_3->lock);
}
