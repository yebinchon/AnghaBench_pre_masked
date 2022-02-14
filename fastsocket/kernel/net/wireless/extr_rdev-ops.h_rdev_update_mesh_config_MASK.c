
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mesh_config {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* update_mesh_config ) (int *,struct net_device*,int ,struct mesh_config const*) ;} ;


 int FUNC_0 (int *,struct net_device*,int ,struct mesh_config const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,int ,struct mesh_config const*) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg80211_registered_device *VAR_0,
   struct net_device *VAR_1, u32 VAR_2,
   const struct mesh_config *VAR_3)
{
 int VAR_4;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_0->ops->update_mesh_config(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->wiphy, VAR_4);
 return VAR_4;
}
