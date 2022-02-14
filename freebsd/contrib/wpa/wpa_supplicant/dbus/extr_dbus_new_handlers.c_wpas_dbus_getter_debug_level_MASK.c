
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char const**,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 const char *VAR_7;
 int VAR_8 = VAR_2;

 if (VAR_8 < 0)
  VAR_8 = 0;
 if (VAR_8 > 5)
  VAR_8 = 5;
 VAR_7 = VAR_1[VAR_8];
 return FUNC_0(VAR_4, VAR_0,
      &VAR_7, VAR_5);
}
