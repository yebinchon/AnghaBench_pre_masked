
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211_mesh_route {int rt_flags; scalar_t__ rt_nhops; int rt_lifetime; int rt_updtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct ieee80211_mesh_route*) ;
 int FUNC_3 (struct ieee80211_mesh_route*) ;
 int VAR_2 ;
 int FUNC_4 (int) ;

int
FUNC_5(struct ieee80211_mesh_route *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 uint32_t VAR_7 = 0;

 FUNC_0(VAR_3 != ((void*)0), ("route is NULL"));

 VAR_6 = VAR_2;
 FUNC_2(VAR_3);


 if (VAR_3->rt_flags & VAR_0 && VAR_3->rt_nhops == 0) {
  FUNC_3(VAR_3);
  return VAR_3->rt_lifetime;
 }

 VAR_5 = FUNC_4(VAR_6 - VAR_3->rt_updtime);
 VAR_3->rt_updtime = VAR_6;
 if (VAR_5 >= VAR_3->rt_lifetime) {
  if (VAR_4 != 0) {
   VAR_3->rt_lifetime = VAR_4;
  }
  else {
   VAR_3->rt_flags &= ~VAR_1;
   VAR_3->rt_lifetime = 0;
  }
 } else {

  VAR_3->rt_lifetime = VAR_3->rt_lifetime - VAR_5;
  VAR_3->rt_lifetime = FUNC_1(
   VAR_4, VAR_3->rt_lifetime);
 }
 VAR_7 = VAR_3->rt_lifetime;
 FUNC_3(VAR_3);

 return VAR_7;
}
