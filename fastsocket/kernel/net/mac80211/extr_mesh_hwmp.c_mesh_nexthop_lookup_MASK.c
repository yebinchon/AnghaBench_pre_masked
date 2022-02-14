
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int addr; } ;
struct sta_info {TYPE_4__ sta; } ;
struct sk_buff {scalar_t__ data; } ;
struct mesh_path {int flags; int next_hop; scalar_t__ exp_time; } ;
struct TYPE_10__ {int addr; } ;
struct TYPE_6__ {int path_refresh_time; } ;
struct TYPE_7__ {TYPE_1__ mshcfg; } ;
struct TYPE_8__ {TYPE_2__ mesh; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; TYPE_3__ u; } ;
struct ieee80211_hdr {int addr2; int addr1; int addr4; int * addr3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sta_info*,struct ieee80211_hdr*) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ) ;
 struct mesh_path* FUNC_3 (struct ieee80211_sub_if_data*,int *) ;
 int FUNC_4 (struct mesh_path*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 struct sta_info* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

int FUNC_10(struct ieee80211_sub_if_data *VAR_8,
   struct sk_buff *VAR_9)
{
 struct mesh_path *VAR_10;
 struct sta_info *VAR_11;
 struct ieee80211_hdr *VAR_12 = (struct ieee80211_hdr *) VAR_9->data;
 u8 *VAR_13 = VAR_12->addr3;
 int VAR_14 = -VAR_0;

 FUNC_7();
 VAR_10 = FUNC_3(VAR_8, VAR_13);

 if (!VAR_10 || !(VAR_10->flags & VAR_2))
  goto endlookup;

 if (FUNC_9(VAR_7,
         VAR_10->exp_time -
         FUNC_5(VAR_8->u.mesh.mshcfg.path_refresh_time)) &&
     FUNC_0(VAR_8->vif.addr, VAR_12->addr4) &&
     !(VAR_10->flags & VAR_4) &&
     !(VAR_10->flags & VAR_3))
  FUNC_4(VAR_10, VAR_6 | VAR_5);

 VAR_11 = FUNC_6(VAR_10->next_hop);
 if (VAR_11) {
  FUNC_2(VAR_12->addr1, VAR_11->sta.addr, VAR_1);
  FUNC_2(VAR_12->addr2, VAR_8->vif.addr, VAR_1);
  FUNC_1(VAR_8, VAR_11, VAR_12);
  VAR_14 = 0;
 }

endlookup:
 FUNC_8();
 return VAR_14;
}
