
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int passphrase; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_1,
 DBusMessageIter *VAR_2, DBusError *VAR_3, void *VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_4;
 struct wpa_ssid *VAR_6 = VAR_5->current_ssid;

 if (VAR_6 == ((void*)0))
  return VAR_0;

 return FUNC_0(VAR_2, VAR_6->passphrase, VAR_3);
}
