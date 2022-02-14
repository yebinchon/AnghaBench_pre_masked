
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
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct TYPE_9__ {int ssid_len; int ssid; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {int mtx; TYPE_5__* int_scan_req; TYPE_4__ scan_ssid; TYPE_3__ hw; scalar_t__ scan_req; } ;
struct ieee80211_channel {int flags; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_10__ {int n_channels; int n_ssids; TYPE_4__* ssids; struct ieee80211_channel** channels; } ;
struct TYPE_7__ {TYPE_1__** bands; } ;
struct TYPE_6__ {int n_channels; struct ieee80211_channel* channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,TYPE_5__*) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ieee80211_sub_if_data *VAR_5,
    const u8 *VAR_6, u8 VAR_7,
    struct ieee80211_channel *VAR_8)
{
 struct ieee80211_local *VAR_9 = VAR_5->local;
 int VAR_10 = -VAR_0;
 enum ieee80211_band VAR_11;

 FUNC_3(&VAR_9->mtx);


 if (VAR_9->scan_req)
  goto unlock;


 if (!VAR_8) {
  int VAR_12, VAR_13;
  int VAR_14 = 0;

  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
   if (!VAR_9->hw.wiphy->bands[VAR_11])
    continue;

   VAR_13 = VAR_9->hw.wiphy->bands[VAR_11]->n_channels;
   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
    struct ieee80211_channel *VAR_15 =
        &VAR_9->hw.wiphy->bands[VAR_11]->channels[VAR_12];

    if (VAR_15->flags & (VAR_2 |
           VAR_1))
     continue;

    VAR_9->int_scan_req->channels[VAR_14] = VAR_15;
    VAR_14++;
   }
  }

  if (FUNC_0(VAR_14 == 0))
   goto unlock;

  VAR_9->int_scan_req->n_channels = VAR_14;
 } else {
  if (FUNC_0(VAR_8->flags & (VAR_2 |
      VAR_1)))
   goto unlock;

  VAR_9->int_scan_req->channels[0] = VAR_8;
  VAR_9->int_scan_req->n_channels = 1;
 }

 VAR_9->int_scan_req->ssids = &VAR_9->scan_ssid;
 VAR_9->int_scan_req->n_ssids = 1;
 FUNC_2(VAR_9->int_scan_req->ssids[0].ssid, VAR_6, VAR_3);
 VAR_9->int_scan_req->ssids[0].ssid_len = VAR_7;

 VAR_10 = FUNC_1(VAR_5, VAR_5->local->int_scan_req);
 unlock:
 FUNC_4(&VAR_9->mtx);
 return VAR_10;
}
