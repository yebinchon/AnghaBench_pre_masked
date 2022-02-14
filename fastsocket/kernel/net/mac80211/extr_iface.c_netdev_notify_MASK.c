
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int name; TYPE_2__* ieee80211_ptr; } ;
struct ieee80211_sub_if_data {int name; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {scalar_t__ privid; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_3,
    unsigned long VAR_4,
    void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct ieee80211_sub_if_data *VAR_7;

 if (VAR_4 != VAR_1)
  return 0;

 if (!VAR_6->ieee80211_ptr || !VAR_6->ieee80211_ptr->wiphy)
  return 0;

 if (VAR_6->ieee80211_ptr->wiphy->privid != VAR_2)
  return 0;

 VAR_7 = FUNC_0(VAR_6);

 FUNC_2(VAR_7->name, VAR_6->name, VAR_0);

 FUNC_1(VAR_7);
 return 0;
}
