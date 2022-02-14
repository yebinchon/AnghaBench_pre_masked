
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_uint32_t ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,int ) ;
 int FUNC_2 (int *,int *,int ,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_4,
 DBusMessageIter *VAR_5, DBusError *VAR_6, void *VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_7;
 dbus_uint32_t VAR_9;

 if (!FUNC_2(VAR_5, VAR_6, VAR_1,
           &VAR_9))
  return VAR_2;

 if (FUNC_1(VAR_8, VAR_9)) {
  FUNC_0(VAR_6, VAR_0,
         "ap_scan must be 0, 1, or 2");
  return VAR_2;
 }
 return VAR_3;
}
