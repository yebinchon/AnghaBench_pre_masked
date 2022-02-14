
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int dummy; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct wpa_global*,int,int ,int ) ;
 int FUNC_3 (int *,int *,int ,char const**) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_7,
 DBusMessageIter *VAR_8, DBusError *VAR_9, void *VAR_10)
{
 struct wpa_global *VAR_11 = VAR_10;
 const char *VAR_12 = ((void*)0);
 int VAR_13, VAR_14 = -1;

 if (!FUNC_3(VAR_8, VAR_9, VAR_1,
           &VAR_12))
  return VAR_2;

 for (VAR_13 = 0; VAR_4[VAR_13]; VAR_13++)
  if (FUNC_1(VAR_4[VAR_13], VAR_12) == 0) {
   VAR_14 = VAR_13;
   break;
  }

 if (VAR_14 < 0 ||
     FUNC_2(VAR_11, VAR_14, VAR_6,
         VAR_5)) {
  FUNC_0(VAR_9, VAR_0,
         "wrong debug level value");
  return VAR_2;
 }

 return VAR_3;
}
