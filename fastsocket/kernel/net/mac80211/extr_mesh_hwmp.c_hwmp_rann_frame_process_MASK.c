
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct mesh_path {scalar_t__ sn; scalar_t__ rann_metric; int flags; int is_root; int rann_snd_addr; scalar_t__ last_preq_to_root; } ;
struct TYPE_8__ {scalar_t__ dot11MeshForwarding; } ;
struct TYPE_7__ {int dropped_frames_ttl; int dropped_frames_no_route; } ;
struct ieee80211_if_mesh {TYPE_4__ mshcfg; TYPE_3__ mshstats; } ;
struct TYPE_6__ {struct ieee80211_if_mesh mesh; } ;
struct TYPE_5__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_rann_ie {int rann_ttl; int rann_flags; int* rann_addr; int rann_hopcount; int rann_metric; int rann_interval; int rann_seq; } ;
struct ieee80211_mgmt {int sa; } ;
struct ieee80211_local {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mesh_path*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ieee80211_local*,struct sta_info*) ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct mesh_path* FUNC_7 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_8 (struct mesh_path*) ;
 struct mesh_path* FUNC_9 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_10 (int ,int,int const*,int ,int ,int *,int ,int ,int,int,int ,int ,int ,struct ieee80211_sub_if_data*) ;
 int FUNC_11 (struct mesh_path*,int) ;
 int FUNC_12 (struct ieee80211_sub_if_data*,char*,int const*,...) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (struct ieee80211_sub_if_data*) ;
 struct sta_info* FUNC_16 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_sub_if_data *VAR_10,
        struct ieee80211_mgmt *VAR_11,
        const struct ieee80211_rann_ie *VAR_12)
{
 struct ieee80211_if_mesh *VAR_13 = &VAR_10->u.mesh;
 struct ieee80211_local *VAR_14 = VAR_10->local;
 struct sta_info *VAR_15;
 struct mesh_path *VAR_16;
 u8 VAR_17, VAR_18, VAR_19;
 const u8 *VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24;
 bool VAR_25;

 VAR_17 = VAR_12->rann_ttl;
 VAR_18 = VAR_12->rann_flags;
 VAR_25 = !!(VAR_18 & VAR_7);
 VAR_20 = VAR_12->rann_addr;
 VAR_21 = FUNC_5(VAR_12->rann_seq);
 VAR_24 = FUNC_5(VAR_12->rann_interval);
 VAR_19 = VAR_12->rann_hopcount;
 VAR_19++;
 VAR_22 = FUNC_5(VAR_12->rann_metric);


 if (FUNC_4(VAR_20, VAR_10->vif.addr))
  return;

 FUNC_12(VAR_10,
    "received RANN from %pM via neighbour %pM (is_gate=%d)\n",
    VAR_20, VAR_11->sa, VAR_25);

 FUNC_13();
 VAR_15 = FUNC_16(VAR_10, VAR_11->sa);
 if (!VAR_15) {
  FUNC_14();
  return;
 }

 VAR_23 = FUNC_2(VAR_14, VAR_15);

 VAR_16 = FUNC_9(VAR_10, VAR_20);
 if (!VAR_16) {
  VAR_16 = FUNC_7(VAR_10, VAR_20);
  if (FUNC_0(VAR_16)) {
   FUNC_14();
   VAR_10->u.mesh.mshstats.dropped_frames_no_route++;
   return;
  }
 }

 if (!(FUNC_1(VAR_16->sn, VAR_21)) &&
     !(VAR_16->sn == VAR_21 && VAR_22 < VAR_16->rann_metric)) {
  FUNC_14();
  return;
 }

 if ((!(VAR_16->flags & (VAR_1 | VAR_3)) ||
      (FUNC_17(VAR_9, VAR_16->last_preq_to_root +
      FUNC_15(VAR_10)) ||
      FUNC_18(VAR_9, VAR_16->last_preq_to_root))) &&
      !(VAR_16->flags & VAR_2) && (VAR_17 != 0)) {
  FUNC_12(VAR_10,
     "time to refresh root mpath %pM\n",
     VAR_20);
  FUNC_11(VAR_16, VAR_6 | VAR_5);
  VAR_16->last_preq_to_root = VAR_9;
 }

 VAR_16->sn = VAR_21;
 VAR_16->rann_metric = VAR_22 + VAR_23;
 VAR_16->is_root = 1;


 FUNC_6(VAR_16->rann_snd_addr, VAR_11->sa, VAR_0);

 if (VAR_25)
  FUNC_8(VAR_16);

 if (VAR_17 <= 1) {
  VAR_13->mshstats.dropped_frames_ttl++;
  FUNC_14();
  return;
 }
 VAR_17--;

 if (VAR_13->mshcfg.dot11MeshForwarding) {
  FUNC_10(VAR_4, VAR_18, VAR_20,
           FUNC_3(VAR_21),
           0, ((void*)0), 0, VAR_8,
           VAR_19, VAR_17, FUNC_3(VAR_24),
           FUNC_3(VAR_22 + VAR_23),
           0, VAR_10);
 }

 FUNC_14();
}
