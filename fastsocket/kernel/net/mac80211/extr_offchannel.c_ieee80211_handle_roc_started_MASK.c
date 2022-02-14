
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_roc_work {int notified; int req_duration; TYPE_2__* chan; int cookie; TYPE_1__* sdata; int * frame; scalar_t__ mgmt_tx_cookie; } ;
struct TYPE_4__ {int band; } ;
struct TYPE_3__ {int wdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int,int ) ;

void FUNC_3(struct ieee80211_roc_work *VAR_1)
{
 if (VAR_1->notified)
  return;

 if (VAR_1->mgmt_tx_cookie) {
  if (!FUNC_0(!VAR_1->frame)) {
   FUNC_2(VAR_1->sdata, VAR_1->frame, 7,
        VAR_1->chan->band);
   VAR_1->frame = ((void*)0);
  }
 } else {
  FUNC_1(&VAR_1->sdata->wdev, VAR_1->cookie,
       VAR_1->chan, VAR_1->req_duration,
       VAR_0);
 }

 VAR_1->notified = 1;
}
