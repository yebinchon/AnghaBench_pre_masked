
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int dbus_new_path; TYPE_1__* global; TYPE_2__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {int wps_cred_processing; } ;
struct TYPE_3__ {int dbus; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int *,int *,int ,int*) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_7;
 dbus_bool_t VAR_9, VAR_10;

 if (!VAR_8->dbus_new_path)
  return VAR_1;
 if (!FUNC_1(VAR_5, VAR_6, VAR_0,
           &VAR_9))
  return VAR_1;

 VAR_10 = VAR_8->conf->wps_cred_processing != 1;
 VAR_8->conf->wps_cred_processing = (VAR_9 ? 2 : 1);

 if ((VAR_8->conf->wps_cred_processing != 1) != VAR_10)
  FUNC_0(VAR_8->global->dbus,
            VAR_8->dbus_new_path,
            VAR_3,
            "ProcessCredentials");

 return VAR_2;
}
