
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mesh_path {int flags; int state_lock; } ;
struct TYPE_10__ {int dropped_frames_no_route; int fwded_frames; int fwded_unicast; int dropped_frames_ttl; } ;
struct TYPE_8__ {int dot11MeshForwarding; } ;
struct ieee80211_if_mesh {TYPE_4__ mshstats; TYPE_2__ mshcfg; } ;
struct TYPE_11__ {struct ieee80211_if_mesh mesh; } ;
struct TYPE_7__ {int addr; } ;
struct ieee80211_sub_if_data {TYPE_5__ u; TYPE_1__ vif; } ;
struct ieee80211_mgmt {int dummy; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_12__ {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int* FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int const*,int ) ;
 int FUNC_10 (int*,int ,int) ;
 struct mesh_path* FUNC_11 (struct ieee80211_sub_if_data*,int const*) ;
 int FUNC_12 (int ,int,int const*,int ,int ,int const*,int ,int*,int,int,int ,int ,int ,struct ieee80211_sub_if_data*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,char*,int*) ;
 TYPE_6__* FUNC_14 (struct mesh_path*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_sub_if_data *VAR_3,
        struct ieee80211_mgmt *VAR_4,
        const u8 *VAR_5, u32 VAR_6)
{
 struct ieee80211_if_mesh *VAR_7 = &VAR_3->u.mesh;
 struct mesh_path *VAR_8;
 const u8 *VAR_9, *VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 u8 VAR_14[VAR_0];
 u32 VAR_15, VAR_16, VAR_17;

 FUNC_13(VAR_3, "received PREP from %pM\n",
    FUNC_5(VAR_5));

 VAR_10 = FUNC_3(VAR_5);
 if (FUNC_9(VAR_10, VAR_3->vif.addr))

  return;

 if (!VAR_7->mshcfg.dot11MeshForwarding)
  return;

 VAR_11 = FUNC_7(VAR_5);
 if (VAR_11 <= 1) {
  VAR_3->u.mesh.mshstats.dropped_frames_ttl++;
  return;
 }

 FUNC_15();
 VAR_8 = FUNC_11(VAR_3, VAR_10);
 if (VAR_8)
  FUNC_17(&VAR_8->state_lock);
 else
  goto fail;
 if (!(VAR_8->flags & VAR_1)) {
  FUNC_18(&VAR_8->state_lock);
  goto fail;
 }
 FUNC_10(VAR_14, FUNC_14(VAR_8)->sta.addr, VAR_0);
 FUNC_18(&VAR_8->state_lock);
 --VAR_11;
 VAR_13 = FUNC_0(VAR_5);
 VAR_17 = FUNC_2(VAR_5);
 VAR_12 = FUNC_1(VAR_5) + 1;
 VAR_9 = FUNC_5(VAR_5);
 VAR_15 = FUNC_6(VAR_5);
 VAR_16 = FUNC_4(VAR_5);

 FUNC_12(VAR_2, VAR_13, VAR_10,
  FUNC_8(VAR_16), 0, VAR_9,
  FUNC_8(VAR_15), VAR_14, VAR_12,
  VAR_11, FUNC_8(VAR_17), FUNC_8(VAR_6),
  0, VAR_3);
 FUNC_16();

 VAR_3->u.mesh.mshstats.fwded_unicast++;
 VAR_3->u.mesh.mshstats.fwded_frames++;
 return;

fail:
 FUNC_16();
 VAR_3->u.mesh.mshstats.dropped_frames_no_route++;
}
