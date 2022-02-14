
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; int str_value; int key; } ;
struct TYPE_2__ {int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int FUNC_7 (struct wpa_dbus_dict_entry*) ;
 int FUNC_8 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (struct wpa_supplicant*,int *,int **,int *) ;
 int * FUNC_12 (int *,char*) ;
 int FUNC_13 (struct wpa_supplicant*,int *,int ) ;

DBusMessage * FUNC_14(DBusMessage *VAR_3,
        struct wpa_supplicant *VAR_4)
{
 DBusMessageIter VAR_5;
 DBusMessage *VAR_6 = ((void*)0);
 DBusMessageIter VAR_7;
 struct wpa_dbus_dict_entry VAR_8;
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 u8 VAR_11[VAR_2];

 if (!FUNC_11(VAR_4, VAR_3, &VAR_6, ((void*)0)))
  return VAR_6;

 FUNC_0(VAR_3, &VAR_7);

 if (!FUNC_10(&VAR_7, &VAR_5, ((void*)0)))
  goto err;

 while (FUNC_9(&VAR_5)) {
  if (!FUNC_8(&VAR_5, &VAR_8))
   goto err;

  if (FUNC_3(VAR_8.key, "peer") == 0 &&
      VAR_8.type == VAR_0) {
   FUNC_2(VAR_9);
   VAR_9 = FUNC_4(VAR_8.str_value);
   FUNC_7(&VAR_8);
  } else if (FUNC_3(VAR_8.key, "iface") == 0 &&
      VAR_8.type == VAR_1) {
   FUNC_2(VAR_10);
   VAR_10 = FUNC_4(VAR_8.str_value);
   FUNC_7(&VAR_8);
  } else {
   FUNC_7(&VAR_8);
   goto err;
  }
 }

 if ((!VAR_9 && !VAR_10) ||
     (VAR_9 &&
      (FUNC_6(VAR_9, VAR_11) < 0 ||
       !FUNC_5(VAR_4->global->p2p, VAR_11))) ||
     (VAR_10 && FUNC_1(VAR_10, VAR_11) < 0))
  goto err;

 FUNC_13(VAR_4, VAR_11, VAR_10 != ((void*)0));
 VAR_6 = ((void*)0);
out:
 FUNC_2(VAR_9);
 FUNC_2(VAR_10);
 return VAR_6;
err:
 VAR_6 = FUNC_12(VAR_3, "Invalid address format");
 goto out;
}
