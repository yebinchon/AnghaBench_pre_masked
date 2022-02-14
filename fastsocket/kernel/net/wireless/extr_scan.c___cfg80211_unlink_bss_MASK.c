
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_registered_device {int bss_tree; int bss_lock; } ;
struct TYPE_2__ {int hidden_beacon_bss; } ;
struct cfg80211_internal_bss {int rbn; int list; int hidden_list; TYPE_1__ pub; } ;


 int FUNC_0 (struct cfg80211_registered_device*,struct cfg80211_internal_bss*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static bool FUNC_5(struct cfg80211_registered_device *VAR_0,
      struct cfg80211_internal_bss *VAR_1)
{
 FUNC_3(&VAR_0->bss_lock);

 if (!FUNC_2(&VAR_1->hidden_list)) {




  if (!VAR_1->pub.hidden_beacon_bss)
   return 0;




  FUNC_1(&VAR_1->hidden_list);
 }

 FUNC_1(&VAR_1->list);
 FUNC_4(&VAR_1->rbn, &VAR_0->bss_tree);
 FUNC_0(VAR_0, VAR_1);
 return 1;
}
