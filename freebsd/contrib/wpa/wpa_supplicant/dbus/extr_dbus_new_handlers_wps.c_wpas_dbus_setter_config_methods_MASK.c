
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {char* config_methods; int changed_parameters; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int *,int *,int ,char**) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_7;
 char *VAR_9, *VAR_10;

 if (!FUNC_3(VAR_5, VAR_6, VAR_1,
           &VAR_9))
  return VAR_2;

 VAR_10 = FUNC_1(VAR_9);
 if (!VAR_10)
  return VAR_2;

 FUNC_0(VAR_8->conf->config_methods);
 VAR_8->conf->config_methods = VAR_10;

 VAR_8->conf->changed_parameters |= VAR_0;
 FUNC_2(VAR_8);

 return VAR_3;
}
