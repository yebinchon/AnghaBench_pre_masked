
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_6__ {size_t num_modes; TYPE_2__* modes; int flags; } ;
struct wpa_supplicant {scalar_t__ hw_capab; int drv_capa_known; int drv_flags; int max_remain_on_chan; int* extended_capa; int extended_capa_len; int num_multichan_concurrent; int mac_addr_rand_supported; int multi_bss_support; char* imsi; int enable_oce; TYPE_3__* conf; int mnc_len; int eapol; int mesh_external_pmksa_cache; int global; scalar_t__ p2p_mgmt; int * gas; int * ctrl_iface; int wpa; int gas_server; scalar_t__* ifname; int fst; int own_addr; scalar_t__ sched_scan_supported; int wmm_ac_supported; int extended_capa_mask; int max_stations; int max_match_sets; int max_sched_scan_plan_iterations; int max_sched_scan_plan_interval; int max_sched_scan_plans; int max_sched_scan_ssids; int max_scan_ssids; int probe_resp_offloads; int drv_rrm_flags; int drv_smps_modes; int drv_enc; TYPE_1__ hw; scalar_t__* bridge_ifname; int * confanother; int * confname; } ;
struct wpa_interface {char* ifname; char* confname; char* driver; char* ctrl_interface; char* bridge_ifname; char* confanother; char* driver_param; scalar_t__ p2p_mgmt; } ;
struct wpa_driver_capa {int flags; int max_remain_on_chan; int* extended_capa; int extended_capa_len; int num_multichan_concurrent; scalar_t__ mac_addr_rand_sched_scan_supported; scalar_t__ mac_addr_rand_scan_supported; int wmm_ac_supported; int extended_capa_mask; int max_stations; int max_match_sets; scalar_t__ sched_scan_supported; int max_sched_scan_plan_iterations; int max_sched_scan_plan_interval; int max_sched_scan_plans; int max_sched_scan_ssids; int max_scan_ssids; int probe_resp_offloads; int rrm_flags; int smps_modes; int enc; } ;
struct fst_wpa_obj {int dummy; } ;
struct fst_iface_cfg {scalar_t__* group_id; int llt; int priority; } ;
struct TYPE_8__ {char* fst_group_id; int oce; int non_pref_chan; int sched_scan_plans; int * ctrl_interface; int fst_llt; int fst_priority; scalar_t__* country; scalar_t__ dot11RSNAConfigSATimeout; scalar_t__ dot11RSNAConfigPMKReauthThreshold; scalar_t__ dot11RSNAConfigPMKLifetime; int fast_reauth; int * driver_param; } ;
struct TYPE_7__ {int ht_capab; scalar_t__ vht_capab; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,char*,size_t*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__*,int ,struct fst_wpa_obj*,struct fst_iface_cfg*) ;
 int FUNC_5 (struct wpa_supplicant*,struct fst_wpa_obj*) ;
 int * FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,int ) ;
 int FUNC_8 (struct wpa_supplicant*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (char*) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__*,char*,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_15 (struct wpa_supplicant*) ;
 TYPE_3__* FUNC_16 (char*,char*) ;
 TYPE_3__* FUNC_17 (int *,TYPE_3__*) ;
 int FUNC_18 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_19 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 int FUNC_20 (struct wpa_supplicant*,int ) ;
 TYPE_2__* FUNC_21 (struct wpa_supplicant*,size_t*,int *,int *) ;
 scalar_t__ FUNC_22 (struct wpa_supplicant*,scalar_t__*) ;
 int FUNC_23 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_24 (int ,char*,...) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_28 (int ,int ,scalar_t__) ;
 int * FUNC_29 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_30 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_31 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_32 (struct wpa_supplicant*) ;
 int FUNC_33 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_34 (int ) ;
 scalar_t__ FUNC_35 (struct wpa_supplicant*) ;
 int VAR_20 ;
 scalar_t__ FUNC_36 (struct wpa_supplicant*,struct wpa_interface const*) ;
 scalar_t__ FUNC_37 (struct wpa_supplicant*) ;
 int FUNC_38 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_39 (int ,struct wpa_supplicant*) ;
 int FUNC_40 (struct wpa_supplicant*) ;
 int FUNC_41 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_42 (struct wpa_supplicant*,struct wpa_driver_capa*) ;
 scalar_t__ FUNC_43 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_44(struct wpa_supplicant *VAR_21,
         const struct wpa_interface *VAR_22)
{
 struct wpa_driver_capa VAR_23;
 int VAR_24;
 u8 VAR_25;

 FUNC_24(VAR_9, "Initializing interface '%s' conf '%s' driver "
     "'%s' ctrl_interface '%s' bridge '%s'", VAR_22->ifname,
     VAR_22->confname ? VAR_22->confname : "N/A",
     VAR_22->driver ? VAR_22->driver : "default",
     VAR_22->ctrl_interface ? VAR_22->ctrl_interface : "N/A",
     VAR_22->bridge_ifname ? VAR_22->bridge_ifname : "N/A");

 if (VAR_22->confname) {
  VAR_21->confname = FUNC_11(VAR_22->confname);

  VAR_21->conf = FUNC_17(VAR_21->confname, ((void*)0));
  if (VAR_21->conf == ((void*)0)) {
   FUNC_24(VAR_10, "Failed to read or parse "
       "configuration '%s'.", VAR_21->confname);
   return -1;
  }
  VAR_21->confanother = FUNC_10(VAR_22->confanother);
  if (VAR_21->confanother &&
      !FUNC_17(VAR_21->confanother, VAR_21->conf)) {
   FUNC_24(VAR_10,
       "Failed to read or parse configuration '%s'.",
       VAR_21->confanother);
   return -1;
  }





  if (VAR_22->ctrl_interface) {
   FUNC_9(VAR_21->conf->ctrl_interface);
   VAR_21->conf->ctrl_interface =
    FUNC_11(VAR_22->ctrl_interface);
  }

  if (VAR_22->driver_param) {
   FUNC_9(VAR_21->conf->driver_param);
   VAR_21->conf->driver_param =
    FUNC_11(VAR_22->driver_param);
  }

  if (VAR_22->p2p_mgmt && !VAR_22->ctrl_interface) {
   FUNC_9(VAR_21->conf->ctrl_interface);
   VAR_21->conf->ctrl_interface = ((void*)0);
  }
 } else
  VAR_21->conf = FUNC_16(VAR_22->ctrl_interface,
           VAR_22->driver_param);

 if (VAR_21->conf == ((void*)0)) {
  FUNC_24(VAR_10, "\nNo configuration found.");
  return -1;
 }

 if (VAR_22->ifname == ((void*)0)) {
  FUNC_24(VAR_10, "\nInterface name is required.");
  return -1;
 }
 if (FUNC_13(VAR_22->ifname) >= sizeof(VAR_21->ifname)) {
  FUNC_24(VAR_10, "\nToo long interface name '%s'.",
      VAR_22->ifname);
  return -1;
 }
 FUNC_12(VAR_21->ifname, VAR_22->ifname, sizeof(VAR_21->ifname));

 if (VAR_22->bridge_ifname) {
  if (FUNC_13(VAR_22->bridge_ifname) >=
      sizeof(VAR_21->bridge_ifname)) {
   FUNC_24(VAR_10, "\nToo long bridge interface "
       "name '%s'.", VAR_22->bridge_ifname);
   return -1;
  }
  FUNC_12(VAR_21->bridge_ifname, VAR_22->bridge_ifname,
      sizeof(VAR_21->bridge_ifname));
 }


 FUNC_2(VAR_21->eapol, VAR_4);
 FUNC_3(VAR_21->eapol, VAR_4);





 if (FUNC_36(VAR_21, VAR_22) < 0)
  return -1;

 if (FUNC_32(VAR_21) < 0)
  return -1;

 FUNC_27(VAR_21->wpa, VAR_21->ifname,
     VAR_21->bridge_ifname[0] ? VAR_21->bridge_ifname :
     ((void*)0));
 FUNC_26(VAR_21->wpa, VAR_21->conf->fast_reauth);

 if (VAR_21->conf->dot11RSNAConfigPMKLifetime &&
     FUNC_28(VAR_21->wpa, VAR_13,
        VAR_21->conf->dot11RSNAConfigPMKLifetime)) {
  FUNC_23(VAR_21, VAR_10, "Invalid WPA parameter value for "
   "dot11RSNAConfigPMKLifetime");
  return -1;
 }

 if (VAR_21->conf->dot11RSNAConfigPMKReauthThreshold &&
     FUNC_28(VAR_21->wpa, VAR_14,
        VAR_21->conf->dot11RSNAConfigPMKReauthThreshold)) {
  FUNC_23(VAR_21, VAR_10, "Invalid WPA parameter value for "
   "dot11RSNAConfigPMKReauthThreshold");
  return -1;
 }

 if (VAR_21->conf->dot11RSNAConfigSATimeout &&
     FUNC_28(VAR_21->wpa, VAR_15,
        VAR_21->conf->dot11RSNAConfigSATimeout)) {
  FUNC_23(VAR_21, VAR_10, "Invalid WPA parameter value for "
   "dot11RSNAConfigSATimeout");
  return -1;
 }

 VAR_21->hw.modes = FUNC_21(VAR_21,
            &VAR_21->hw.num_modes,
            &VAR_21->hw.flags,
            &VAR_25);
 if (VAR_21->hw.modes) {
  u16 VAR_26;

  for (VAR_26 = 0; VAR_26 < VAR_21->hw.num_modes; VAR_26++) {
   if (VAR_21->hw.modes[VAR_26].vht_capab) {
    VAR_21->hw_capab = VAR_3;
    break;
   }

   if (VAR_21->hw.modes[VAR_26].ht_capab &
       VAR_5)
    VAR_21->hw_capab = VAR_1;
   else if (VAR_21->hw.modes[VAR_26].ht_capab &&
     VAR_21->hw_capab == VAR_2)
    VAR_21->hw_capab = VAR_0;
  }
 }

 VAR_24 = FUNC_19(VAR_21, &VAR_23);
 if (VAR_24 == 0) {
  VAR_21->drv_capa_known = 1;
  VAR_21->drv_flags = VAR_23.flags;
  VAR_21->drv_enc = VAR_23.enc;
  VAR_21->drv_smps_modes = VAR_23.smps_modes;
  VAR_21->drv_rrm_flags = VAR_23.rrm_flags;
  VAR_21->probe_resp_offloads = VAR_23.probe_resp_offloads;
  VAR_21->max_scan_ssids = VAR_23.max_scan_ssids;
  VAR_21->max_sched_scan_ssids = VAR_23.max_sched_scan_ssids;
  VAR_21->max_sched_scan_plans = VAR_23.max_sched_scan_plans;
  VAR_21->max_sched_scan_plan_interval =
   VAR_23.max_sched_scan_plan_interval;
  VAR_21->max_sched_scan_plan_iterations =
   VAR_23.max_sched_scan_plan_iterations;
  VAR_21->sched_scan_supported = VAR_23.sched_scan_supported;
  VAR_21->max_match_sets = VAR_23.max_match_sets;
  VAR_21->max_remain_on_chan = VAR_23.max_remain_on_chan;
  VAR_21->max_stations = VAR_23.max_stations;
  VAR_21->extended_capa = VAR_23.extended_capa;
  VAR_21->extended_capa_mask = VAR_23.extended_capa_mask;
  VAR_21->extended_capa_len = VAR_23.extended_capa_len;
  VAR_21->num_multichan_concurrent =
   VAR_23.num_multichan_concurrent;
  VAR_21->wmm_ac_supported = VAR_23.wmm_ac_supported;

  if (VAR_23.mac_addr_rand_scan_supported)
   VAR_21->mac_addr_rand_supported |= VAR_7;
  if (VAR_21->sched_scan_supported &&
      VAR_23.mac_addr_rand_sched_scan_supported)
   VAR_21->mac_addr_rand_supported |=
    (VAR_8 | VAR_6);

  FUNC_20(VAR_21, VAR_19);
  if (VAR_21->extended_capa &&
      VAR_21->extended_capa_len >= 3 &&
      VAR_21->extended_capa[2] & 0x40)
   VAR_21->multi_bss_support = 1;
 }
 if (VAR_21->max_remain_on_chan == 0)
  VAR_21->max_remain_on_chan = 1000;






 if (VAR_21->drv_flags & VAR_16)
  VAR_21->p2p_mgmt = VAR_22->p2p_mgmt;

 if (VAR_21->num_multichan_concurrent == 0)
  VAR_21->num_multichan_concurrent = 1;

 if (FUNC_30(VAR_21) < 0)
  return -1;






 if (VAR_21->conf->country[0] && VAR_21->conf->country[1] &&
     FUNC_22(VAR_21, VAR_21->conf->country)) {
  FUNC_18(VAR_21, VAR_9, "Failed to set country");
  return -1;
 }
 if (FUNC_43(VAR_21))
  return -1;
 if (FUNC_31(VAR_21) < 0)
  return -1;
 FUNC_25(VAR_21->wpa, VAR_21->eapol);

 VAR_21->ctrl_iface = FUNC_29(VAR_21);
 if (VAR_21->ctrl_iface == ((void*)0)) {
  FUNC_24(VAR_10,
      "Failed to initialize control interface '%s'.\n"
      "You may have another wpa_supplicant process "
      "already running or the file was\n"
      "left by an unclean termination of wpa_supplicant "
      "in which case you will need\n"
      "to manually remove this file before starting "
      "wpa_supplicant again.\n",
      VAR_21->conf->ctrl_interface);
  return -1;
 }

 VAR_21->gas = FUNC_6(VAR_21);
 if (VAR_21->gas == ((void*)0)) {
  FUNC_24(VAR_10, "Failed to initialize GAS query");
  return -1;
 }

 if ((!(VAR_21->drv_flags & VAR_16) ||
      VAR_21->p2p_mgmt) &&
     FUNC_39(VAR_21->global, VAR_21) < 0) {
  FUNC_23(VAR_21, VAR_10, "Failed to init P2P");
  return -1;
 }

 if (FUNC_15(VAR_21) < 0)
  return -1;
 if (VAR_24 == 0 && FUNC_42(VAR_21, &VAR_23) < 0)
  return -1;
 if (FUNC_14(VAR_21) < 0)
  return -1;

 if (FUNC_37(VAR_21) < 0)
  return -1;

 FUNC_40(VAR_21);

 FUNC_41(VAR_21, VAR_21->conf->sched_scan_plans);
 FUNC_33(VAR_21);

 return 0;
}
