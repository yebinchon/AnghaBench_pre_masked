
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ieee80211vap {scalar_t__ iv_opmode; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_mesh_state {int ms_neighbors; int ms_flags; TYPE_2__* ms_pmetric; TYPE_1__* ms_ppath; } ;
struct TYPE_4__ {int mpm_ie; } ;
struct TYPE_3__ {int mpp_ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int,char*) ;

uint8_t *
FUNC_1(uint8_t *VAR_13, struct ieee80211vap *VAR_14)
{
 const struct ieee80211_mesh_state *VAR_15 = VAR_14->iv_mesh;
 uint16_t VAR_16;

 FUNC_0(VAR_14->iv_opmode == VAR_12, ("not a MBSS vap"));

 *VAR_13++ = VAR_0;
 *VAR_13++ = VAR_10;
 *VAR_13++ = VAR_15->ms_ppath->mpp_ie;
 *VAR_13++ = VAR_15->ms_pmetric->mpm_ie;
 *VAR_13++ = VAR_4;
 *VAR_13++ = VAR_6;
 *VAR_13++ = VAR_1;

 *VAR_13 = (VAR_15->ms_neighbors > VAR_11 ?
     VAR_11 : VAR_15->ms_neighbors) << 1;
 if (VAR_15->ms_flags & VAR_9)
  *VAR_13 |= VAR_5;
 VAR_13 += 1;
 VAR_16 = 0;
 if (VAR_15->ms_flags & VAR_7)
  VAR_16 |= VAR_2;
 if (VAR_15->ms_flags & VAR_8)
  VAR_16 |= VAR_3;
 *VAR_13++ = VAR_16;
 return VAR_13;
}
