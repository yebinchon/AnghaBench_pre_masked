
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ dot11MeshHWMPRootMode; int dot11MeshHWMProotInterval; int dot11MeshHWMPRannInterval; } ;
struct ieee80211_if_mesh {int mesh_path_root_timer; TYPE_2__ mshcfg; } ;
struct TYPE_3__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_if_mesh *VAR_2 = &VAR_1->u.mesh;
 u32 VAR_3;

 FUNC_1(VAR_1);

 if (VAR_2->mshcfg.dot11MeshHWMPRootMode == VAR_0)
  VAR_3 = VAR_2->mshcfg.dot11MeshHWMPRannInterval;
 else
  VAR_3 = VAR_2->mshcfg.dot11MeshHWMProotInterval;

 FUNC_2(&VAR_2->mesh_path_root_timer,
    FUNC_3(FUNC_0(VAR_3)));
}
