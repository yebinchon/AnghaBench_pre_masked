
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int fast_reauth; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_6;
 dbus_bool_t VAR_8;

 if (!FUNC_0(VAR_4, VAR_5, VAR_0,
           &VAR_8))
  return VAR_1;

 VAR_7->conf->fast_reauth = VAR_8;
 return VAR_2;
}
