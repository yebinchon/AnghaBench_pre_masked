
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wpa_supplicant {TYPE_2__* ap_iface; TYPE_1__* go_params; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {int freq; } ;
struct TYPE_3__ {int freq; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_6;
 u16 VAR_8;
 u8 VAR_9 = FUNC_1(VAR_7);

 if (VAR_9 == VAR_2) {
  if (VAR_7->go_params == ((void*)0))
   return VAR_1;
  VAR_8 = VAR_7->go_params->freq;
 } else {
  if (VAR_7->ap_iface == ((void*)0))
   return VAR_1;
  VAR_8 = VAR_7->ap_iface->freq;
 }

 return FUNC_0(VAR_4, VAR_0,
      &VAR_8, VAR_5);
}
