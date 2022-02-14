
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {char* dbus_new_path; } ;
struct wpa_interface {char* driver; char* ifname; char* confname; char* bridge_ifname; } ;
struct wpa_global {int dummy; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; int str_value; int key; } ;
typedef int iface ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char const**,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wpa_interface*,int ,int) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (struct wpa_dbus_dict_entry*) ;
 int FUNC_9 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;
 struct wpa_supplicant* FUNC_12 (struct wpa_global*,struct wpa_interface*,int *) ;
 int * FUNC_13 (struct wpa_global*,char*) ;
 int * FUNC_14 (int *,int *) ;
 int * FUNC_15 (int *) ;
 int * FUNC_16 (int *,char*) ;

DBusMessage * FUNC_17(DBusMessage *VAR_4,
       struct wpa_global *VAR_5)
{
 DBusMessageIter VAR_6;
 DBusMessage *VAR_7 = ((void*)0);
 DBusMessageIter VAR_8;
 struct wpa_dbus_dict_entry VAR_9;
 char *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);

 FUNC_1(VAR_4, &VAR_8);

 if (!FUNC_11(&VAR_8, &VAR_6, ((void*)0)))
  goto error;
 while (FUNC_10(&VAR_6)) {
  if (!FUNC_9(&VAR_6, &VAR_9))
   goto error;
  if (FUNC_6(VAR_9.key, "Driver") == 0 &&
      VAR_9.type == VAR_2) {
   FUNC_4(VAR_10);
   VAR_10 = FUNC_7(VAR_9.str_value);
   FUNC_8(&VAR_9);
   if (VAR_10 == ((void*)0))
    goto oom;
  } else if (FUNC_6(VAR_9.key, "Ifname") == 0 &&
      VAR_9.type == VAR_2) {
   FUNC_4(VAR_11);
   VAR_11 = FUNC_7(VAR_9.str_value);
   FUNC_8(&VAR_9);
   if (VAR_11 == ((void*)0))
    goto oom;
  } else if (FUNC_6(VAR_9.key, "ConfigFile") == 0 &&
      VAR_9.type == VAR_2) {
   FUNC_4(VAR_12);
   VAR_12 = FUNC_7(VAR_9.str_value);
   FUNC_8(&VAR_9);
   if (VAR_12 == ((void*)0))
    goto oom;
  } else if (FUNC_6(VAR_9.key, "BridgeIfname") == 0 &&
      VAR_9.type == VAR_2) {
   FUNC_4(VAR_13);
   VAR_13 = FUNC_7(VAR_9.str_value);
   FUNC_8(&VAR_9);
   if (VAR_13 == ((void*)0))
    goto oom;
  } else {
   FUNC_8(&VAR_9);
   goto error;
  }
 }

 if (VAR_11 == ((void*)0))
  goto error;





 if (FUNC_13(VAR_5, VAR_11) != ((void*)0)) {
  VAR_7 = FUNC_2(
   VAR_4, VAR_3,
   "wpa_supplicant already controls this interface.");
 } else {
  struct wpa_supplicant *VAR_14;
  struct wpa_interface VAR_15;

  FUNC_5(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.driver = VAR_10;
  VAR_15.ifname = VAR_11;
  VAR_15.confname = VAR_12;
  VAR_15.bridge_ifname = VAR_13;

  VAR_14 = FUNC_12(VAR_5, &VAR_15, ((void*)0));
  if (VAR_14 && VAR_14->dbus_new_path) {
   const char *VAR_16 = VAR_14->dbus_new_path;

   VAR_7 = FUNC_3(VAR_4);
   FUNC_0(VAR_7, VAR_1,
       &VAR_16, VAR_0);
  } else {
   VAR_7 = FUNC_16(
    VAR_4,
    "wpa_supplicant couldn't grab this interface.");
  }
 }

out:
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);
 FUNC_4(VAR_13);
 return VAR_7;

error:
 VAR_7 = FUNC_14(VAR_4, ((void*)0));
 goto out;
oom:
 VAR_7 = FUNC_15(VAR_4);
 goto out;
}
