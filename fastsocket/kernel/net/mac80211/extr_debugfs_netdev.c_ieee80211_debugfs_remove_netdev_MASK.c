
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * debugfs_dir; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0)
{
 if (!VAR_0->vif.debugfs_dir)
  return;

 FUNC_0(VAR_0->vif.debugfs_dir);
 VAR_0->vif.debugfs_dir = ((void*)0);
}
