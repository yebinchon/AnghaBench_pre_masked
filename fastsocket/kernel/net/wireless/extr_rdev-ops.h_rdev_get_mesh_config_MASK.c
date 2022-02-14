
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mesh_config {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_mesh_config ) (int *,struct net_device*,struct mesh_config*) ;} ;


 int FUNC_0 (int *,struct net_device*,struct mesh_config*) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *,int,struct mesh_config*) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
       struct net_device *VAR_1, struct mesh_config *VAR_2)
{
 int VAR_3;
 FUNC_1(&VAR_0->wiphy, VAR_1);
 VAR_3 = VAR_0->ops->get_mesh_config(&VAR_0->wiphy, VAR_1, VAR_2);
 FUNC_2(&VAR_0->wiphy, VAR_3, VAR_2);
 return VAR_3;
}
