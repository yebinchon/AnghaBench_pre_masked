
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
struct TYPE_11__ {int cap; } ;
struct TYPE_7__ {int cap; int vht_supported; } ;
struct TYPE_12__ {TYPE_5__ ht_cap; TYPE_1__ vht_cap; } ;
struct sta_info {int cur_max_bandwidth; TYPE_6__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct TYPE_8__ {int width; } ;
struct TYPE_9__ {TYPE_2__ chandef; } ;
struct TYPE_10__ {TYPE_3__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 int FUNC_0 (int) ;

enum ieee80211_sta_rx_bandwidth FUNC_1(struct sta_info *VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9 = VAR_8->sdata;
 u32 VAR_10 = VAR_8->sta.vht_cap.cap;
 enum ieee80211_sta_rx_bandwidth VAR_11;

 if (!VAR_8->sta.vht_cap.vht_supported) {
  VAR_11 = VAR_8->sta.ht_cap.cap & VAR_0 ?
    VAR_3 : VAR_2;
  goto check_max;
 }

 switch (VAR_9->vif.bss_conf.chandef.width) {
 default:
  FUNC_0(1);

 case 131:
 case 132:
 case 130:
  VAR_11 = VAR_8->sta.ht_cap.cap & VAR_0 ?
    VAR_3 : VAR_2;
  break;
 case 133:
  if ((VAR_10 & VAR_7) ==
    VAR_5) {
   VAR_11 = VAR_1;
   break;
  }

 case 128:
  if ((VAR_10 & VAR_7) ==
    VAR_6) {
   VAR_11 = VAR_1;
   break;
  }

 case 129:
  VAR_11 = VAR_4;
 }

 check_max:
 if (VAR_11 > VAR_8->cur_max_bandwidth)
  VAR_11 = VAR_8->cur_max_bandwidth;
 return VAR_11;
}
