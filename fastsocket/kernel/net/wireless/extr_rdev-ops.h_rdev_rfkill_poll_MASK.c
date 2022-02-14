
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* rfkill_poll ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct cfg80211_registered_device *VAR_0)
{
 FUNC_2(&VAR_0->wiphy);
 VAR_0->ops->rfkill_poll(&VAR_0->wiphy);
 FUNC_1(&VAR_0->wiphy);
}
