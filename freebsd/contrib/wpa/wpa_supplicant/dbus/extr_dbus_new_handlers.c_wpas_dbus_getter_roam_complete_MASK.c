
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int roam_time; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *,int *) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_1,
 DBusMessageIter *VAR_2, DBusError *VAR_3, void *VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_4;
 dbus_bool_t VAR_6 = FUNC_0(&VAR_5->roam_time);

 return FUNC_1(VAR_2, VAR_0,
      &VAR_6, VAR_3);
}
