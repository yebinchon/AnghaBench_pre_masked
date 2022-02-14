
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ifname; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int FUNC_0 (int *,int ,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_0,
 DBusMessageIter *VAR_1, DBusError *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_3;

 return FUNC_0(VAR_1, VAR_4->ifname, VAR_2);
}
