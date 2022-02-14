
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int cac_started; unsigned long cac_start_time; int channel; struct wiphy* wiphy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
typedef int gfp_t ;
typedef enum nl80211_radar_event { ____Placeholder_nl80211_radar_event } nl80211_radar_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_2 (struct wiphy*,struct cfg80211_chan_def*,int ) ;
 int VAR_3 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct cfg80211_chan_def*,int,struct net_device*,int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct net_device*,int) ;
 struct cfg80211_registered_device* FUNC_7 (struct wiphy*) ;

void FUNC_8(struct net_device *VAR_4,
   enum nl80211_radar_event VAR_5, gfp_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_4->ieee80211_ptr;
 struct wiphy *VAR_8 = VAR_7->wiphy;
 struct cfg80211_registered_device *VAR_9 = FUNC_7(VAR_8);
 struct cfg80211_chan_def VAR_10;
 unsigned long VAR_11;

 FUNC_6(VAR_4, VAR_5);

 if (FUNC_0(!VAR_7->cac_started))
  return;

 if (FUNC_0(!VAR_7->channel))
  return;

 FUNC_1(&VAR_10, VAR_7->channel, VAR_1);

 switch (VAR_5) {
 case 128:
  VAR_11 = VAR_7->cac_start_time +
     FUNC_3(VAR_0);
  FUNC_0(!FUNC_5(VAR_3, VAR_11));
  FUNC_2(VAR_8, &VAR_10, VAR_2);
  break;
 case 129:
  break;
 default:
  FUNC_0(1);
  return;
 }
 VAR_7->cac_started = 0;

 FUNC_4(VAR_9, &VAR_10, VAR_5, VAR_4, VAR_6);
}
