
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int * dbus_groupobj_path; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (int *,int ,char**,int *) ;

dbus_bool_t FUNC_2(
 const struct wpa_dbus_property_desc *VAR_2,
 DBusMessageIter *VAR_3, DBusError *VAR_4, void *VAR_5)
{
 struct wpa_supplicant *VAR_6 = VAR_5;
 char VAR_7[VAR_1];
 char *VAR_8 = VAR_7;

 if (VAR_6->dbus_groupobj_path == ((void*)0))
  FUNC_0(VAR_8, VAR_1,
       "/");
 else
  FUNC_0(VAR_8, VAR_1,
       "%s", VAR_6->dbus_groupobj_path);

 return FUNC_1(VAR_3, VAR_0,
      &VAR_8, VAR_4);
}
