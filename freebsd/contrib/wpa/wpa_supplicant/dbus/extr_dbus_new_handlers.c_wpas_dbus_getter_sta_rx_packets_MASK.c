
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct sta_info {int addr; } ;
struct sta_handler_args {int sta; TYPE_2__* wpa_s; } ;
struct hostapd_data {int dummy; } ;
struct hostap_sta_driver_data {int rx_packets; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {TYPE_1__* ap_iface; } ;
struct TYPE_3__ {struct hostapd_data** bss; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int ) ;
 scalar_t__ FUNC_1 (struct hostapd_data*,struct hostap_sta_driver_data*,int ) ;
 int FUNC_2 (int *,int ,int *,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_2,
 DBusMessageIter *VAR_3, DBusError *VAR_4, void *VAR_5)
{
    return VAR_1;

}
