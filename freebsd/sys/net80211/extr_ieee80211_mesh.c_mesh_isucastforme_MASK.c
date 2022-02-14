
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_myaddr; } ;
struct ieee80211_meshcntl_ae10 {int mc_addr5; } ;
struct ieee80211_meshcntl {int mc_flags; } ;
struct ieee80211_mesh_route {int rt_flags; } ;
struct ieee80211_frame {int* i_fc; int i_addr3; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 struct ieee80211_mesh_route* FUNC_2 (struct ieee80211vap*,int ) ;

__attribute__((used)) static __inline int
FUNC_3(struct ieee80211vap *VAR_5, const struct ieee80211_frame *VAR_6,
    const struct ieee80211_meshcntl *VAR_7)
{
 int VAR_8 = VAR_7->mc_flags & 3;

 FUNC_1((VAR_6->i_fc[1] & VAR_1) == VAR_0,
     ("bad dir 0x%x:0x%x", VAR_6->i_fc[0], VAR_6->i_fc[1]));
 FUNC_1(VAR_8 == VAR_3 || VAR_8 == VAR_4,
     ("bad AE %d", VAR_8));
 if (VAR_8 == VAR_4) {
  const struct ieee80211_meshcntl_ae10 *VAR_9 =
      (const struct ieee80211_meshcntl_ae10 *) VAR_7;
  struct ieee80211_mesh_route *VAR_10 =
      FUNC_2(VAR_5, VAR_9->mc_addr5);

  return (VAR_10 != ((void*)0) &&
      (VAR_10->rt_flags & VAR_2));
 } else
  return FUNC_0(VAR_6->i_addr3, VAR_5->iv_myaddr);
}
