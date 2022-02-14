
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int conf; TYPE_2__* parent; TYPE_1__* global; } ;
struct wpa_ssid {int disabled; } ;
struct wpa_dbus_dict_entry {char* key; scalar_t__ type; int bool_value; int int32_value; int str_value; } ;
struct TYPE_4__ {char* dbus_new_path; } ;
struct TYPE_3__ {struct wpa_supplicant* p2p_init_wpa_s; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 unsigned int FUNC_4 (char*,int *,int) ;
 struct wpa_ssid* FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct wpa_dbus_dict_entry*) ;
 int FUNC_7 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int *,char*) ;
 int * FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*,int ,char**) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*,int,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_14 (struct wpa_supplicant*,struct wpa_ssid*,int ,int,int ,int ,int ,int ,int ,int ,int *,int ,int ) ;

DBusMessage * FUNC_15(DBusMessage *VAR_6,
           struct wpa_supplicant *VAR_7)
{
 DBusMessageIter VAR_8;
 DBusMessage *VAR_9 = ((void*)0);
 DBusMessageIter VAR_10;
 struct wpa_dbus_dict_entry VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14 = 0;
 char *VAR_15 = ((void*)0);
 unsigned int VAR_16 = 0;
 struct wpa_ssid *VAR_17;

 FUNC_0(VAR_6, &VAR_10);

 if (!FUNC_9(&VAR_10, &VAR_8, ((void*)0)))
  goto inv_args;

 while (FUNC_8(&VAR_8)) {
  if (!FUNC_7(&VAR_8, &VAR_11))
   goto inv_args;

  if (FUNC_2(VAR_11.key, "persistent") == 0 &&
      VAR_11.type == VAR_0) {
   VAR_13 = VAR_11.bool_value;
  } else if (FUNC_2(VAR_11.key, "frequency") == 0 &&
      VAR_11.type == VAR_1) {
   VAR_14 = VAR_11.int32_value;
   if (VAR_14 <= 0)
    goto inv_args_clear;
  } else if (FUNC_2(VAR_11.key, "persistent_group_object") ==
      0 &&
      VAR_11.type == VAR_2)
   VAR_12 = FUNC_3(VAR_11.str_value);
  else
   goto inv_args_clear;

  FUNC_6(&VAR_11);
 }

 VAR_7 = VAR_7->global->p2p_init_wpa_s;

 if (VAR_12 != ((void*)0)) {
  char *VAR_18;






  VAR_15 = FUNC_12(
   VAR_12, VAR_4,
   &VAR_18);
  if (VAR_15 == ((void*)0) || VAR_18 == ((void*)0) ||
      !VAR_7->parent->dbus_new_path ||
      FUNC_2(VAR_15, VAR_7->parent->dbus_new_path) != 0) {
   VAR_9 =
       FUNC_10(VAR_6,
        VAR_12);
   goto out;
  }

  VAR_16 = FUNC_4(VAR_18, ((void*)0), 10);
  if (VAR_5 == VAR_3) {
   VAR_9 = FUNC_10(
      VAR_6, VAR_12);
   goto out;
  }


  VAR_17 = FUNC_5(VAR_7->conf, VAR_16);
  if (VAR_17 == ((void*)0) || VAR_17->disabled != 2)
   goto inv_args;

  if (FUNC_14(VAR_7, VAR_17, 0, VAR_14, 0, 0, 0,
        0, 0, 0, ((void*)0), 0, 0)) {
   VAR_9 = FUNC_11(
    VAR_6,
    "Failed to reinvoke a persistent group");
   goto out;
  }
 } else if (FUNC_13(VAR_7, VAR_13, VAR_14, 0, 0, 0,
          0, 0))
  goto inv_args;

out:
 FUNC_1(VAR_12);
 FUNC_1(VAR_15);
 return VAR_9;
inv_args_clear:
 FUNC_6(&VAR_11);
inv_args:
 VAR_9 = FUNC_10(VAR_6, ((void*)0));
 goto out;
}
