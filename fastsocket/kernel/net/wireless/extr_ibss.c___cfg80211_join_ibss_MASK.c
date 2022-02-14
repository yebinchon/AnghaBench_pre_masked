
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
struct TYPE_11__ {TYPE_6__* chan; } ;
struct TYPE_9__ {TYPE_5__ chandef; } ;
struct TYPE_10__ {TYPE_3__ ibss; } ;
struct wireless_dev {scalar_t__ ssid_len; int ssid; int sme_state; struct cfg80211_cached_keys* connect_keys; TYPE_4__ wext; scalar_t__ ibss_fixed; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_2__* bitrates; } ;
struct TYPE_7__ {struct ieee80211_supported_band** bands; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
struct cfg80211_ibss_params {scalar_t__ ssid_len; int ssid; scalar_t__ channel_fixed; TYPE_5__ chandef; int basic_rates; } ;
struct cfg80211_cached_keys {int dummy; } ;
struct TYPE_12__ {size_t band; } ;
struct TYPE_8__ {int flags; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct cfg80211_cached_keys*) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*,TYPE_6__*,int ) ;
 int FUNC_4 (struct cfg80211_cached_keys*) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_ibss_params*) ;

int FUNC_7(struct cfg80211_registered_device *VAR_8,
    struct net_device *VAR_9,
    struct cfg80211_ibss_params *VAR_10,
    struct cfg80211_cached_keys *VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_9->ieee80211_ptr;
 int VAR_13;

 FUNC_0(VAR_12);

 if (VAR_12->ssid_len)
  return -VAR_4;

 if (!VAR_10->basic_rates) {





  struct ieee80211_supported_band *VAR_14 =
   VAR_8->wiphy.bands[VAR_10->chandef.chan->band];
  int VAR_15;
  u32 VAR_16 = VAR_10->chandef.chan->band == VAR_5 ?
   VAR_6 :
   VAR_7;

  for (VAR_15 = 0; VAR_15 < VAR_14->n_bitrates; VAR_15++) {
   if (VAR_14->bitrates[VAR_15].flags & VAR_16)
    VAR_10->basic_rates |= FUNC_1(VAR_15);
  }
 }

 if (FUNC_2(VAR_12->connect_keys))
  FUNC_4(VAR_12->connect_keys);
 VAR_12->connect_keys = VAR_11;

 VAR_12->ibss_fixed = VAR_10->channel_fixed;



 VAR_12->sme_state = VAR_0;

 VAR_13 = FUNC_3(VAR_8, VAR_12, VAR_10->chandef.chan,
        VAR_10->channel_fixed
        ? VAR_3
        : VAR_2);
 if (VAR_13) {
  VAR_12->connect_keys = ((void*)0);
  return VAR_13;
 }

 VAR_13 = FUNC_6(VAR_8, VAR_9, VAR_10);
 if (VAR_13) {
  VAR_12->connect_keys = ((void*)0);
  VAR_12->sme_state = VAR_1;
  return VAR_13;
 }

 FUNC_5(VAR_12->ssid, VAR_10->ssid, VAR_10->ssid_len);
 VAR_12->ssid_len = VAR_10->ssid_len;

 return 0;
}
