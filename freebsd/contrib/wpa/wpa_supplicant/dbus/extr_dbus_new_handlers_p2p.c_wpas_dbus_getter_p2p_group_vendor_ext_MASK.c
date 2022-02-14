
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vendor_ext ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct hostapd_data {TYPE_2__* conf; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {struct wpabuf** wps_vendor_ext; } ;
struct TYPE_3__ {struct hostapd_data** bss; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct wpabuf**,int ,int) ;
 int FUNC_1 (int *,int ,struct wpabuf**,unsigned int,int *) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_7;
 struct hostapd_data *VAR_9;
 struct wpabuf *VAR_10[VAR_2];
 unsigned int VAR_11, VAR_12 = 0;

 FUNC_0(VAR_10, 0, sizeof(VAR_10));


 if (FUNC_2(VAR_8) == VAR_3) {
  if (VAR_8->ap_iface == ((void*)0))
   return VAR_1;
  VAR_9 = VAR_8->ap_iface->bss[0];


  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (VAR_9->conf->wps_vendor_ext[VAR_11] == ((void*)0))
    continue;
   VAR_10[VAR_12++] =
    VAR_9->conf->wps_vendor_ext[VAR_11];
  }
 }


 return FUNC_1(VAR_5,
           VAR_0,
           VAR_10,
           VAR_12,
           VAR_6);
}
