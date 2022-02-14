
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; int * drv_priv; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {char* country; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *,int ,char const**) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_8;
 const char *VAR_10;

 if (!FUNC_3(VAR_6, VAR_7, VAR_1,
           &VAR_10))
  return VAR_2;

 if (!VAR_10[0] || !VAR_10[1]) {
  FUNC_0(VAR_7, VAR_0,
         "invalid country code");
  return VAR_2;
 }

 if (VAR_9->drv_priv != ((void*)0) && FUNC_1(VAR_9, VAR_10)) {
  FUNC_2(VAR_3, "Failed to set country");
  FUNC_0(VAR_7, VAR_0,
         "failed to set country code");
  return VAR_2;
 }

 VAR_9->conf->country[0] = VAR_10[0];
 VAR_9->conf->country[1] = VAR_10[1];
 return VAR_4;
}
