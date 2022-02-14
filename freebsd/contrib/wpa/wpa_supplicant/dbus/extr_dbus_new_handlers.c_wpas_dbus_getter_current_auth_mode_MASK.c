
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; scalar_t__ key_mgmt; TYPE_1__* current_ssid; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int proto; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,char*,char const*) ;
 char* FUNC_1 (scalar_t__,int ) ;
 char* FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int *,int ,char const**,int *) ;

dbus_bool_t FUNC_4(
 const struct wpa_dbus_property_desc *VAR_5,
 DBusMessageIter *VAR_6, DBusError *VAR_7, void *VAR_8)
{
 struct wpa_supplicant *VAR_9 = VAR_8;
 const char *VAR_10;
 const char *VAR_11;
 char VAR_12[VAR_1];

 if (VAR_9->wpa_state != VAR_2) {
  VAR_11 = "INACTIVE";
 } else if (VAR_9->key_mgmt == VAR_3 ||
     VAR_9->key_mgmt == VAR_4) {
  VAR_10 = FUNC_2(VAR_9);
  FUNC_0(VAR_12, VAR_1,
       "EAP-%s", VAR_10);
  VAR_11 = VAR_12;

 } else if (VAR_9->current_ssid) {
  VAR_11 = FUNC_1(VAR_9->key_mgmt,
          VAR_9->current_ssid->proto);
 } else {
  VAR_11 = "UNKNOWN";
 }

 return FUNC_3(VAR_6, VAR_0,
      &VAR_11, VAR_7);
}
