
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec; int usec; } ;
struct wpa_supplicant {TYPE_1__ session_length; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_uint32_t ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int*,int *) ;

dbus_bool_t FUNC_1(
 const struct wpa_dbus_property_desc *VAR_1,
 DBusMessageIter *VAR_2, DBusError *VAR_3, void *VAR_4)
{
 struct wpa_supplicant *VAR_5 = VAR_4;
 dbus_uint32_t VAR_6 = VAR_5->session_length.sec * 1000 +
  VAR_5->session_length.usec / 1000;

 return FUNC_0(VAR_2, VAR_0,
      &VAR_6, VAR_3);
}
