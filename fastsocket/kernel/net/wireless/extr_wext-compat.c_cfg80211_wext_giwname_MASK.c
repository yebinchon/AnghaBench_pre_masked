
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {TYPE_1__* wiphy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int ht_supported; } ;
struct ieee80211_supported_band {int n_bitrates; TYPE_3__ ht_cap; TYPE_2__* bitrates; } ;
struct TYPE_5__ {int bitrate; } ;
struct TYPE_4__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

int FUNC_2(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     char *VAR_5, char *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_3->ieee80211_ptr;
 struct ieee80211_supported_band *VAR_8;
 bool VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_7->wiphy->bands[VAR_2];
 if (VAR_8) {
  VAR_10 = 1;
  VAR_9 |= VAR_8->ht_cap.ht_supported;
 }

 VAR_8 = VAR_7->wiphy->bands[VAR_1];
 if (VAR_8) {
  int VAR_13;

  for (VAR_13 = 0; VAR_13 < VAR_8->n_bitrates; VAR_13++) {
   if (VAR_8->bitrates[VAR_13].bitrate == 10)
    VAR_11 = 1;
   if (VAR_8->bitrates[VAR_13].bitrate == 60)
    VAR_12 = 1;
  }
  VAR_9 |= VAR_8->ht_cap.ht_supported;
 }

 FUNC_1(VAR_5, "IEEE 802.11");
 if (VAR_10)
  FUNC_0(VAR_5, "a");
 if (VAR_11)
  FUNC_0(VAR_5, "b");
 if (VAR_12)
  FUNC_0(VAR_5, "g");
 if (VAR_9)
  FUNC_0(VAR_5, "n");

 return 0;
}
