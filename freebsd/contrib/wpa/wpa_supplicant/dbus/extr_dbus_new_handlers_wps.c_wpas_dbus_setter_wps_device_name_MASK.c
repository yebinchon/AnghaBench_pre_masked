
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {char* device_name; int changed_parameters; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (int *,int *,int ,char**) ;

dbus_bool_t FUNC_5(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_8;
 char *VAR_10, *VAR_11;

 if (!FUNC_4(VAR_6, VAR_7, VAR_1,
           &VAR_10))
  return VAR_2;

 if (FUNC_2(VAR_10) > VAR_4)
  return VAR_2;

 VAR_11 = FUNC_1(VAR_10);
 if (!VAR_11)
  return VAR_2;

 FUNC_0(VAR_9->conf->device_name);
 VAR_9->conf->device_name = VAR_11;
 VAR_9->conf->changed_parameters |= VAR_0;
 FUNC_3(VAR_9);

 return VAR_3;
}
