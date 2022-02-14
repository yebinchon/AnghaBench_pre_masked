
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int wpa_state; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 char FUNC_3 (char) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char**,int *) ;

dbus_bool_t FUNC_6(
 const struct wpa_dbus_property_desc *VAR_3,
 DBusMessageIter *VAR_4, DBusError *VAR_5, void *VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_6;
 const char *VAR_8;
 char *VAR_9, *VAR_10;
 dbus_bool_t VAR_11 = VAR_2;

 VAR_8 = FUNC_4(VAR_7->wpa_state);



 VAR_9 = VAR_10 = FUNC_2(VAR_8);
 if (!VAR_10) {
  FUNC_0(VAR_5, VAR_0, "no memory");
  return VAR_2;
 }
 while (*VAR_10) {
  *VAR_10 = FUNC_3(*VAR_10);
  VAR_10++;
 }

 VAR_11 = FUNC_5(VAR_4, VAR_1,
         &VAR_9, VAR_5);

 FUNC_1(VAR_9);

 return VAR_11;
}
