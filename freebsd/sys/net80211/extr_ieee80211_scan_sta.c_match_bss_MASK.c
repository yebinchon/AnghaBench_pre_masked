
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ tdma_ie; } ;
struct ieee80211_scan_entry {int se_capinfo; scalar_t__* se_meshid; scalar_t__* se_cc; int se_rssi; int * se_ssid; TYPE_3__* se_chan; int se_bssid; int se_macaddr; TYPE_1__ se_ies; } ;
struct sta_entry {scalar_t__ se_fails; scalar_t__ se_notseen; int se_flags; struct ieee80211_scan_entry base; } ;
struct ieee80211vap {size_t iv_des_mode; scalar_t__ iv_opmode; int iv_caps; int iv_flags_ext; int iv_flags; int iv_des_bssid; struct ieee80211_mesh_state* iv_mesh; struct ieee80211_tdma_state* iv_tdma; struct ieee80211com* iv_ic; } ;
struct TYPE_10__ {scalar_t__ country; int isocc; } ;
struct ieee80211com {TYPE_2__ ic_regdomain; int ic_chan_active; } ;
struct ieee80211_tdma_state {scalar_t__ tdma_version; } ;
struct ieee80211_tdma_param {scalar_t__ tdma_version; scalar_t__ tdma_slot; } ;
struct ieee80211_scan_state {int ss_ssid; int ss_nssid; } ;
struct ieee80211_mesh_state {scalar_t__ ms_idlen; int ms_id; } ;
struct TYPE_11__ {int ic_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int* VAR_38 ;
 int FUNC_3 (struct ieee80211vap*,TYPE_3__*,struct ieee80211_scan_entry*) ;
 TYPE_3__* FUNC_4 (struct ieee80211vap*,TYPE_3__*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211com*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct ieee80211vap*,int) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (scalar_t__*,int ) ;
 scalar_t__ FUNC_12 (scalar_t__*,int ,scalar_t__) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (char*,...) ;
 scalar_t__ FUNC_15 (struct ieee80211_tdma_param const*) ;

__attribute__((used)) static int
FUNC_16(struct ieee80211vap *VAR_39,
 const struct ieee80211_scan_state *VAR_40, struct sta_entry *VAR_41,
 int VAR_42)
{
 struct ieee80211com *VAR_43 = VAR_39->iv_ic;
 struct ieee80211_scan_entry *VAR_44 = &VAR_41->base;
        uint8_t VAR_45;
        int VAR_46;

 VAR_46 = 0;
 if (FUNC_10(VAR_43->ic_chan_active, FUNC_6(VAR_43, VAR_44->se_chan)))
  VAR_46 |= VAR_20;







 if (VAR_39->iv_des_mode != VAR_11 &&
     (VAR_44->se_chan->ic_flags & VAR_4) !=
     VAR_38[VAR_39->iv_des_mode])
  VAR_46 |= VAR_20;
 if (VAR_39->iv_opmode == VAR_13) {
  if ((VAR_44->se_capinfo & VAR_2) == 0)
   VAR_46 |= VAR_18;
 } else {
  if ((VAR_44->se_capinfo & VAR_1) == 0)
   VAR_46 |= VAR_18;
  if ((FUNC_1(VAR_44->se_chan) ||
      (VAR_39->iv_flags_ext & VAR_7)) &&
      VAR_44->se_cc[0] != 0 &&
      (VAR_43->ic_regdomain.country == VAR_0 ||
       !FUNC_11(VAR_44->se_cc, VAR_43->ic_regdomain.isocc)))
   VAR_46 |= VAR_19;
 }
 if (VAR_39->iv_flags & VAR_9) {
  if ((VAR_44->se_capinfo & VAR_3) == 0)
   VAR_46 |= VAR_25;
 } else {

  if (VAR_44->se_capinfo & VAR_3)
   VAR_46 |= VAR_25;
 }
 VAR_41->se_flags &= ~VAR_34;
 VAR_45 = FUNC_3(VAR_39, VAR_44->se_chan, VAR_44);
 if (VAR_45 & VAR_15) {
  VAR_46 |= VAR_26;





  if (FUNC_2(VAR_44->se_chan)) {
   VAR_45 = FUNC_3(VAR_39, FUNC_4(VAR_39, VAR_44->se_chan), VAR_44);
   if ((VAR_45 & VAR_15) == 0) {
    VAR_46 &= ~VAR_26;
    VAR_41->se_flags |= VAR_34;
   }
  }
 } else if (VAR_45 < 2*24) {
  if (!(VAR_39->iv_des_mode == VAR_11 ||
        VAR_39->iv_des_mode == VAR_10))
   VAR_46 |= VAR_26;
  else
   VAR_41->se_flags |= VAR_34;
 }
 if (VAR_40->ss_nssid != 0 &&
     !FUNC_13(VAR_44->se_ssid, VAR_40->ss_nssid, VAR_40->ss_ssid))
  VAR_46 |= VAR_28;
 if ((VAR_39->iv_flags & VAR_8) &&
     !FUNC_0(VAR_39->iv_des_bssid, VAR_44->se_bssid))
  VAR_46 |= VAR_17;
 if (VAR_41->se_fails >= VAR_35)
  VAR_46 |= VAR_21;
 if (VAR_41->se_notseen >= VAR_36)
  VAR_46 |= VAR_24;
 if (VAR_44->se_rssi < VAR_37)
  VAR_46 |= VAR_27;
 return VAR_46;
}
