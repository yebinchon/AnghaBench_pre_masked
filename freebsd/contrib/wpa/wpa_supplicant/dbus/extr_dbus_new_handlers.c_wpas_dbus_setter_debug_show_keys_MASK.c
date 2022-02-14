
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef scalar_t__ dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wpa_global*,int ,int ,int) ;
 int FUNC_1 (int *,int *,int ,scalar_t__*) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpa_global *VAR_9 = VAR_8;
 dbus_bool_t VAR_10;

 if (!FUNC_1(VAR_6, VAR_7, VAR_0,
           &VAR_10))
  return VAR_1;

 FUNC_0(VAR_9, VAR_3,
     VAR_4,
     VAR_10 ? 1 : 0);
 return VAR_2;
}
