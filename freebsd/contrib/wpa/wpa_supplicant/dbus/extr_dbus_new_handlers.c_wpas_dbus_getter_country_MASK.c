
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {char* country; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char**,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_1,
 DBusMessageIter *VAR_2, DBusError *VAR_3, void *VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_4;
 char VAR_6[3];
 char *VAR_7 = VAR_6;

 VAR_6[0] = VAR_5->conf->country[0];
 VAR_6[1] = VAR_5->conf->country[1];
 VAR_6[2] = '\0';

 return FUNC_0(VAR_2, VAR_0,
      &VAR_7, VAR_3);
}
