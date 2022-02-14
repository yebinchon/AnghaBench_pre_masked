
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_registered_device {int devlist_mtx; } ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int FUNC_0 (struct cfg80211_registered_device*,struct net_device*,struct ieee80211_channel*,int,int const*,int const*,int,int const*,int,int const*,int,int,int const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct cfg80211_registered_device *VAR_0,
         struct net_device *VAR_1, struct ieee80211_channel *VAR_2,
         enum nl80211_auth_type VAR_3, const u8 *VAR_4,
         const u8 *VAR_5, int VAR_6,
         const u8 *VAR_7, int VAR_8,
         const u8 *VAR_9, int VAR_10, int VAR_11,
         const u8 *VAR_12, int VAR_13)
{
 int VAR_14;

 FUNC_1(&VAR_0->devlist_mtx);
 FUNC_3(VAR_1->ieee80211_ptr);
 VAR_14 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_9, VAR_10, VAR_11,
       VAR_12, VAR_13);
 FUNC_4(VAR_1->ieee80211_ptr);
 FUNC_2(&VAR_0->devlist_mtx);

 return VAR_14;
}
