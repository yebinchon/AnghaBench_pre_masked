
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_dbus_property_desc {int dummy; } ;
struct network_handler_args {TYPE_1__* ssid; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {scalar_t__ disabled; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct network_handler_args *VAR_7 = VAR_6;
 dbus_bool_t VAR_8 = VAR_7->ssid->disabled ? VAR_1 : VAR_2;

 return FUNC_0(VAR_4, VAR_0,
      &VAR_8, VAR_5);
}
