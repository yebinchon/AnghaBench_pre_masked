
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char* dbus_new_path; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (int *,int ,char const**,unsigned int,int *) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct wpa_global *VAR_7 = VAR_6;
 struct wpa_supplicant *VAR_8;
 const char **VAR_9;
 unsigned int VAR_10 = 0, VAR_11 = 0;
 dbus_bool_t VAR_12;

 for (VAR_8 = VAR_7->ifaces; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->dbus_new_path)
   VAR_11++;
 }

 VAR_9 = FUNC_1(VAR_11, sizeof(char *));
 if (!VAR_9) {
  FUNC_0(VAR_5, VAR_0, "no memory");
  return VAR_2;
 }

 for (VAR_8 = VAR_7->ifaces; VAR_8; VAR_8 = VAR_8->next) {
  if (VAR_8->dbus_new_path)
   VAR_9[VAR_10++] = VAR_8->dbus_new_path;
 }

 VAR_12 = FUNC_3(VAR_4,
        VAR_1,
        VAR_9, VAR_11, VAR_5);

 FUNC_2(VAR_9);
 return VAR_12;
}
