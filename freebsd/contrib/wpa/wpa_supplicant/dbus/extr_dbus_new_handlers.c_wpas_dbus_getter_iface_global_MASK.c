
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int conf; } ;
struct wpa_dbus_property_desc {int data; int dbus_property; } ;
typedef int dbus_bool_t ;
typedef int buf ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (int *,int ,char**,int *) ;

dbus_bool_t FUNC_3(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_6;
 int VAR_8;
 char VAR_9[250];
 char *VAR_10 = VAR_9;

 if (!VAR_3->data) {
  FUNC_0(VAR_5, VAR_0,
          "Unhandled interface property %s",
          VAR_3->dbus_property);
  return VAR_2;
 }

 VAR_8 = FUNC_1(VAR_3->data, VAR_7->conf, VAR_9,
       sizeof(VAR_9));
 if (VAR_8 < 0)
  *VAR_10 = '\0';

 return FUNC_2(VAR_4, VAR_1, &VAR_10,
      VAR_5);
}
