
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211vap {int iv_ic; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_qosframe_addr4 {int i_addr2; int i_addr3; int i_addr4; } ;
struct ieee80211_meshcntl_ae10 {int mc_flags; int mc_addr5; int mc_addr6; } ;
struct ieee80211_meshcntl {int dummy; } ;
struct ieee80211_mesh_state {TYPE_1__* ms_ppath; } ;
struct ieee80211_mesh_route {int rt_flags; } ;
struct ieee80211_frame {int dummy; } ;
struct TYPE_2__ {int mpp_inact; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ieee80211vap*,int ,int ,char*,int ,char*,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,char*) ;
 struct ieee80211_mesh_route* FUNC_5 (struct ieee80211vap*,int ) ;
 int FUNC_6 (struct ieee80211_mesh_route*,int ) ;
 int FUNC_7 (struct ieee80211vap*,struct mbuf*,struct ieee80211_meshcntl const*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211vap *VAR_6, struct mbuf *VAR_7,
    struct ieee80211_frame *VAR_8, const struct ieee80211_meshcntl *VAR_9)
{
 struct ieee80211_qosframe_addr4 *VAR_10;
 const struct ieee80211_meshcntl_ae10 *VAR_11;
 struct ieee80211_mesh_state *VAR_12 = VAR_6->iv_mesh;
 struct ieee80211_mesh_route *VAR_13;
 int VAR_14;


 FUNC_3(VAR_6->iv_ic);

 VAR_10 = (struct ieee80211_qosframe_addr4 *)VAR_8;
 VAR_11 = (const struct ieee80211_meshcntl_ae10 *)VAR_9;
 VAR_13 = FUNC_5(VAR_6, VAR_10->i_addr4);
 FUNC_4(VAR_13 != ((void*)0), ("no route"));
 FUNC_6(VAR_13, FUNC_8(VAR_12->ms_ppath->mpp_inact));
 VAR_13 = ((void*)0);

 VAR_14 = VAR_11->mc_flags & VAR_4;
 FUNC_4(VAR_14 == VAR_2 ||
     VAR_14 == VAR_3, ("bad AE %d", VAR_14));
 if (VAR_14 == VAR_3) {
  if (FUNC_1(VAR_11->mc_addr5, VAR_10->i_addr3)) {
   return (0);
  }

  VAR_13 = FUNC_5(VAR_6, VAR_11->mc_addr5);
  if (VAR_13 != ((void*)0) &&
      (VAR_13->rt_flags & VAR_1) &&
      (VAR_13->rt_flags & VAR_0) == 0) {




   FUNC_0(VAR_10->i_addr3, VAR_11->mc_addr5);
   FUNC_7(VAR_6, VAR_7,
       (const struct ieee80211_meshcntl *)VAR_11);
   return (1);
  }




  FUNC_2(VAR_6, VAR_5, VAR_10->i_addr2,
      "forward frame to DS, SA(%6D) DA(%6D)",
      VAR_11->mc_addr6, ":", VAR_11->mc_addr5, ":");
 }
 return (0);
}
