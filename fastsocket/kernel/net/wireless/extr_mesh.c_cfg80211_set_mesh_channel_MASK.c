
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_chan_def {scalar_t__ width; int chan; } ;
struct wireless_dev {struct cfg80211_chan_def preset_chandef; scalar_t__ mesh_id_len; int channel; int netdev; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ libertas_set_mesh_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct cfg80211_registered_device*,struct wireless_dev*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cfg80211_registered_device*,int ,int ) ;

int FUNC_3(struct cfg80211_registered_device *VAR_5,
         struct wireless_dev *VAR_6,
         struct cfg80211_chan_def *VAR_7)
{
 int VAR_8;
 if (VAR_5->ops->libertas_set_mesh_channel) {
  if (VAR_7->width != VAR_4)
   return -VAR_2;

  if (!FUNC_1(VAR_6->netdev))
   return -VAR_3;

  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7->chan,
         VAR_0);
  if (VAR_8)
   return VAR_8;

  VAR_8 = FUNC_2(VAR_5, VAR_6->netdev,
           VAR_7->chan);
  if (!VAR_8)
   VAR_6->channel = VAR_7->chan;

  return VAR_8;
 }

 if (VAR_6->mesh_id_len)
  return -VAR_1;

 VAR_6->preset_chandef = *VAR_7;
 return 0;
}
