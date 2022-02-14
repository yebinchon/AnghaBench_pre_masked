
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int* psk; scalar_t__ psk_set; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*,int,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_2,
 DBusMessageIter *VAR_3, DBusError *VAR_4, void *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_5;
 u8 *VAR_7 = ((void*)0);
 u8 VAR_8 = 0;
 struct wpa_ssid *VAR_9 = VAR_6->current_ssid;

 if (VAR_9 == ((void*)0))
  return VAR_1;

 if (VAR_9->psk_set) {
  VAR_7 = VAR_9->psk;
  VAR_8 = sizeof(VAR_9->psk);
 }

 return FUNC_0(VAR_3, VAR_0,
            VAR_7, VAR_8, VAR_4);
}
