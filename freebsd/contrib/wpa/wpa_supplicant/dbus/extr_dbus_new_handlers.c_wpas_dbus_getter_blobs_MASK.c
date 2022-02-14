
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct wpa_config_blob {struct wpa_config_blob* next; int len; int data; int name; } ;
typedef int dbus_bool_t ;
struct TYPE_2__ {struct wpa_config_blob* blobs; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,char*,int *) ;
 int FUNC_4 (int *,int ,char*) ;

dbus_bool_t FUNC_5(
 const struct wpa_dbus_property_desc *VAR_9,
 DBusMessageIter *VAR_10, DBusError *VAR_11, void *VAR_12)
{
 struct wpa_supplicant *VAR_13 = VAR_12;
 DBusMessageIter VAR_14, VAR_15, VAR_16, VAR_17;
 struct wpa_config_blob *VAR_18;

 if (!FUNC_3(VAR_10, VAR_6,
           "a{say}", &VAR_14) ||
     !FUNC_3(&VAR_14, VAR_1,
           "{say}", &VAR_15)) {
  FUNC_4(VAR_11, VAR_0, "no memory");
  return VAR_7;
 }

 VAR_18 = VAR_13->conf->blobs;
 while (VAR_18) {
  if (!FUNC_3(&VAR_15,
            VAR_4,
            ((void*)0), &VAR_16) ||
      !FUNC_0(&VAR_16,
          VAR_5,
          &(VAR_18->name)) ||
      !FUNC_3(&VAR_16,
            VAR_1,
            VAR_3,
            &VAR_17) ||
      !FUNC_1(&VAR_17,
         VAR_2,
         &(VAR_18->data),
         VAR_18->len) ||
      !FUNC_2(&VAR_16,
             &VAR_17) ||
      !FUNC_2(&VAR_15,
             &VAR_16)) {
   FUNC_4(VAR_11, VAR_0,
          "no memory");
   return VAR_7;
  }

  VAR_18 = VAR_18->next;
 }

 if (!FUNC_2(&VAR_14, &VAR_15) ||
     !FUNC_2(VAR_10, &VAR_14)) {
  FUNC_4(VAR_11, VAR_0, "no memory");
  return VAR_7;
 }

 return VAR_8;
}
