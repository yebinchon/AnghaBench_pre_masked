
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flush_pmksa ) (int *,struct net_device*) ;} ;


 int FUNC_0 (int *,struct net_device*) ;
 int FUNC_1 (int *,struct net_device*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
       struct net_device *VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_0->wiphy, VAR_1);
 VAR_2 = VAR_0->ops->flush_pmksa(&VAR_0->wiphy, VAR_1);
 FUNC_2(&VAR_0->wiphy, VAR_2);
 return VAR_2;
}
