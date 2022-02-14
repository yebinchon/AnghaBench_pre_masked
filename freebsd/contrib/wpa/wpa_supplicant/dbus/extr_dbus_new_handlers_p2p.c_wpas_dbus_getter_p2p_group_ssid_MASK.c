
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* current_ssid; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int ssid_len; int ssid; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_2,
 DBusMessageIter *VAR_3, DBusError *VAR_4, void *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_5;

 if (VAR_6->current_ssid == ((void*)0))
  return VAR_1;
 return FUNC_0(
  VAR_3, VAR_0, VAR_6->current_ssid->ssid,
  VAR_6->current_ssid->ssid_len, VAR_4);
}
