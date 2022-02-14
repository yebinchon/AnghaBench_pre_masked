
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_local {scalar_t__ hw_scan_band; TYPE_2__* hw_scan_req; int hw_scan_ies_bufsize; struct cfg80211_scan_request* scan_req; } ;
struct cfg80211_scan_request {int n_channels; int no_cck; int * rates; int ie_len; int ie; TYPE_1__** channels; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_4__ {int n_channels; int ie_len; int no_cck; scalar_t__ ie; TYPE_1__** channels; } ;
struct TYPE_3__ {int band; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,int *,int ,int ,int ,int,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_local *VAR_1)
{
 struct cfg80211_scan_request *VAR_2 = VAR_1->scan_req;
 enum ieee80211_band VAR_3;
 int VAR_4, VAR_5, VAR_6;

 do {
  if (VAR_1->hw_scan_band == VAR_0)
   return 0;

  VAR_3 = VAR_1->hw_scan_band;
  VAR_6 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_2->n_channels; VAR_4++) {
   if (VAR_2->channels[VAR_4]->band == VAR_3) {
    VAR_1->hw_scan_req->channels[VAR_6] =
       VAR_2->channels[VAR_4];
    VAR_6++;
   }
  }

  VAR_1->hw_scan_band++;
 } while (!VAR_6);

 VAR_1->hw_scan_req->n_channels = VAR_6;

 VAR_5 = FUNC_0(VAR_1, (u8 *)VAR_1->hw_scan_req->ie,
      VAR_1->hw_scan_ies_bufsize,
      VAR_2->ie, VAR_2->ie_len, VAR_3,
      VAR_2->rates[VAR_3], 0);
 VAR_1->hw_scan_req->ie_len = VAR_5;
 VAR_1->hw_scan_req->no_cck = VAR_2->no_cck;

 return 1;
}
