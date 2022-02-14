
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int debugfs_dir; } ;
struct TYPE_6__ {int * default_multicast_key; int * default_unicast_key; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; TYPE_2__ debugfs; scalar_t__ default_multicast_key; TYPE_4__* local; scalar_t__ default_unicast_key; } ;
struct TYPE_5__ {int cnt; } ;
struct ieee80211_key {TYPE_1__ debugfs; } ;
struct TYPE_8__ {int key_mtx; } ;


 void* FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int *) ;
 struct ieee80211_key* FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(struct ieee80211_sub_if_data *VAR_0)
{
 char VAR_1[50];
 struct ieee80211_key *VAR_2;

 if (!VAR_0->vif.debugfs_dir)
  return;

 FUNC_3(&VAR_0->local->key_mtx);

 if (VAR_0->debugfs.default_unicast_key) {
  FUNC_1(VAR_0->debugfs.default_unicast_key);
  VAR_0->debugfs.default_unicast_key = ((void*)0);
 }

 if (VAR_0->default_unicast_key) {
  VAR_2 = FUNC_2(VAR_0->local,
       VAR_0->default_unicast_key);
  FUNC_4(VAR_1, "../keys/%d", VAR_2->debugfs.cnt);
  VAR_0->debugfs.default_unicast_key =
   FUNC_0("default_unicast_key",
            VAR_0->vif.debugfs_dir, VAR_1);
 }

 if (VAR_0->debugfs.default_multicast_key) {
  FUNC_1(VAR_0->debugfs.default_multicast_key);
  VAR_0->debugfs.default_multicast_key = ((void*)0);
 }

 if (VAR_0->default_multicast_key) {
  VAR_2 = FUNC_2(VAR_0->local,
       VAR_0->default_multicast_key);
  FUNC_4(VAR_1, "../keys/%d", VAR_2->debugfs.cnt);
  VAR_0->debugfs.default_multicast_key =
   FUNC_0("default_multicast_key",
            VAR_0->vif.debugfs_dir, VAR_1);
 }
}
