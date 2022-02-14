
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int debugfs_dir; } ;
struct TYPE_6__ {int default_mgmt_key; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; TYPE_3__ debugfs; int default_mgmt_key; int local; } ;
struct TYPE_5__ {int cnt; } ;
struct ieee80211_key {TYPE_2__ debugfs; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char*,int) ;

void FUNC_4(struct ieee80211_sub_if_data *VAR_0)
{
 char VAR_1[50];
 struct ieee80211_key *VAR_2;

 if (!VAR_0->vif.debugfs_dir)
  return;

 VAR_2 = FUNC_2(VAR_0->local,
      VAR_0->default_mgmt_key);
 if (VAR_2) {
  FUNC_3(VAR_1, "../keys/%d", VAR_2->debugfs.cnt);
  VAR_0->debugfs.default_mgmt_key =
   FUNC_0("default_mgmt_key",
            VAR_0->vif.debugfs_dir, VAR_1);
 } else
  FUNC_1(VAR_0);
}
