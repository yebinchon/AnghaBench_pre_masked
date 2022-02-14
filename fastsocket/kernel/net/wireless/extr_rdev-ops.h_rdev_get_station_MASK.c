
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct station_info {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_station ) (int *,struct net_device*,int *,struct station_info*) ;} ;


 int FUNC_0 (int *,struct net_device*,int *,struct station_info*) ;
 int FUNC_1 (int *,struct net_device*,int *) ;
 int FUNC_2 (int *,int,struct station_info*) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
       struct net_device *VAR_1, u8 *VAR_2,
       struct station_info *VAR_3)
{
 int VAR_4;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_4 = VAR_0->ops->get_station(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->wiphy, VAR_4, VAR_3);
 return VAR_4;
}
