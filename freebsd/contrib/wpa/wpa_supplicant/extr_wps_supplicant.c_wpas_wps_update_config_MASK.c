
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config_methods; int num_sec_dev_types; int serial_number; int model_number; int model_name; int manufacturer; int device_name; int os_version; int sec_dev_type; int pri_dev_type; } ;
struct wps_context {int config_methods; TYPE_1__ dev; } ;
struct wpa_supplicant {TYPE_2__* conf; struct wps_context* wps; } ;
struct TYPE_4__ {int changed_parameters; int num_sec_device_types; int serial_number; int model_number; int model_name; int manufacturer; int device_name; int os_version; int sec_device_type; int device_type; int config_methods; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,struct wps_context*) ;
 int FUNC_4 (struct wpa_supplicant*,struct wps_context*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;

void FUNC_7(struct wpa_supplicant *VAR_12)
{
 struct wps_context *VAR_13 = VAR_12->wps;

 if (VAR_13 == ((void*)0))
  return;

 if (VAR_12->conf->changed_parameters & VAR_0) {
  VAR_13->config_methods = FUNC_5(
   VAR_12->conf->config_methods);
  if ((VAR_13->config_methods &
       (VAR_9 | VAR_10)) ==
      (VAR_9 | VAR_10)) {
   FUNC_2(VAR_8, "WPS: Both Label and Display "
       "config methods are not allowed at the "
       "same time");
   VAR_13->config_methods &= ~VAR_10;
  }
 }
 VAR_13->config_methods = FUNC_6(VAR_13->config_methods);
 VAR_13->dev.config_methods = VAR_13->config_methods;

 if (VAR_12->conf->changed_parameters & VAR_2)
  FUNC_1(VAR_13->dev.pri_dev_type, VAR_12->conf->device_type,
     VAR_11);

 if (VAR_12->conf->changed_parameters & VAR_4) {
  VAR_13->dev.num_sec_dev_types = VAR_12->conf->num_sec_device_types;
  FUNC_1(VAR_13->dev.sec_dev_type, VAR_12->conf->sec_device_type,
     VAR_13->dev.num_sec_dev_types * VAR_11);
 }

 if (VAR_12->conf->changed_parameters & VAR_6)
  FUNC_4(VAR_12, VAR_13);

 if (VAR_12->conf->changed_parameters & VAR_3)
  VAR_13->dev.os_version = FUNC_0(VAR_12->conf->os_version);

 if (VAR_12->conf->changed_parameters & VAR_5)
  FUNC_3(VAR_12, VAR_13);

 if (VAR_12->conf->changed_parameters &
     (VAR_1 | VAR_7)) {

  VAR_13->dev.device_name = VAR_12->conf->device_name;
  VAR_13->dev.manufacturer = VAR_12->conf->manufacturer;
  VAR_13->dev.model_name = VAR_12->conf->model_name;
  VAR_13->dev.model_number = VAR_12->conf->model_number;
  VAR_13->dev.serial_number = VAR_12->conf->serial_number;
 }
}
