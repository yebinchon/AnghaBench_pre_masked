
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct ieee80211_channel* chan; int center_freq1; int width; } ;
struct wireless_dev {scalar_t__ iftype; struct ieee80211_channel* channel; scalar_t__ mesh_id_len; int ssid; TYPE_3__ preset_chandef; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct mesh_setup {TYPE_3__ chandef; scalar_t__ mesh_id_len; int mesh_id; scalar_t__ is_secure; } ;
struct mesh_config {int dummy; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {int flags; int center_freq; } ;
struct TYPE_5__ {int flags; struct ieee80211_supported_band** bands; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_4__ {int join_mesh; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct cfg80211_registered_device*,struct wireless_dev*,struct ieee80211_channel*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*,struct mesh_config const*,struct mesh_setup*) ;

int FUNC_6(struct cfg80211_registered_device *VAR_14,
    struct net_device *VAR_15,
    struct mesh_setup *VAR_16,
    const struct mesh_config *VAR_17)
{
 struct wireless_dev *VAR_18 = VAR_15->ieee80211_ptr;
 int VAR_19;

 FUNC_1(VAR_9 != VAR_8);

 FUNC_0(VAR_18);

 if (VAR_15->ieee80211_ptr->iftype != VAR_12)
  return -VAR_3;

 if (!(VAR_14->wiphy.flags & VAR_13) &&
       VAR_16->is_secure)
  return -VAR_3;

 if (VAR_18->mesh_id_len)
  return -VAR_1;

 if (!VAR_16->mesh_id_len)
  return -VAR_2;

 if (!VAR_14->ops->join_mesh)
  return -VAR_3;

 if (!VAR_16->chandef.chan) {

  VAR_16->chandef = VAR_18->preset_chandef;
 }

 if (!VAR_16->chandef.chan) {

  enum ieee80211_band VAR_20;

  for (VAR_20 = 0; VAR_20 < VAR_10; VAR_20++) {
   struct ieee80211_supported_band *VAR_21;
   struct ieee80211_channel *VAR_22;
   int VAR_23;

   VAR_21 = VAR_14->wiphy.bands[VAR_20];
   if (!VAR_21)
    continue;

   for (VAR_23 = 0; VAR_23 < VAR_21->n_channels; VAR_23++) {
    VAR_22 = &VAR_21->channels[VAR_23];
    if (VAR_22->flags & (VAR_5 |
         VAR_6 |
         VAR_4 |
         VAR_7))
     continue;
    VAR_16->chandef.chan = VAR_22;
    break;
   }

   if (VAR_16->chandef.chan)
    break;
  }


  if (!VAR_16->chandef.chan)
   return -VAR_2;

  VAR_16->chandef.width = VAR_11;
  VAR_16->chandef.center_freq1 = VAR_16->chandef.chan->center_freq;
 }

 if (!FUNC_3(&VAR_14->wiphy, &VAR_16->chandef))
  return -VAR_2;

 VAR_19 = FUNC_2(VAR_14, VAR_18, VAR_16->chandef.chan,
        VAR_0);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_5(VAR_14, VAR_15, VAR_17, VAR_16);
 if (!VAR_19) {
  FUNC_4(VAR_18->ssid, VAR_16->mesh_id, VAR_16->mesh_id_len);
  VAR_18->mesh_id_len = VAR_16->mesh_id_len;
  VAR_18->channel = VAR_16->chandef.chan;
 }

 return VAR_19;
}
