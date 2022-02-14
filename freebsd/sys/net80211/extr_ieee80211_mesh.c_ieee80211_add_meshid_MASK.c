
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_mesh_state {int ms_idlen; int ms_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int ,int) ;

uint8_t *
FUNC_2(uint8_t *VAR_2, struct ieee80211vap *VAR_3)
{
 struct ieee80211_mesh_state *VAR_4 = VAR_3->iv_mesh;

 FUNC_0(VAR_3->iv_opmode == VAR_1, ("not a mbss vap"));

 *VAR_2++ = VAR_0;
 *VAR_2++ = VAR_4->ms_idlen;
 FUNC_1(VAR_2, VAR_4->ms_id, VAR_4->ms_idlen);
 return VAR_2 + VAR_4->ms_idlen;
}
