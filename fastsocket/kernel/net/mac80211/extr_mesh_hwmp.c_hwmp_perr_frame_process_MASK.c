
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int addr; } ;
struct sta_info {TYPE_3__ sta; } ;
struct mesh_path {int flags; int state_lock; int sn; } ;
struct TYPE_8__ {int dot11MeshForwarding; } ;
struct TYPE_6__ {int dropped_frames_ttl; } ;
struct ieee80211_if_mesh {TYPE_4__ mshcfg; TYPE_2__ mshstats; } ;
struct TYPE_5__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_mgmt {int* sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int const*,int ) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,int,int const*,int ,int ,int ) ;
 struct mesh_path* FUNC_9 (struct ieee80211_sub_if_data*,int const*) ;
 struct sta_info* FUNC_10 (struct mesh_path*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_sub_if_data *VAR_3,
        struct ieee80211_mgmt *VAR_4,
        const u8 *VAR_5)
{
 struct ieee80211_if_mesh *VAR_6 = &VAR_3->u.mesh;
 struct mesh_path *VAR_7;
 u8 VAR_8;
 const u8 *VAR_9, *VAR_10;
 u32 VAR_11;
 u16 VAR_12;

 VAR_9 = VAR_4->sa;
 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 <= 1) {
  VAR_6->mshstats.dropped_frames_ttl++;
  return;
 }
 VAR_8--;
 VAR_10 = FUNC_0(VAR_5);
 VAR_11 = FUNC_2(VAR_5);
 VAR_12 = FUNC_1(VAR_5);

 FUNC_11();
 VAR_7 = FUNC_9(VAR_3, VAR_10);
 if (VAR_7) {
  struct sta_info *VAR_13;

  FUNC_13(&VAR_7->state_lock);
  VAR_13 = FUNC_10(VAR_7);
  if (VAR_7->flags & VAR_0 &&
      FUNC_7(VAR_9, VAR_13->sta.addr) &&
      (!(VAR_7->flags & VAR_1) ||
      FUNC_4(VAR_11, VAR_7->sn))) {
   VAR_7->flags &= ~VAR_0;
   VAR_7->sn = VAR_11;
   FUNC_14(&VAR_7->state_lock);
   if (!VAR_6->mshcfg.dot11MeshForwarding)
    goto endperr;
   FUNC_8(VAR_3, VAR_8, VAR_10,
        FUNC_6(VAR_11),
        FUNC_5(VAR_12),
        VAR_2);
  } else
   FUNC_14(&VAR_7->state_lock);
 }
endperr:
 FUNC_12();
}
