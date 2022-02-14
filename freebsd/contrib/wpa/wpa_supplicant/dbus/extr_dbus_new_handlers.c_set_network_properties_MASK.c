
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; int eapol; struct wpa_ssid* current_ssid; int wpa; } ;
struct wpa_ssid {scalar_t__ passphrase; scalar_t__ ssid_len; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ array_type; int array_len; int key; int int32_value; int uint32_value; int str_value; scalar_t__ bytearray_value; } ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_4 (size_t,int) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 char* FUNC_6 (int ) ;
 size_t FUNC_7 (int ) ;
 char* FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct wpa_ssid*,int ,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct wpa_ssid*) ;
 int FUNC_13 (struct wpa_dbus_dict_entry*) ;
 int FUNC_14 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int *) ;
 int FUNC_17 (int ,struct wpa_ssid*) ;
 int FUNC_18 (char*,size_t,int *,int) ;

dbus_bool_t FUNC_19(struct wpa_supplicant *VAR_8,
       struct wpa_ssid *VAR_9,
       DBusMessageIter *VAR_10,
       DBusError *VAR_11)
{
 struct wpa_dbus_dict_entry VAR_12 = { .type = VAR_4 };
 DBusMessageIter VAR_13;
 char *VAR_14 = ((void*)0);

 if (!FUNC_16(VAR_10, &VAR_13, VAR_11))
  return VAR_6;

 while (FUNC_15(&VAR_13)) {
  size_t VAR_15 = 50;
  int VAR_16;

  if (!FUNC_14(&VAR_13, &VAR_12))
   goto error;

  VAR_14 = ((void*)0);
  if (VAR_12.type == VAR_1 &&
      VAR_12.array_type == VAR_2) {
   if (VAR_12.array_len <= 0)
    goto error;

   VAR_15 = VAR_12.array_len * 2 + 1;
   VAR_14 = FUNC_8(VAR_15);
   if (VAR_14 == ((void*)0))
    goto error;

   VAR_16 = FUNC_18(VAR_14, VAR_15,
            (u8 *) VAR_12.bytearray_value,
            VAR_12.array_len);
   if (VAR_16 <= 0)
    goto error;
  } else if (VAR_12.type == VAR_4) {
   if (FUNC_9(VAR_12.key)) {
    VAR_15 = FUNC_7(VAR_12.str_value);
    if (VAR_15 == 0)
     goto error;

    VAR_15 += 3;
    VAR_14 = FUNC_8(VAR_15);
    if (VAR_14 == ((void*)0))
     goto error;

    VAR_16 = FUNC_3(VAR_14, VAR_15, "\"%s\"",
        VAR_12.str_value);
    if (FUNC_4(VAR_15, VAR_16))
     goto error;
   } else {
    VAR_14 = FUNC_6(VAR_12.str_value);
    if (VAR_14 == ((void*)0))
     goto error;
   }
  } else if (VAR_12.type == VAR_5) {
   VAR_14 = FUNC_8(VAR_15);
   if (VAR_14 == ((void*)0))
    goto error;

   VAR_16 = FUNC_3(VAR_14, VAR_15, "%u",
       VAR_12.uint32_value);
   if (FUNC_4(VAR_15, VAR_16))
    goto error;
  } else if (VAR_12.type == VAR_3) {
   VAR_14 = FUNC_8(VAR_15);
   if (VAR_14 == ((void*)0))
    goto error;

   VAR_16 = FUNC_3(VAR_14, VAR_15, "%d",
       VAR_12.int32_value);
   if (FUNC_4(VAR_15, VAR_16))
    goto error;
  } else
   goto error;

  if (FUNC_10(VAR_9, VAR_12.key, VAR_14, 0) < 0)
   goto error;

  if (FUNC_5(VAR_12.key, "bssid") != 0 &&
      FUNC_5(VAR_12.key, "priority") != 0)
   FUNC_17(VAR_8->wpa, VAR_9);

  if (VAR_8->current_ssid == VAR_9 ||
      VAR_8->current_ssid == ((void*)0)) {




   FUNC_1(VAR_8->eapol);
  }

  if ((FUNC_5(VAR_12.key, "psk") == 0 &&
       VAR_14[0] == '"' && VAR_9->ssid_len) ||
      (FUNC_5(VAR_12.key, "ssid") == 0 && VAR_9->passphrase))
   FUNC_12(VAR_9);
  else if (FUNC_5(VAR_12.key, "priority") == 0)
   FUNC_11(VAR_8->conf);

  FUNC_2(VAR_14);
  VAR_14 = ((void*)0);
  FUNC_13(&VAR_12);
 }

 return VAR_7;

error:
 FUNC_2(VAR_14);
 FUNC_13(&VAR_12);
 FUNC_0(VAR_11, VAR_0,
        "invalid message format");
 return VAR_6;
}
