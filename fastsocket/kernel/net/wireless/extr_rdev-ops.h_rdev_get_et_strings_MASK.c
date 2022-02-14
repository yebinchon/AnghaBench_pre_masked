
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_et_strings ) (int *,struct net_device*,int ,int *) ;} ;


 int FUNC_0 (int *,struct net_device*,int ,int *) ;
 int FUNC_1 (int *,struct net_device*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cfg80211_registered_device *VAR_0,
           struct net_device *VAR_1, u32 VAR_2,
           u8 *VAR_3)
{
 FUNC_1(&VAR_0->wiphy, VAR_1, VAR_2);
 VAR_0->ops->get_et_strings(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->wiphy);
}
