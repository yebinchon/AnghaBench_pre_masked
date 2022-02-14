
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ieee80211vap {int iv_ic; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_qosframe_addr4 {int i_addr4; int i_addr3; int i_addr2; } ;
struct ieee80211_meshcntl {int dummy; } ;
struct ieee80211_mesh_state {TYPE_1__* ms_ppath; } ;
struct ieee80211_mesh_route {int dummy; } ;
struct ieee80211_frame {int dummy; } ;
struct TYPE_2__ {int mpp_inact; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211vap*,int ,int ,char*,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct ieee80211_mesh_route* FUNC_3 (struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211_mesh_route*,int ) ;
 int FUNC_5 (struct ieee80211vap*,struct mbuf*,struct ieee80211_meshcntl const*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_1, struct mbuf *VAR_2,
    struct ieee80211_frame *VAR_3, const struct ieee80211_meshcntl *VAR_4)
{
 struct ieee80211_qosframe_addr4 *VAR_5;
 struct ieee80211_mesh_state *VAR_6 = VAR_1->iv_mesh;
 struct ieee80211_mesh_route *VAR_7, *VAR_8;


 FUNC_1(VAR_1->iv_ic);

 VAR_5 = (struct ieee80211_qosframe_addr4 *)VAR_3;
 VAR_7 = FUNC_3(VAR_1, VAR_5->i_addr3);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, VAR_5->i_addr2,
      "no route to meshDA(%6D)", VAR_5->i_addr3, ":");







  return (-1);
 }

 FUNC_4(VAR_7, FUNC_6(
     VAR_6->ms_ppath->mpp_inact));


 VAR_8 = FUNC_3(VAR_1, VAR_5->i_addr4);
 FUNC_2(VAR_8 != ((void*)0), ("no route"));
 FUNC_4(VAR_8, FUNC_6(
     VAR_6->ms_ppath->mpp_inact));

 FUNC_5(VAR_1, VAR_2, VAR_4);
 return (1);
}
