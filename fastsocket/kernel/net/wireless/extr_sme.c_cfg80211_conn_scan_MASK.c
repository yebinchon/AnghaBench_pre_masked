
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wireless_dev {int netdev; TYPE_3__* conn; TYPE_4__* wiphy; } ;
struct ieee80211_supported_band {int n_channels; int n_bitrates; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; } ;
struct cfg80211_scan_request {int* rates; int n_channels; int n_ssids; int scan_start; int * wiphy; struct wireless_dev* wdev; TYPE_1__* ssids; struct ieee80211_channel** channels; } ;
struct cfg80211_registered_device {struct cfg80211_scan_request* scan_req; int wiphy; int sched_scan_mtx; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_8__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_6__ {int ssid_len; int ssid; struct ieee80211_channel* channel; } ;
struct TYPE_7__ {int state; TYPE_2__ params; } ;
struct TYPE_5__ {int ssid_len; int ssid; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct cfg80211_scan_request*) ;
 struct cfg80211_scan_request* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_9 (struct cfg80211_registered_device*,struct cfg80211_scan_request*) ;
 struct cfg80211_registered_device* FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct wireless_dev *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = FUNC_10(VAR_7->wiphy);
 struct cfg80211_scan_request *VAR_9;
 int VAR_10, VAR_11;

 FUNC_1();
 FUNC_0(VAR_8);
 FUNC_2(VAR_7);
 FUNC_6(&VAR_8->sched_scan_mtx);

 if (VAR_8->scan_req)
  return -VAR_1;

 if (VAR_7->conn->params.channel) {
  VAR_10 = 1;
 } else {
  enum ieee80211_band VAR_12;
  VAR_10 = 0;

  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   if (!VAR_7->wiphy->bands[VAR_12])
    continue;
   VAR_10 += VAR_7->wiphy->bands[VAR_12]->n_channels;
  }
 }
 VAR_9 = FUNC_5(sizeof(*VAR_9) + sizeof(VAR_9->ssids[0]) +
     sizeof(VAR_9->channels[0]) * VAR_10,
     VAR_3);
 if (!VAR_9)
  return -VAR_2;

 if (VAR_7->conn->params.channel)
  VAR_9->channels[0] = VAR_7->conn->params.channel;
 else {
  int VAR_13 = 0, VAR_14;
  enum ieee80211_band VAR_15;
  struct ieee80211_supported_band *VAR_16;
  struct ieee80211_channel *VAR_17;

  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
   VAR_16 = VAR_7->wiphy->bands[VAR_15];
   if (!VAR_16)
    continue;
   for (VAR_14 = 0; VAR_14 < VAR_16->n_channels; VAR_14++) {
    VAR_17 = &VAR_16->channels[VAR_14];
    if (VAR_17->flags & VAR_4)
     continue;
    VAR_9->channels[VAR_13++] = VAR_17;
   }
   VAR_9->rates[VAR_15] = (1 << VAR_16->n_bitrates) - 1;
  }
  VAR_10 = VAR_13;
 }
 VAR_9->n_channels = VAR_10;
 VAR_9->ssids = (void *)&VAR_9->channels[VAR_10];
 VAR_9->n_ssids = 1;

 FUNC_7(VAR_9->ssids[0].ssid, VAR_7->conn->params.ssid,
  VAR_7->conn->params.ssid_len);
 VAR_9->ssids[0].ssid_len = VAR_7->conn->params.ssid_len;

 VAR_9->wdev = VAR_7;
 VAR_9->wiphy = &VAR_8->wiphy;
 VAR_9->scan_start = VAR_6;

 VAR_8->scan_req = VAR_9;

 VAR_11 = FUNC_9(VAR_8, VAR_9);
 if (!VAR_11) {
  VAR_7->conn->state = VAR_0;
  FUNC_8(VAR_8, VAR_7);
  FUNC_3(VAR_7->netdev);
 } else {
  VAR_8->scan_req = ((void*)0);
  FUNC_4(VAR_9);
 }
 return VAR_11;
}
