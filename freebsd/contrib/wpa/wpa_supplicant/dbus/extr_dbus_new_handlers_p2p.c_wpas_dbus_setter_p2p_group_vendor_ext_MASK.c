
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vals ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct wpa_dbus_property_desc {int dummy; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ array_type; int array_len; struct wpabuf** binarray_value; int key; } ;
struct hostapd_data {TYPE_2__* conf; } ;
typedef int dbus_bool_t ;
struct TYPE_4__ {struct wpabuf** wps_vendor_ext; } ;
struct TYPE_3__ {struct hostapd_data** bss; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char**,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (struct hostapd_data*) ;
 int FUNC_7 (struct wpabuf**,int ,int) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wpa_dbus_dict_entry*) ;
 int FUNC_10 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int ,char*,char*,int) ;
 int FUNC_14 (int ,char*) ;
 struct wpabuf* FUNC_15 (char*,int) ;
 int FUNC_16 (struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*) ;

dbus_bool_t FUNC_18(
 const struct wpa_dbus_property_desc *VAR_11,
 DBusMessageIter *VAR_12, DBusError *VAR_13, void *VAR_14)
{
 struct wpa_supplicant *VAR_15 = VAR_14;
 DBusMessageIter VAR_16, VAR_17, VAR_18, VAR_19;
 struct wpa_dbus_dict_entry VAR_20 = { .type = VAR_4 };
 unsigned int VAR_21;
 struct hostapd_data *VAR_22 = ((void*)0);

 if (FUNC_17(VAR_15) == VAR_10 &&
     VAR_15->ap_iface != ((void*)0))
  VAR_22 = VAR_15->ap_iface->bss[0];
 else
  return VAR_5;

 FUNC_4(VAR_12, &VAR_16);
 if (FUNC_0(&VAR_16) != VAR_1)
  return VAR_5;
 if (FUNC_1(&VAR_16) ==
     VAR_1) {

  struct wpabuf *VAR_23[VAR_6];

  FUNC_4(&VAR_16, &VAR_18);

  if (FUNC_0(&VAR_18) !=
      VAR_1 ||
      FUNC_1(&VAR_18) !=
      VAR_2) {
   FUNC_14(VAR_7,
       "dbus: Not an array of array of bytes");
   return VAR_5;
  }

  VAR_21 = 0;
  FUNC_7(VAR_23, 0, sizeof(VAR_23));

  while (FUNC_0(&VAR_18) ==
         VAR_1) {
   char *VAR_24;
   int VAR_25;

   if (VAR_21 == VAR_6) {
    FUNC_14(VAR_7,
        "dbus: Too many WPSVendorExtensions values");
    VAR_21 = VAR_6 + 1;
    break;
   }

   FUNC_4(&VAR_18, &VAR_19);
   FUNC_2(&VAR_19, &VAR_24, &VAR_25);
   FUNC_13(VAR_7, "dbus: WPSVendorExtentions[]",
        VAR_24, VAR_25);
   VAR_23[VAR_21] = FUNC_15(VAR_24, VAR_25);
   if (VAR_23[VAR_21] == ((void*)0)) {
    VAR_21 = VAR_6 + 1;
    break;
   }
   VAR_21++;
   FUNC_3(&VAR_18);
  }

  if (VAR_21 > VAR_6) {
   for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++)
    FUNC_16(VAR_23[VAR_21]);
   return VAR_5;
  }

  for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
   FUNC_16(VAR_22->conf->wps_vendor_ext[VAR_21]);
   VAR_22->conf->wps_vendor_ext[VAR_21] = VAR_23[VAR_21];
  }

  FUNC_6(VAR_22);

  return VAR_8;
 }

 if (FUNC_1(&VAR_16) !=
     VAR_3)
  return VAR_5;

 FUNC_14(VAR_7,
     "dbus: Try to use backwards compatibility version of WPSVendorExtensions setter");
 if (!FUNC_12(&VAR_16, &VAR_17, VAR_13))
  return VAR_5;

 while (FUNC_11(&VAR_17)) {
  if (!FUNC_10(&VAR_17, &VAR_20)) {
   FUNC_5(VAR_13, VAR_0,
          "invalid message format");
   return VAR_5;
  }

  if (FUNC_8(VAR_20.key, "WPSVendorExtensions") == 0) {
   if (VAR_20.type != VAR_1 ||
       VAR_20.array_type != VAR_9 ||
       VAR_20.array_len > VAR_6)
    goto error;

   for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++) {
    FUNC_16(VAR_22->conf->wps_vendor_ext[VAR_21]);
    if (VAR_21 < VAR_20.array_len) {
     VAR_22->conf->wps_vendor_ext[VAR_21] =
      VAR_20.binarray_value[VAR_21];
     VAR_20.binarray_value[VAR_21] = ((void*)0);
    } else
     VAR_22->conf->wps_vendor_ext[VAR_21] = ((void*)0);
   }

   FUNC_6(VAR_22);
  } else
   goto error;

  FUNC_9(&VAR_20);
 }

 return VAR_8;

error:
 FUNC_9(&VAR_20);
 FUNC_5(VAR_13, VAR_0,
        "invalid message format");
 return VAR_5;
}
