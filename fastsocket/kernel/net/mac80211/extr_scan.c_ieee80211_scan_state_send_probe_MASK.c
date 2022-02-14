
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


typedef int u32 ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_9__ {TYPE_6__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {TYPE_4__ conf; } ;
struct ieee80211_local {int next_scan_state; TYPE_5__ hw; TYPE_2__* scan_req; int mtx; int scan_sdata; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_12__ {int band; } ;
struct TYPE_8__ {int n_ssids; int * rates; int ie_len; int ie; TYPE_1__* ssids; scalar_t__ no_cck; } ;
struct TYPE_7__ {int ssid_len; int ssid; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int *,int ,int ,int ,int ,int ,int,int ,TYPE_6__*,int) ;
 int FUNC_1 (int *) ;
 struct ieee80211_sub_if_data* FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_local *VAR_4,
         unsigned long *VAR_5)
{
 int VAR_6;
 struct ieee80211_sub_if_data *VAR_7;
 enum ieee80211_band VAR_8 = VAR_4->hw.conf.chandef.chan->band;
 u32 VAR_9;

 VAR_9 = VAR_2;
 if (VAR_4->scan_req->no_cck)
  VAR_9 |= VAR_1;

 VAR_7 = FUNC_2(VAR_4->scan_sdata,
       FUNC_1(&VAR_4->mtx));

 for (VAR_6 = 0; VAR_6 < VAR_4->scan_req->n_ssids; VAR_6++)
  FUNC_0(
   VAR_7, ((void*)0),
   VAR_4->scan_req->ssids[VAR_6].ssid,
   VAR_4->scan_req->ssids[VAR_6].ssid_len,
   VAR_4->scan_req->ie, VAR_4->scan_req->ie_len,
   VAR_4->scan_req->rates[VAR_8], 0,
   VAR_9, VAR_4->hw.conf.chandef.chan, 1);





 *VAR_5 = VAR_0;
 VAR_4->next_scan_state = VAR_3;
}
