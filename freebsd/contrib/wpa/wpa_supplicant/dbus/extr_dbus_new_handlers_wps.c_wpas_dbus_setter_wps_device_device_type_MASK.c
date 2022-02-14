
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int changed_parameters; int device_type; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct wpa_supplicant*) ;

dbus_bool_t FUNC_5(
 const struct wpa_dbus_property_desc *VAR_6,
 DBusMessageIter *VAR_7, DBusError *VAR_8, void *VAR_9)
{
 struct wpa_supplicant *VAR_10 = VAR_9;
 u8 *VAR_11;
 int VAR_12;
 DBusMessageIter VAR_13, VAR_14;

 if (FUNC_0(VAR_7) != VAR_2)
  return VAR_3;

 FUNC_2(VAR_7, &VAR_13);
 if (FUNC_0(&VAR_13) != VAR_1)
  return VAR_3;

 FUNC_2(&VAR_13, &VAR_14);
 FUNC_1(&VAR_14, &VAR_11, &VAR_12);

 if (VAR_12 != VAR_5)
  return VAR_3;

 FUNC_3(VAR_10->conf->device_type, VAR_11, VAR_5);
 VAR_10->conf->changed_parameters |= VAR_0;
 FUNC_4(VAR_10);

 return VAR_4;
}
