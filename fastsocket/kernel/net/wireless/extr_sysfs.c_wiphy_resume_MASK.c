
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ registered; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; scalar_t__ suspend_at; } ;
struct TYPE_3__ {scalar_t__ resume; } ;


 int FUNC_0 (struct cfg80211_registered_device*,scalar_t__) ;
 struct cfg80211_registered_device* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct cfg80211_registered_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;


 FUNC_0(VAR_1, FUNC_2() - VAR_1->suspend_at);

 if (VAR_1->ops->resume) {
  FUNC_4();
  if (VAR_1->wiphy.registered)
   VAR_2 = FUNC_3(VAR_1);
  FUNC_5();
 }

 return VAR_2;
}
