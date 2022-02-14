
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; struct ieee80211_hwmp_state* iv_hwmp; } ;
struct ieee80211_mesh_state {int ms_flags; } ;
struct ieee80211_hwmp_state {int hs_rootmode; int hs_roottimer; } ;






 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct ieee80211vap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_5)
{
 struct ieee80211_hwmp_state *VAR_6 = VAR_5->iv_hwmp;
 struct ieee80211_mesh_state *VAR_7 = VAR_5->iv_mesh;

 switch (VAR_6->hs_rootmode) {
 case 131:
  FUNC_0(&VAR_6->hs_roottimer);
  VAR_7->ms_flags &= ~VAR_0;
  break;
 case 130:
 case 129:
  FUNC_1(&VAR_6->hs_roottimer, VAR_4,
      VAR_1, VAR_5);
  VAR_7->ms_flags |= VAR_0;
  break;
 case 128:
  FUNC_1(&VAR_6->hs_roottimer, VAR_3,
      VAR_2, VAR_5);
  VAR_7->ms_flags |= VAR_0;
  break;
 }
}
