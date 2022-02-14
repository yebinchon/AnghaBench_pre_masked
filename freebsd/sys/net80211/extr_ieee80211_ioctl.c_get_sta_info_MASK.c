
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct stainforeq {size_t space; struct ieee80211req_sta_info* si; } ;
struct ieee80211vap {scalar_t__ iv_opmode; int iv_inact_run; int iv_flags_ext; int iv_inact_auth; int iv_inact_init; TYPE_2__* iv_ic; } ;
struct ieee80211req_sta_info {size_t isi_len; int isi_ie_off; size_t isi_ie_len; int isi_state; int isi_nrates; int isi_txrate; int isi_txmbps; scalar_t__ isi_associd; int isi_inact; int isi_peerstate; int isi_peerid; int isi_localid; int * isi_rxseqs; int * isi_txseqs; int isi_vlan; int isi_txpower; int * isi_rates; int isi_macaddr; int isi_erp; int isi_capinfo; int isi_mimo; int isi_noise; int isi_rssi; int isi_authmode; int isi_flags; int isi_freq; } ;
struct TYPE_6__ {int * data; } ;
struct TYPE_8__ {int rs_nrates; int * rs_rates; } ;
struct ieee80211_node {scalar_t__ ni_associd; int ni_flags; int ni_txrate; int ni_inact; TYPE_1__ ni_ies; int ni_mlstate; int ni_mlpid; int ni_mllid; int * ni_rxseqs; int * ni_txseqs; int ni_vlan; int ni_txpower; TYPE_4__* ni_chan; TYPE_3__ ni_rates; int ni_macaddr; int ni_erp; int ni_capinfo; int ni_authmode; struct ieee80211vap* ni_vap; } ;
struct ieee80211_mcs_rates {int ht40_rate_800ns; int ht40_rate_400ns; int ht20_rate_800ns; int ht20_rate_400ns; } ;
struct TYPE_9__ {int ic_flags; int ic_freq; } ;
struct TYPE_7__ {int (* ic_node_getmimoinfo ) (struct ieee80211_node*,int *) ;int (* ic_node_getsignal ) (struct ieee80211_node*,int *,int *) ;} ;


 int FUNC_0 (int ,int ) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 struct ieee80211_mcs_rates* VAR_10 ;
 scalar_t__ FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int *,int *,size_t) ;
 size_t FUNC_4 (struct ieee80211_node*,size_t*) ;
 int FUNC_5 (struct ieee80211_node*,int *,int *) ;
 int FUNC_6 (struct ieee80211_node*,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_11, struct ieee80211_node *VAR_12)
{
 struct stainforeq *VAR_13 = VAR_11;
 struct ieee80211vap *VAR_14 = VAR_12->ni_vap;
 struct ieee80211req_sta_info *VAR_15;
 size_t VAR_16, VAR_17;
 uint8_t *VAR_18;

 if (VAR_14->iv_opmode == VAR_3 &&
     VAR_12->ni_associd == 0)
  return;
 if (VAR_12->ni_chan == VAR_0)
  return;
 VAR_17 = FUNC_4(VAR_12, &VAR_16);
 if (VAR_17 > VAR_13->space)
  return;
 VAR_15 = VAR_13->si;
 VAR_15->isi_len = VAR_17;
 VAR_15->isi_ie_off = sizeof(struct ieee80211req_sta_info);
 VAR_15->isi_ie_len = VAR_16;
 VAR_15->isi_freq = VAR_12->ni_chan->ic_freq;
 VAR_15->isi_flags = VAR_12->ni_chan->ic_flags;
 VAR_15->isi_state = VAR_12->ni_flags;
 VAR_15->isi_authmode = VAR_12->ni_authmode;
 VAR_14->iv_ic->ic_node_getsignal(VAR_12, &VAR_15->isi_rssi, &VAR_15->isi_noise);
 VAR_14->iv_ic->ic_node_getmimoinfo(VAR_12, &VAR_15->isi_mimo);
 VAR_15->isi_capinfo = VAR_12->ni_capinfo;
 VAR_15->isi_erp = VAR_12->ni_erp;
 FUNC_0(VAR_15->isi_macaddr, VAR_12->ni_macaddr);
 VAR_15->isi_nrates = VAR_12->ni_rates.rs_nrates;
 if (VAR_15->isi_nrates > 15)
  VAR_15->isi_nrates = 15;
 FUNC_3(VAR_15->isi_rates, VAR_12->ni_rates.rs_rates, VAR_15->isi_nrates);
 VAR_15->isi_txrate = VAR_12->ni_txrate;
 if (VAR_15->isi_txrate & VAR_9) {
  const struct ieee80211_mcs_rates *VAR_19 =
      &VAR_10[VAR_12->ni_txrate &~ VAR_9];
  if (FUNC_1(VAR_12->ni_chan)) {
   if (VAR_12->ni_flags & VAR_7)
    VAR_15->isi_txmbps = VAR_19->ht40_rate_800ns;
   else
    VAR_15->isi_txmbps = VAR_19->ht40_rate_400ns;
  } else {
   if (VAR_12->ni_flags & VAR_6)
    VAR_15->isi_txmbps = VAR_19->ht20_rate_800ns;
   else
    VAR_15->isi_txmbps = VAR_19->ht20_rate_400ns;
  }
 } else
  VAR_15->isi_txmbps = VAR_15->isi_txrate;
 VAR_15->isi_associd = VAR_12->ni_associd;
 VAR_15->isi_txpower = VAR_12->ni_txpower;
 VAR_15->isi_vlan = VAR_12->ni_vlan;
 if (VAR_12->ni_flags & VAR_5) {
  FUNC_3(VAR_15->isi_txseqs, VAR_12->ni_txseqs, sizeof(VAR_12->ni_txseqs));
  FUNC_3(VAR_15->isi_rxseqs, VAR_12->ni_rxseqs, sizeof(VAR_12->ni_rxseqs));
 } else {
  VAR_15->isi_txseqs[0] = VAR_12->ni_txseqs[VAR_8];
  VAR_15->isi_rxseqs[0] = VAR_12->ni_rxseqs[VAR_8];
 }

 if (FUNC_2(VAR_12))
  VAR_15->isi_inact = VAR_14->iv_inact_run;
 else if (VAR_12->ni_associd != 0 ||
     (VAR_14->iv_opmode == VAR_4 &&
      (VAR_14->iv_flags_ext & VAR_1)))
  VAR_15->isi_inact = VAR_14->iv_inact_auth;
 else
  VAR_15->isi_inact = VAR_14->iv_inact_init;
 VAR_15->isi_inact = (VAR_15->isi_inact - VAR_12->ni_inact) * VAR_2;
 VAR_15->isi_localid = VAR_12->ni_mllid;
 VAR_15->isi_peerid = VAR_12->ni_mlpid;
 VAR_15->isi_peerstate = VAR_12->ni_mlstate;

 if (VAR_16) {
  VAR_18 = ((uint8_t *)VAR_15) + VAR_15->isi_ie_off;
  FUNC_3(VAR_18, VAR_12->ni_ies.data, VAR_16);
 }

 VAR_13->si = (struct ieee80211req_sta_info *)(((uint8_t *)VAR_15) + VAR_17);
 VAR_13->space -= VAR_17;
}
