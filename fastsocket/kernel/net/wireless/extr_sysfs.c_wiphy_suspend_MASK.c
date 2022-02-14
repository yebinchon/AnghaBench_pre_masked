
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ registered; } ;
struct cfg80211_registered_device {int * wowlan; TYPE_2__* ops; TYPE_1__ wiphy; int suspend_at; } ;
typedef int pm_message_t ;
struct TYPE_4__ {scalar_t__ suspend; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 struct cfg80211_registered_device* FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cfg80211_registered_device*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, pm_message_t VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 VAR_2->suspend_at = FUNC_2();

 FUNC_4();
 if (VAR_2->wiphy.registered) {
  if (!VAR_2->wowlan)
   FUNC_0(VAR_2);
  if (VAR_2->ops->suspend)
   VAR_3 = FUNC_3(VAR_2, VAR_2->wowlan);
  if (VAR_3 == 1) {

   FUNC_0(VAR_2);
   VAR_3 = FUNC_3(VAR_2, ((void*)0));
  }
 }
 FUNC_5();

 return VAR_3;
}
