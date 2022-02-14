
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vif_params {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_2__ {int (* change_virtual_intf ) (int *,struct net_device*,int,int *,struct vif_params*) ;} ;


 int FUNC_0 (int *,struct net_device*,int,int *,struct vif_params*) ;
 int FUNC_1 (int *,struct net_device*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
    struct net_device *VAR_1, enum nl80211_iftype VAR_2,
    u32 *VAR_3, struct vif_params *VAR_4)
{
 int VAR_5;
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_5 = VAR_0->ops->change_virtual_intf(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3,
          VAR_4);
 FUNC_2(&VAR_0->wiphy, VAR_5);
 return VAR_5;
}
