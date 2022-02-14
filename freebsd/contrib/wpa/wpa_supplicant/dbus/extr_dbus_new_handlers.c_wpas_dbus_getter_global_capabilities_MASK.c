
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (int *,int ,char const**,size_t,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_1,
 DBusMessageIter *VAR_2, DBusError *VAR_3, void *VAR_4)
{
 const char *VAR_5[10] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0) };
 size_t VAR_6 = 0;
 return FUNC_2(VAR_2,
            VAR_0,
            VAR_5,
            VAR_6, VAR_3);
}
