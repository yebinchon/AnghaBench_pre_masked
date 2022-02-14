
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; scalar_t__ uint32_value; scalar_t__ array_type; int array_len; int bytearray_value; int key; int str_value; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct wpa_dbus_dict_entry*) ;
 int FUNC_5 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 struct wpabuf* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct wpabuf*) ;
 int * FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (struct wpa_supplicant*,struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct wpa_supplicant*,scalar_t__,char*) ;

DBusMessage * FUNC_13(DBusMessage *VAR_4,
      struct wpa_supplicant *VAR_5)
{
 DBusMessageIter VAR_6;
 DBusMessage *VAR_7 = ((void*)0);
 DBusMessageIter VAR_8;
 struct wpa_dbus_dict_entry VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 char *VAR_12 = ((void*)0);
 struct wpabuf *VAR_13 = ((void*)0);
 struct wpabuf *VAR_14 = ((void*)0);
 u8 VAR_15 = 0;

 FUNC_0(VAR_4, &VAR_8);

 if (!FUNC_7(&VAR_8, &VAR_6, ((void*)0)))
  goto error;

 while (FUNC_6(&VAR_6)) {
  if (!FUNC_5(&VAR_6, &VAR_9))
   goto error;

  if (FUNC_2(VAR_9.key, "service_type") == 0 &&
      VAR_9.type == VAR_3) {
   if (FUNC_2(VAR_9.str_value, "upnp") == 0)
    VAR_10 = 1;
   else if (FUNC_2(VAR_9.str_value, "bonjour") == 0)
    VAR_11 = 1;
   else
    goto error_clear;
  } else if (FUNC_2(VAR_9.key, "version") == 0 &&
      VAR_9.type == VAR_2) {
   VAR_15 = VAR_9.uint32_value;
  } else if (FUNC_2(VAR_9.key, "service") == 0 &&
      VAR_9.type == VAR_3) {
   FUNC_1(VAR_12);
   VAR_12 = FUNC_3(VAR_9.str_value);
  } else if (FUNC_2(VAR_9.key, "query") == 0) {
   if (VAR_9.type != VAR_0 ||
       VAR_9.array_type != VAR_1)
    goto error_clear;
   VAR_13 = FUNC_8(
    VAR_9.bytearray_value,
    VAR_9.array_len);
  } else if (FUNC_2(VAR_9.key, "response") == 0) {
   if (VAR_9.type != VAR_0 ||
       VAR_9.array_type != VAR_1)
    goto error_clear;
   VAR_14 = FUNC_8(VAR_9.bytearray_value,
       VAR_9.array_len);
  }
  FUNC_4(&VAR_9);
 }

 if (VAR_10 == 1) {
  if (VAR_15 <= 0 || VAR_12 == ((void*)0))
   goto error;

  if (FUNC_12(VAR_5, VAR_15, VAR_12) != 0)
   goto error;

 } else if (VAR_11 == 1) {
  if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
   goto error;

  if (FUNC_11(VAR_5, VAR_13, VAR_14) < 0)
   goto error;
  VAR_13 = ((void*)0);
  VAR_14 = ((void*)0);
 } else
  goto error;

 FUNC_1(VAR_12);
 return VAR_7;
error_clear:
 FUNC_4(&VAR_9);
error:
 FUNC_1(VAR_12);
 FUNC_9(VAR_13);
 FUNC_9(VAR_14);
 return FUNC_10(VAR_4, ((void*)0));
}
