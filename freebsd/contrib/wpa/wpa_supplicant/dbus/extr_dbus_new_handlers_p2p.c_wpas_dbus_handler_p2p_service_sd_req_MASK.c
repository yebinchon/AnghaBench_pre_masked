
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ uint32_value; scalar_t__ array_type; int array_len; int bytearray_value; int key; int str_value; } ;
struct TYPE_2__ {int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,scalar_t__*,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (char*,scalar_t__*) ;
 int FUNC_8 (struct wpa_dbus_dict_entry*) ;
 int FUNC_9 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;
 struct wpabuf* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct wpabuf*) ;
 int * FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 (struct wpa_supplicant*,scalar_t__*,struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*,scalar_t__*,scalar_t__,char*) ;

DBusMessage * FUNC_18(
 DBusMessage *VAR_8, struct wpa_supplicant *VAR_9)
{
 DBusMessageIter VAR_10;
 DBusMessage *VAR_11 = ((void*)0);
 DBusMessageIter VAR_12;
 struct wpa_dbus_dict_entry VAR_13;
 int VAR_14 = 0;
 char *VAR_15 = ((void*)0);
 char *VAR_16 = ((void*)0);
 struct wpabuf *VAR_17 = ((void*)0);
 u8 VAR_18 = 0;
 u64 VAR_19 = 0;
 u8 VAR_20[VAR_7], *VAR_21;

 FUNC_1(VAR_8, &VAR_12);

 if (!FUNC_11(&VAR_12, &VAR_10, ((void*)0)))
  goto error;

 while (FUNC_10(&VAR_10)) {
  if (!FUNC_9(&VAR_10, &VAR_13))
   goto error;
  if (FUNC_4(VAR_13.key, "peer_object") == 0 &&
      VAR_13.type == VAR_4) {
   VAR_16 = FUNC_5(VAR_13.str_value);
  } else if (FUNC_4(VAR_13.key, "service_type") == 0 &&
      VAR_13.type == VAR_5) {
   if (FUNC_4(VAR_13.str_value, "upnp") == 0)
    VAR_14 = 1;
   else
    goto error_clear;
  } else if (FUNC_4(VAR_13.key, "version") == 0 &&
      VAR_13.type == VAR_2) {
   VAR_18 = VAR_13.uint32_value;
  } else if (FUNC_4(VAR_13.key, "service") == 0 &&
      VAR_13.type == VAR_5) {
   VAR_15 = FUNC_5(VAR_13.str_value);
  } else if (FUNC_4(VAR_13.key, "tlv") == 0) {
   if (VAR_13.type != VAR_0 ||
       VAR_13.array_type != VAR_1)
    goto error_clear;
   VAR_17 = FUNC_12(VAR_13.bytearray_value,
      VAR_13.array_len);
  } else
   goto error_clear;

  FUNC_8(&VAR_13);
 }

 if (!VAR_16) {
  VAR_21 = ((void*)0);
 } else {
  if (FUNC_7(VAR_16, VAR_20) < 0 ||
      !FUNC_6(VAR_9->global->p2p, VAR_20))
   goto error;

  VAR_21 = VAR_20;
 }

 if (VAR_14 == 1) {
  if (VAR_18 <= 0 || VAR_15 == ((void*)0))
   goto error;

  VAR_19 = FUNC_17(VAR_9, VAR_21, VAR_18, VAR_15);
 } else {
  if (VAR_17 == ((void*)0))
   goto error;
  VAR_19 = FUNC_16(VAR_9, VAR_21, VAR_17);
  FUNC_13(VAR_17);
 }

 if (VAR_19 != 0) {
  VAR_11 = FUNC_2(VAR_8);
  FUNC_0(VAR_11, VAR_6,
      &VAR_19, VAR_3);
 } else {
  VAR_11 = FUNC_15(
   VAR_8, "Unable to send SD request");
 }
out:
 FUNC_3(VAR_15);
 FUNC_3(VAR_16);
 return VAR_11;
error_clear:
 FUNC_8(&VAR_13);
error:
 if (VAR_17)
  FUNC_13(VAR_17);
 VAR_11 = FUNC_14(VAR_8, ((void*)0));
 goto out;
}
