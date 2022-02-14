
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wpa_init_params {int* bssid; size_t num_bridge; scalar_t__** bridge; int own_addr; int use_pae_group_addr; int driver_params; int ifname; int * global_priv; } ;
struct wpa_driver_capa {int max_acl_mac_addrs; int extended_capa_len; int extended_capa_mask; int extended_capa; int probe_resp_offloads; int smps_modes; int flags; } ;
typedef scalar_t__* wowlan_triggers ;
struct hostapd_iface {int drv_max_acl_mac_addrs; int extended_capa_len; int extended_capa_mask; int extended_capa; int probe_resp_offloads; int smps_modes; int drv_flags; int interfaces; struct hostapd_data** bss; } ;
struct hostapd_data {int * drv_priv; TYPE_3__* driver; int own_addr; struct hostapd_bss_config* conf; TYPE_2__* iface; TYPE_1__* iconf; } ;
struct hostapd_bss_config {int* bssid; int wowlan_triggers; scalar_t__* bridge; int use_pae_group_addr; int iface; } ;
typedef int params ;
struct TYPE_8__ {int ** drv_priv; } ;
struct TYPE_7__ {scalar_t__ (* get_capa ) (int *,struct wpa_driver_capa*) ;scalar_t__ (* set_wowlan ) (int *,scalar_t__**) ;int name; int * (* hapd_init ) (struct hostapd_data*,struct wpa_init_params*) ;int * (* global_init ) (int ) ;} ;
struct TYPE_6__ {size_t num_bss; struct hostapd_data** bss; } ;
struct TYPE_5__ {int driver_params; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (struct hostapd_iface*) ;
 scalar_t__** FUNC_1 (size_t,int) ;
 int FUNC_2 (scalar_t__**) ;
 int FUNC_3 (struct wpa_init_params*,int ,int) ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 (struct hostapd_data*,struct wpa_init_params*) ;
 scalar_t__ FUNC_6 (int *,struct wpa_driver_capa*) ;
 scalar_t__ FUNC_7 (int *,scalar_t__**) ;
 TYPE_3__** VAR_2 ;
 scalar_t__** FUNC_8 (int ,struct wpa_driver_capa*) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(struct hostapd_iface *VAR_3)
{
 struct wpa_init_params VAR_4;
 size_t VAR_5;
 struct hostapd_data *VAR_6 = VAR_3->bss[0];
 struct hostapd_bss_config *VAR_7 = VAR_6->conf;
 u8 *VAR_8 = VAR_7->bssid;
 struct wpa_driver_capa VAR_9;

 if (VAR_6->driver == ((void*)0) || VAR_6->driver->hapd_init == ((void*)0)) {
  FUNC_9(VAR_0, "No hostapd driver wrapper available");
  return -1;
 }


 if (!(VAR_8[0] | VAR_8[1] | VAR_8[2] | VAR_8[3] | VAR_8[4] | VAR_8[5]))
  VAR_8 = ((void*)0);

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));
 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++) {
  if (VAR_2[VAR_5] != VAR_6->driver)
   continue;

  if (VAR_1.drv_priv[VAR_5] == ((void*)0) &&
      VAR_2[VAR_5]->global_init) {
   VAR_1.drv_priv[VAR_5] =
    VAR_2[VAR_5]->global_init(VAR_3->interfaces);
   if (VAR_1.drv_priv[VAR_5] == ((void*)0)) {
    FUNC_9(VAR_0, "Failed to initialize "
        "driver '%s'",
        VAR_2[VAR_5]->name);
    return -1;
   }
  }

  VAR_4.global_priv = VAR_1.drv_priv[VAR_5];
  break;
 }
 VAR_4.bssid = VAR_8;
 VAR_4.ifname = VAR_6->conf->iface;
 VAR_4.driver_params = VAR_6->iconf->driver_params;
 VAR_4.use_pae_group_addr = VAR_6->conf->use_pae_group_addr;

 VAR_4.num_bridge = VAR_6->iface->num_bss;
 VAR_4.bridge = FUNC_1(VAR_6->iface->num_bss, sizeof(char *));
 if (VAR_4.bridge == ((void*)0))
  return -1;
 for (VAR_5 = 0; VAR_5 < VAR_6->iface->num_bss; VAR_5++) {
  struct hostapd_data *VAR_10 = VAR_6->iface->bss[VAR_5];
  if (VAR_10->conf->bridge[0])
   VAR_4.bridge[VAR_5] = VAR_10->conf->bridge;
 }

 VAR_4.own_addr = VAR_6->own_addr;

 VAR_6->drv_priv = VAR_6->driver->hapd_init(VAR_6, &VAR_4);
 FUNC_2(VAR_4.bridge);
 if (VAR_6->drv_priv == ((void*)0)) {
  FUNC_9(VAR_0, "%s driver initialization failed.",
      VAR_6->driver->name);
  VAR_6->driver = ((void*)0);
  return -1;
 }

 if (VAR_6->driver->get_capa &&
     VAR_6->driver->get_capa(VAR_6->drv_priv, &VAR_9) == 0) {
  struct wowlan_triggers *VAR_11;

  VAR_3->drv_flags = VAR_9.flags;
  VAR_3->smps_modes = VAR_9.smps_modes;
  VAR_3->probe_resp_offloads = VAR_9.probe_resp_offloads;



  VAR_3->extended_capa = VAR_9.extended_capa;
  VAR_3->extended_capa_mask = VAR_9.extended_capa_mask;
  VAR_3->extended_capa_len = VAR_9.extended_capa_len;
  VAR_3->drv_max_acl_mac_addrs = VAR_9.max_acl_mac_addrs;





  FUNC_0(VAR_3);

  VAR_11 = FUNC_8(VAR_7->wowlan_triggers, &VAR_9);
  if (VAR_11 && VAR_6->driver->set_wowlan) {
   if (VAR_6->driver->set_wowlan(VAR_6->drv_priv, VAR_11))
    FUNC_9(VAR_0, "set_wowlan failed");
  }
  FUNC_2(VAR_11);
 }

 return 0;
}
