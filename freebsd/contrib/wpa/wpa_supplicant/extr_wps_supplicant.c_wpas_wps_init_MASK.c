
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct wps_registrar_config {struct wpa_supplicant* cb_ctx; int set_sel_reg_cb; int pin_needed_cb; int new_psk_cb; } ;
struct TYPE_6__ {int config_methods; int num_sec_dev_types; int rf_bands; int mac_addr; int os_version; int sec_dev_type; int pri_dev_type; int serial_number; int model_number; int model_name; int manufacturer; int device_name; } ;
struct wps_context {int config_methods; int auth_types; int encr_types; int * registrar; TYPE_3__ dev; struct wpa_supplicant* cb_ctx; int rf_band_cb; int event_cb; int cred_cb; } ;
struct TYPE_5__ {size_t num_modes; struct hostapd_hw_modes* modes; } ;
struct wpa_supplicant {struct wps_context* wps; int own_addr; TYPE_2__ hw; TYPE_1__* conf; } ;
struct hostapd_hw_modes {scalar_t__ mode; } ;
typedef int rcfg ;
struct TYPE_4__ {int num_sec_device_types; int os_version; int sec_device_type; int device_type; int config_methods; int serial_number; int model_number; int model_name; int manufacturer; int device_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct wps_context*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct wps_registrar_config*,int ,int) ;
 struct wps_context* FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (struct wpa_supplicant*,struct wps_context*) ;
 int FUNC_7 (struct wpa_supplicant*,struct wps_context*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int * FUNC_10 (struct wps_context*,struct wps_registrar_config*) ;

int FUNC_11(struct wpa_supplicant *VAR_23)
{
 struct wps_context *VAR_24;
 struct wps_registrar_config VAR_25;
 struct hostapd_hw_modes *VAR_26;
 u16 VAR_27;

 VAR_24 = FUNC_4(sizeof(*VAR_24));
 if (VAR_24 == ((void*)0))
  return -1;

 VAR_24->cred_cb = VAR_17;
 VAR_24->event_cb = VAR_18;
 VAR_24->rf_band_cb = VAR_19;
 VAR_24->cb_ctx = VAR_23;

 VAR_24->dev.device_name = VAR_23->conf->device_name;
 VAR_24->dev.manufacturer = VAR_23->conf->manufacturer;
 VAR_24->dev.model_name = VAR_23->conf->model_name;
 VAR_24->dev.model_number = VAR_23->conf->model_number;
 VAR_24->dev.serial_number = VAR_23->conf->serial_number;
 VAR_24->config_methods =
  FUNC_8(VAR_23->conf->config_methods);
 if ((VAR_24->config_methods & (VAR_9 | VAR_10)) ==
     (VAR_9 | VAR_10)) {
  FUNC_5(VAR_6, "WPS: Both Label and Display config "
      "methods are not allowed at the same time");
  FUNC_1(VAR_24);
  return -1;
 }
 VAR_24->config_methods = FUNC_9(VAR_24->config_methods);
 VAR_24->dev.config_methods = VAR_24->config_methods;
 FUNC_2(VAR_24->dev.pri_dev_type, VAR_23->conf->device_type,
    VAR_11);

 VAR_24->dev.num_sec_dev_types = VAR_23->conf->num_sec_device_types;
 FUNC_2(VAR_24->dev.sec_dev_type, VAR_23->conf->sec_device_type,
    VAR_11 * VAR_24->dev.num_sec_dev_types);

 FUNC_7(VAR_23, VAR_24);

 VAR_24->dev.os_version = FUNC_0(VAR_23->conf->os_version);
 VAR_26 = VAR_23->hw.modes;
 if (VAR_26) {
  for (VAR_27 = 0; VAR_27 < VAR_23->hw.num_modes; VAR_27++) {
   if (VAR_26[VAR_27].mode == VAR_3 ||
       VAR_26[VAR_27].mode == VAR_4)
    VAR_24->dev.rf_bands |= VAR_14;
   else if (VAR_26[VAR_27].mode == VAR_1)
    VAR_24->dev.rf_bands |= VAR_15;
   else if (VAR_26[VAR_27].mode == VAR_2)
    VAR_24->dev.rf_bands |= VAR_16;
  }
 }
 if (VAR_24->dev.rf_bands == 0) {




  VAR_24->dev.rf_bands = VAR_14 | VAR_15;
 }
 FUNC_2(VAR_24->dev.mac_addr, VAR_23->own_addr, VAR_0);
 FUNC_6(VAR_23, VAR_24);

 VAR_24->auth_types = VAR_7 | VAR_8;
 VAR_24->encr_types = VAR_12 | VAR_13;

 FUNC_3(&VAR_25, 0, sizeof(VAR_25));
 VAR_25.new_psk_cb = VAR_20;
 VAR_25.pin_needed_cb = VAR_21;
 VAR_25.set_sel_reg_cb = VAR_22;
 VAR_25.cb_ctx = VAR_23;

 VAR_24->registrar = FUNC_10(VAR_24, &VAR_25);
 if (VAR_24->registrar == ((void*)0)) {
  FUNC_5(VAR_5, "Failed to initialize WPS Registrar");
  FUNC_1(VAR_24);
  return -1;
 }

 VAR_23->wps = VAR_24;

 return 0;
}
