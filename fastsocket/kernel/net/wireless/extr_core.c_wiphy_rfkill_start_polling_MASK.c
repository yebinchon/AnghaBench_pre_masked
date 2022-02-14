
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_4__ {int poll; } ;
struct cfg80211_registered_device {int rfkill; TYPE_2__ rfkill_ops; TYPE_1__* ops; } ;
struct TYPE_3__ {int rfkill_poll; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct cfg80211_registered_device* FUNC_1 (struct wiphy*) ;

void FUNC_2(struct wiphy *VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2->ops->rfkill_poll)
  return;
 VAR_2->rfkill_ops.poll = VAR_0;
 FUNC_0(VAR_2->rfkill);
}
