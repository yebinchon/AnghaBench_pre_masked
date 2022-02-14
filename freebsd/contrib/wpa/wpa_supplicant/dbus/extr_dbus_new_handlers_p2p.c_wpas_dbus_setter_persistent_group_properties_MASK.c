
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_ssid {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct network_handler_args {int wpa_s; struct wpa_ssid* ssid; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct wpa_ssid*,int *,int *) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_0,
 DBusMessageIter *VAR_1, DBusError *VAR_2, void *VAR_3)
{
 struct network_handler_args *VAR_4 = VAR_3;
 struct wpa_ssid *VAR_5 = VAR_4->ssid;
 DBusMessageIter VAR_6;





 FUNC_0(VAR_1, &VAR_6);
 return FUNC_1(VAR_4->wpa_s, VAR_5, &VAR_6, VAR_2);
}
