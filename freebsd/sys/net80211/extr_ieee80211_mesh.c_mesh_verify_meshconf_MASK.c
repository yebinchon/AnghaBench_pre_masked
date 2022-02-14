
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_meshconf_ie {scalar_t__ conf_pselid; scalar_t__ conf_pmetid; scalar_t__ conf_ccid; scalar_t__ conf_syncid; scalar_t__ conf_authid; int conf_cap; } ;
struct ieee80211_mesh_state {TYPE_2__* ms_pmetric; TYPE_1__* ms_ppath; } ;
struct TYPE_4__ {scalar_t__ mpm_ie; } ;
struct TYPE_3__ {scalar_t__ mpp_ie; } ;


 int FUNC_0 (struct ieee80211vap*,int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_3, const uint8_t *VAR_4)
{
 const struct ieee80211_meshconf_ie *VAR_5 =
     (const struct ieee80211_meshconf_ie *) VAR_4;
 const struct ieee80211_mesh_state *VAR_6 = VAR_3->iv_mesh;

 if (VAR_5 == ((void*)0))
  return 1;
 if (VAR_5->conf_pselid != VAR_6->ms_ppath->mpp_ie) {
  FUNC_0(VAR_3, VAR_2,
      "unknown path selection algorithm: 0x%x\n",
      VAR_5->conf_pselid);
  return 1;
 }
 if (VAR_5->conf_pmetid != VAR_6->ms_pmetric->mpm_ie) {
  FUNC_0(VAR_3, VAR_2,
      "unknown path metric algorithm: 0x%x\n",
      VAR_5->conf_pmetid);
  return 1;
 }
 if (VAR_5->conf_ccid != 0) {
  FUNC_0(VAR_3, VAR_2,
      "unknown congestion control algorithm: 0x%x\n",
      VAR_5->conf_ccid);
  return 1;
 }
 if (VAR_5->conf_syncid != VAR_1) {
  FUNC_0(VAR_3, VAR_2,
      "unknown sync algorithm: 0x%x\n",
      VAR_5->conf_syncid);
  return 1;
 }
 if (VAR_5->conf_authid != 0) {
  FUNC_0(VAR_3, VAR_2,
      "unknown auth auth algorithm: 0x%x\n",
      VAR_5->conf_pselid);
  return 1;
 }

 if (!(VAR_5->conf_cap & VAR_0)) {
  FUNC_0(VAR_3, VAR_2,
      "not accepting peers: 0x%x\n", VAR_5->conf_cap);
  return 1;
 }
 return 0;
}
