
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int add_has_run; int dir; } ;
struct TYPE_6__ {int addr; } ;
struct sta_info {TYPE_2__ debugfs; TYPE_3__ sta; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct TYPE_4__ {struct dentry* subdir_stations; } ;
struct ieee80211_sub_if_data {TYPE_1__ debugfs; } ;
struct ieee80211_local {int dummy; } ;
struct dentry {int dummy; } ;
typedef int mac ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,struct dentry*) ;
 int VAR_5 ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,TYPE_3__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int *,int,char*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

void FUNC_5(struct sta_info *VAR_29)
{
 struct ieee80211_local *VAR_30 = VAR_29->local;
 struct ieee80211_sub_if_data *VAR_31 = VAR_29->sdata;
 struct dentry *VAR_32 = VAR_29->sdata->debugfs.subdir_stations;
 u8 VAR_33[3*VAR_0];

 VAR_29->debugfs.add_has_run = 1;

 if (!VAR_32)
  return;

 FUNC_4(VAR_33, sizeof(VAR_33), "%pM", VAR_29->sta.addr);
 VAR_29->debugfs.dir = FUNC_2(VAR_33, VAR_32);
 if (!VAR_29->debugfs.dir)
  return;

 FUNC_0(VAR_6);
 FUNC_0(VAR_14);
 FUNC_0(VAR_8);
 FUNC_0(VAR_3);
 FUNC_0(VAR_11);
 FUNC_0(VAR_1);
 FUNC_0(VAR_5);
 FUNC_0(VAR_12);
 FUNC_0(VAR_2);
 FUNC_0(VAR_7);
 FUNC_0(VAR_27);
 FUNC_0(VAR_9);
 FUNC_0(VAR_4);
 FUNC_0(VAR_10);

 FUNC_1(VAR_19, VAR_19);
 FUNC_1(VAR_24, VAR_24);
 FUNC_1(VAR_15, VAR_15);
 FUNC_1(VAR_20, VAR_20);
 FUNC_1(VAR_17, VAR_13);
 FUNC_1(VAR_18, VAR_18);
 FUNC_1(VAR_16, VAR_16);
 FUNC_1(VAR_23, VAR_23);
 FUNC_1(VAR_21, VAR_22);
 FUNC_1(VAR_26, VAR_26);
 FUNC_1(VAR_25, VAR_25);
 FUNC_1(VAR_28, VAR_28);

 FUNC_3(VAR_30, VAR_31, &VAR_29->sta, VAR_29->debugfs.dir);
}
