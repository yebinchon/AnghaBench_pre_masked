
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int model_name; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int FUNC_0 (int *,int ,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_0,
 DBusMessageIter *VAR_1, DBusError *VAR_2, void *VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_3;

 return FUNC_0(VAR_1, VAR_4->conf->model_name,
      VAR_2);
}
