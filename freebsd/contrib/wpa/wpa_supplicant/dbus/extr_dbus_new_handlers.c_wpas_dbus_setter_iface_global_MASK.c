
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_dbus_property_desc {char const* data; int dbus_property; } ;
typedef int dbus_bool_t ;
typedef int buf ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*) ;
 scalar_t__ FUNC_2 (size_t,int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (int *,int *,int ,char const**) ;

dbus_bool_t FUNC_7(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_8;
 const char *VAR_10 = ((void*)0);
 char VAR_11[250];
 size_t VAR_12;
 int VAR_13;

 if (!FUNC_6(VAR_6, VAR_7, VAR_1,
           &VAR_10))
  return VAR_2;

 VAR_12 = FUNC_3(VAR_5->data) + FUNC_3(VAR_10) +
  3;
 if (VAR_12 >= sizeof(VAR_11)) {
  FUNC_0(VAR_7, VAR_0,
          "Interface property %s value too large",
          VAR_5->dbus_property);
  return VAR_2;
 }

 if (!VAR_10[0])
  VAR_10 = "NULL";

 VAR_13 = FUNC_1(VAR_11, VAR_12, "%s=%s", VAR_5->data,
     VAR_10);
 if (FUNC_2(VAR_12, VAR_13)) {
  FUNC_0(VAR_7, VAR_4,
          "Failed to construct new interface property %s",
          VAR_5->dbus_property);
  return VAR_2;
 }

 if (FUNC_4(VAR_9->conf, VAR_11, -1)) {
  FUNC_0(VAR_7, VAR_0,
          "Failed to set interface property %s",
          VAR_5->dbus_property);
  return VAR_2;
 }

 FUNC_5(VAR_9);
 return VAR_3;
}
