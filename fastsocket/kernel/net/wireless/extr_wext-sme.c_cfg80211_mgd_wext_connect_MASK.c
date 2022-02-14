
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int bg_scan_period; int privacy; int ssid_len; int ie_len; int ie; } ;
struct TYPE_6__ {int default_key; TYPE_4__ connect; int * prev_bssid; scalar_t__ prev_bssid_valid; TYPE_3__* keys; int default_mgmt_key; int ie_len; int ie; } ;
struct wireless_dev {TYPE_2__ wext; int netdev; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_cached_keys {int * data; TYPE_1__* params; } ;
struct TYPE_7__ {int def; int defmgmt; } ;
struct TYPE_5__ {int key; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 int FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cfg80211_registered_device*,int ,TYPE_4__*,struct cfg80211_cached_keys*,int const*) ;
 int FUNC_3 (struct cfg80211_cached_keys*) ;
 struct cfg80211_cached_keys* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cfg80211_registered_device *VAR_2,
         struct wireless_dev *VAR_3)
{
 struct cfg80211_cached_keys *VAR_4 = ((void*)0);
 const u8 *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 FUNC_0(VAR_2);
 FUNC_1(VAR_3);

 if (!FUNC_5(VAR_3->netdev))
  return 0;

 VAR_3->wext.connect.ie = VAR_3->wext.ie;
 VAR_3->wext.connect.ie_len = VAR_3->wext.ie_len;


 VAR_3->wext.connect.bg_scan_period = -1;

 if (VAR_3->wext.keys) {
  VAR_3->wext.keys->def = VAR_3->wext.default_key;
  VAR_3->wext.keys->defmgmt = VAR_3->wext.default_mgmt_key;
  if (VAR_3->wext.default_key != -1)
   VAR_3->wext.connect.privacy = 1;
 }

 if (!VAR_3->wext.connect.ssid_len)
  return 0;

 if (VAR_3->wext.keys) {
  VAR_4 = FUNC_4(VAR_3->wext.keys, sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   return -VAR_0;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
   VAR_4->params[VAR_7].key = VAR_4->data[VAR_7];
 }

 if (VAR_3->wext.prev_bssid_valid)
  VAR_5 = VAR_3->wext.prev_bssid;

 VAR_6 = FUNC_2(VAR_2, VAR_3->netdev,
     &VAR_3->wext.connect, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_3(VAR_4);

 return VAR_6;
}
