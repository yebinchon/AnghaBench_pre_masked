
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; int uint32_value; scalar_t__ array_type; int array_len; int bytearray_value; int key; int str_value; } ;
struct TYPE_2__ {int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 int FUNC_6 (struct wpa_dbus_dict_entry*) ;
 int FUNC_7 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 struct wpabuf* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct wpabuf*) ;
 int * FUNC_12 (int *,int *) ;
 int FUNC_13 (struct wpa_supplicant*,int,int *,int ,struct wpabuf*) ;

DBusMessage * FUNC_14(
 DBusMessage *VAR_6, struct wpa_supplicant *VAR_7)
{
 DBusMessageIter VAR_8;
 DBusMessage *VAR_9 = ((void*)0);
 DBusMessageIter VAR_10;
 struct wpa_dbus_dict_entry VAR_11;
 char *VAR_12 = ((void*)0);
 struct wpabuf *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15 = 0;
 u8 VAR_16[VAR_5];

 FUNC_0(VAR_6, &VAR_10);

 if (!FUNC_9(&VAR_10, &VAR_8, ((void*)0)))
  goto error;

 while (FUNC_8(&VAR_8)) {
  if (!FUNC_7(&VAR_8, &VAR_11))
   goto error;

  if (FUNC_2(VAR_11.key, "peer_object") == 0 &&
      VAR_11.type == VAR_3) {
   VAR_12 = FUNC_3(VAR_11.str_value);
  } else if (FUNC_2(VAR_11.key, "frequency") == 0 &&
      VAR_11.type == VAR_2) {
   VAR_14 = VAR_11.uint32_value;
  } else if (FUNC_2(VAR_11.key, "dialog_token") == 0 &&
      (VAR_11.type == VAR_4 ||
       VAR_11.type == VAR_2)) {
   VAR_15 = VAR_11.uint32_value;
  } else if (FUNC_2(VAR_11.key, "tlvs") == 0) {
   if (VAR_11.type != VAR_0 ||
       VAR_11.array_type != VAR_1)
    goto error_clear;
   VAR_13 = FUNC_10(VAR_11.bytearray_value,
      VAR_11.array_len);
  } else
   goto error_clear;

  FUNC_6(&VAR_11);
 }
 if (FUNC_5(VAR_12, VAR_16) < 0 ||
     !FUNC_4(VAR_7->global->p2p, VAR_16) ||
     VAR_13 == ((void*)0))
  goto error;

 FUNC_13(VAR_7, VAR_14, VAR_16, (u8) VAR_15, VAR_13);
 FUNC_11(VAR_13);
out:
 FUNC_1(VAR_12);
 return VAR_9;
error_clear:
 FUNC_6(&VAR_11);
error:
 VAR_9 = FUNC_12(VAR_6, ((void*)0));
 goto out;
}
