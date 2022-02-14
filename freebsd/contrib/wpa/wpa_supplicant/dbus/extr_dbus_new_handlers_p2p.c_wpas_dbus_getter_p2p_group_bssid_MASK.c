
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_supplicant {TYPE_3__* ap_iface; TYPE_2__* current_ssid; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_6__ {TYPE_1__** bss; } ;
struct TYPE_5__ {scalar_t__* bssid; } ;
struct TYPE_4__ {scalar_t__* own_addr; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_7;
 u8 VAR_9 = FUNC_1(VAR_8);
 u8 *VAR_10;

 if (VAR_9 == VAR_3) {
  if (VAR_8->current_ssid == ((void*)0))
   return VAR_2;
  VAR_10 = VAR_8->current_ssid->bssid;
 } else {
  if (VAR_8->ap_iface == ((void*)0))
   return VAR_2;
  VAR_10 = VAR_8->ap_iface->bss[0]->own_addr;
 }

 return FUNC_0(VAR_5, VAR_0,
            VAR_10, VAR_1,
            VAR_6);
}
