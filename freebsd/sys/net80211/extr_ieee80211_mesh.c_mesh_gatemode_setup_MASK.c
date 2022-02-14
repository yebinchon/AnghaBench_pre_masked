
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_mesh_state {int ms_flags; int ms_gatetimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct ieee80211vap*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct ieee80211vap *VAR_4)
{
 struct ieee80211_mesh_state *VAR_5 = VAR_4->iv_mesh;







 if (VAR_5->ms_flags & VAR_1 ||
     (VAR_5->ms_flags & VAR_0) == 0) {
  FUNC_0(&VAR_5->ms_gatetimer);
  return ;
 }
 FUNC_1(&VAR_5->ms_gatetimer, VAR_2,
     VAR_3, VAR_4);
}
