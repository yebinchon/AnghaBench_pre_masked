
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {int iftype; TYPE_3__* wiphy; struct ieee80211_channel* channel; int mesh_id_len; int beacon_interval; int cac_started; TYPE_2__* current_bss; int ibss_fixed; scalar_t__ netdev; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum cfg80211_chan_mode { ____Placeholder_cfg80211_chan_mode } cfg80211_chan_mode ;
struct TYPE_6__ {int features; } ;
struct TYPE_4__ {struct ieee80211_channel* channel; } ;
struct TYPE_5__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(struct wireless_dev *VAR_4,
          struct ieee80211_channel **VAR_5,
          enum cfg80211_chan_mode *VAR_6)
{
 *VAR_5 = ((void*)0);
 *VAR_6 = VAR_2;

 FUNC_0(VAR_4);

 if (VAR_4->netdev && !FUNC_2(VAR_4->netdev))
  return;

 switch (VAR_4->iftype) {
 case 139:
  if (VAR_4->current_bss) {
   *VAR_5 = VAR_4->current_bss->pub.channel;
   *VAR_6 = VAR_4->ibss_fixed
      ? VAR_1
      : VAR_0;
   return;
  }
 case 131:
 case 134:
  if (VAR_4->current_bss) {
   *VAR_5 = VAR_4->current_bss->pub.channel;
   *VAR_6 = VAR_1;
   return;
  }
  break;
 case 138:
 case 132:
  if (VAR_4->cac_started) {
   *VAR_5 = VAR_4->channel;
   *VAR_6 = VAR_1;
  } else if (VAR_4->beacon_interval) {
   *VAR_5 = VAR_4->channel;
   *VAR_6 = VAR_1;
  }
  return;
 case 136:
  if (VAR_4->mesh_id_len) {
   *VAR_5 = VAR_4->channel;
   *VAR_6 = VAR_1;
  }
  return;
 case 135:
 case 137:
 case 129:

  return;
 case 133:
  if (VAR_4->wiphy->features &
    VAR_3)
   *VAR_6 = VAR_0;
  return;
 case 130:
 case 128:
  FUNC_1(1);
 }

 return;
}
