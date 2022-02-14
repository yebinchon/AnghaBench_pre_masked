
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* debugfs_dir; } ;
struct ieee80211_sub_if_data {char* name; TYPE_1__ vif; } ;
struct dentry {int d_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dentry*,int ,char*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,char*,char*) ;
 int FUNC_2 (char*,char*,char*) ;

void FUNC_3(struct ieee80211_sub_if_data *VAR_1)
{
 struct dentry *VAR_2;
 char VAR_3[10 + VAR_0];

 VAR_2 = VAR_1->vif.debugfs_dir;

 if (!VAR_2)
  return;

 FUNC_2(VAR_3, "netdev:%s", VAR_1->name);
 if (!FUNC_0(VAR_2->d_parent, VAR_2, VAR_2->d_parent, VAR_3))
  FUNC_1(VAR_1,
     "debugfs: failed to rename debugfs dir to %s\n",
     VAR_3);
}
