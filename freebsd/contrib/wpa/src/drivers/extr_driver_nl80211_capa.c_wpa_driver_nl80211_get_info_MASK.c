
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; int num_multichan_concurrent; int max_remain_on_chan; int max_csa_counters; int max_sched_scan_plans; scalar_t__ max_sched_scan_plan_iterations; int max_sched_scan_plan_interval; int mac_addr_rand_scan_supported; int mac_addr_rand_sched_scan_supported; int wmm_ac_supported; } ;
struct wpa_driver_nl80211_data {TYPE_1__ capa; int first_bss; } ;
struct wiphy_info_data {int error; int num_multichan_concurrent; scalar_t__ channel_switch_supported; int mac_addr_rand_scan_supported; int mac_addr_rand_sched_scan_supported; int wmm_ac_supported; scalar_t__ p2p_concurrent; scalar_t__ p2p_client_supported; scalar_t__ p2p_go_supported; int connect_supported; scalar_t__ auth_supported; struct wpa_driver_nl80211_data* drv; TYPE_1__* capa; } ;
struct nl_msg {int dummy; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct wpa_driver_nl80211_data*) ;
 struct nl_msg* FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (struct nl_msg*,int ) ;
 int FUNC_3 (struct nl_msg*) ;
 int FUNC_4 (struct wiphy_info_data*,int ,int) ;
 scalar_t__ FUNC_5 (struct wpa_driver_nl80211_data*,struct nl_msg*,int ,struct wiphy_info_data*) ;
 int VAR_13 ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct wpa_driver_nl80211_data *VAR_14,
           struct wiphy_info_data *VAR_15)
{
 u32 VAR_16;
 struct nl_msg *VAR_17;
 int VAR_18 = 0;

 FUNC_4(VAR_15, 0, sizeof(*VAR_15));
 VAR_15->capa = &VAR_14->capa;
 VAR_15->drv = VAR_14;

 VAR_16 = FUNC_0(VAR_14);
 if (VAR_16 & VAR_4)
  VAR_18 = VAR_5;
 VAR_17 = FUNC_1(VAR_14->first_bss, VAR_18, VAR_3);
 if (!VAR_17 || FUNC_2(VAR_17, VAR_2)) {
  FUNC_3(VAR_17);
  return -1;
 }

 if (FUNC_5(VAR_14, VAR_17, VAR_13, VAR_15))
  return -1;

 if (VAR_15->auth_supported)
  VAR_14->capa.flags |= VAR_12;
 else if (!VAR_15->connect_supported) {
  FUNC_6(VAR_1, "nl80211: Driver does not support "
      "authentication/association or connect commands");
  VAR_15->error = 1;
 }

 if (VAR_15->p2p_go_supported && VAR_15->p2p_client_supported)
  VAR_14->capa.flags |= VAR_9;
 if (VAR_15->p2p_concurrent) {
  FUNC_6(VAR_0, "nl80211: Use separate P2P group "
      "interface (driver advertised support)");
  VAR_14->capa.flags |= VAR_10;
  VAR_14->capa.flags |= VAR_11;
 }
 if (VAR_15->num_multichan_concurrent > 1) {
  FUNC_6(VAR_0, "nl80211: Enable multi-channel "
      "concurrent (driver advertised support)");
  VAR_14->capa.num_multichan_concurrent =
   VAR_15->num_multichan_concurrent;
 }
 if (VAR_14->capa.flags & VAR_8)
  FUNC_6(VAR_0, "nl80211: use P2P_DEVICE support");


 if (!VAR_14->capa.max_remain_on_chan)
  VAR_14->capa.max_remain_on_chan = 5000;

 VAR_14->capa.wmm_ac_supported = VAR_15->wmm_ac_supported;

 VAR_14->capa.mac_addr_rand_sched_scan_supported =
  VAR_15->mac_addr_rand_sched_scan_supported;
 VAR_14->capa.mac_addr_rand_scan_supported =
  VAR_15->mac_addr_rand_scan_supported;

 if (VAR_15->channel_switch_supported) {
  VAR_14->capa.flags |= VAR_7;
  if (!VAR_14->capa.max_csa_counters)
   VAR_14->capa.max_csa_counters = 1;
 }

 if (!VAR_14->capa.max_sched_scan_plans) {
  VAR_14->capa.max_sched_scan_plans = 1;
  VAR_14->capa.max_sched_scan_plan_interval = VAR_6;
  VAR_14->capa.max_sched_scan_plan_iterations = 0;
 }

 return 0;
}
