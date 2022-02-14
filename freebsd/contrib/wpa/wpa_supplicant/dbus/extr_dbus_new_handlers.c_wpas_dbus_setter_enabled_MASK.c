
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct network_handler_args {struct wpa_ssid* ssid; struct wpa_supplicant* wpa_s; } ;
typedef scalar_t__ dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_2 (int *,int *,int ,scalar_t__*) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct network_handler_args *VAR_7 = VAR_6;
 struct wpa_supplicant *VAR_8;
 struct wpa_ssid *VAR_9;
 dbus_bool_t VAR_10;

 if (!FUNC_2(VAR_4, VAR_5, VAR_0,
           &VAR_10))
  return VAR_1;

 VAR_8 = VAR_7->wpa_s;
 VAR_9 = VAR_7->ssid;

 if (VAR_10)
  FUNC_1(VAR_8, VAR_9);
 else
  FUNC_0(VAR_8, VAR_9);

 return VAR_2;
}
