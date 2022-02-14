
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wireless_dev {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; } ;
struct cfg80211_assoc_request {int dummy; } ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,struct ieee80211_channel*,int const*,int const*,int,struct cfg80211_assoc_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;

int FUNC_5(struct cfg80211_registered_device *VAR_0,
   struct net_device *VAR_1,
   struct ieee80211_channel *VAR_2,
   const u8 *VAR_3,
   const u8 *VAR_4, int VAR_5,
   struct cfg80211_assoc_request *VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_1->ieee80211_ptr;
 int VAR_8;

 FUNC_1(&VAR_0->devlist_mtx);
 FUNC_3(VAR_7);
 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6);
 FUNC_4(VAR_7);
 FUNC_2(&VAR_0->devlist_mtx);

 return VAR_8;
}
