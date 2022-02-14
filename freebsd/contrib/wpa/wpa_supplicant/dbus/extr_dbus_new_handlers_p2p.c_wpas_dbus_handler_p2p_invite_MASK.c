
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int ifname; int conf; TYPE_2__* parent; TYPE_1__* global; } ;
struct wpa_ssid {int disabled; } ;
struct wpa_dbus_dict_entry {char* key; scalar_t__ type; int str_value; } ;
struct TYPE_4__ {char* dbus_new_path; } ;
struct TYPE_3__ {struct wpa_supplicant* p2p_init_wpa_s; int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (char*,int *) ;
 unsigned int FUNC_6 (char*,int *,int) ;
 struct wpa_ssid* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (struct wpa_dbus_dict_entry*) ;
 int FUNC_9 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (struct wpa_supplicant*,int *,int **,int *) ;
 int * FUNC_13 (int *,char*) ;
 int * FUNC_14 (int *,char*) ;
 char* FUNC_15 (char*,int ,char**) ;
 scalar_t__ FUNC_16 (struct wpa_supplicant*,int *,struct wpa_ssid*,int *,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*,int ,int *,int *) ;

DBusMessage * FUNC_18(DBusMessage *VAR_5,
        struct wpa_supplicant *VAR_6)
{
 DBusMessageIter VAR_7;
 DBusMessage *VAR_8 = ((void*)0);
 DBusMessageIter VAR_9;
 struct wpa_dbus_dict_entry VAR_10;
 char *VAR_11 = ((void*)0);
 char *VAR_12 = ((void*)0);
 char *VAR_13 = ((void*)0);
 u8 VAR_14[VAR_2];
 unsigned int VAR_15 = 0;
 int VAR_16 = 0;
 struct wpa_ssid *VAR_17;

 if (!FUNC_12(VAR_6, VAR_5, &VAR_8, ((void*)0)))
  return VAR_8;

 FUNC_0(VAR_5, &VAR_9);

 if (!FUNC_11(&VAR_9, &VAR_7, ((void*)0)))
  goto err;

 while (FUNC_10(&VAR_7)) {
  if (!FUNC_9(&VAR_7, &VAR_10))
   goto err;

  if (FUNC_2(VAR_10.key, "peer") == 0 &&
      VAR_10.type == VAR_0) {
   VAR_11 = FUNC_3(VAR_10.str_value);
   FUNC_8(&VAR_10);
  } else if (FUNC_2(VAR_10.key, "persistent_group_object") ==
      0 &&
      VAR_10.type == VAR_0) {
   VAR_12 = FUNC_3(VAR_10.str_value);
   VAR_16 = 1;
   FUNC_8(&VAR_10);
  } else {
   FUNC_8(&VAR_10);
   goto err;
  }
 }

 if (FUNC_5(VAR_11, VAR_14) < 0 ||
     !FUNC_4(VAR_6->global->p2p, VAR_14))
  goto err;

 VAR_6 = VAR_6->global->p2p_init_wpa_s;

 if (VAR_16) {
  char *VAR_18;





  VAR_13 = FUNC_15(
   VAR_12,
   VAR_3,
   &VAR_18);
  if (VAR_13 == ((void*)0) || VAR_18 == ((void*)0) ||
      !VAR_6->parent->dbus_new_path ||
      FUNC_2(VAR_13, VAR_6->parent->dbus_new_path) != 0) {
   VAR_8 = FUNC_13(VAR_5,
            VAR_12);
   goto out;
  }

  VAR_15 = FUNC_6(VAR_18, ((void*)0), 10);
  if (VAR_4 == VAR_1) {
   VAR_8 = FUNC_13(
    VAR_5, VAR_12);
   goto out;
  }


  VAR_17 = FUNC_7(VAR_6->conf, VAR_15);
  if (VAR_17 == ((void*)0) || VAR_17->disabled != 2)
   goto err;

  if (FUNC_16(VAR_6, VAR_14, VAR_17, ((void*)0), 0, 0, 0, 0, 0,
        0, 0) < 0) {
   VAR_8 = FUNC_14(
    VAR_5,
    "Failed to reinvoke a persistent group");
   goto out;
  }
 } else {



  if (FUNC_17(VAR_6, VAR_6->ifname,
       VAR_14, ((void*)0))) {
   VAR_8 = FUNC_14(
    VAR_5, "Failed to join to an active group");
   goto out;
  }
 }

out:
 FUNC_1(VAR_13);
 FUNC_1(VAR_12);
 FUNC_1(VAR_11);
 return VAR_8;

err:
 VAR_8 = FUNC_13(VAR_5, ((void*)0));
 goto out;
}
