
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct wpa_dbus_dict_entry {scalar_t__ type; int bool_value; int int32_value; int str_value; int key; } ;
typedef int npin ;
typedef enum p2p_wps_method { ____Placeholder_p2p_wps_method } p2p_wps_method ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; int p2p; } ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,scalar_t__,char**,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (char*,int *) ;
 int FUNC_11 (struct wpa_dbus_dict_entry*) ;
 int FUNC_12 (int *,struct wpa_dbus_dict_entry*) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (struct wpa_supplicant*,int *,int **,int *) ;
 int * FUNC_16 (int *,int *) ;
 int * FUNC_17 (int *,char*) ;
 int FUNC_18 (struct wpa_supplicant*,int *,char*,int,int,int ,int,int,int,int,int ,int,int ,int ,int ,int ,int ,int *,int ) ;

DBusMessage * FUNC_19(DBusMessage *VAR_13,
         struct wpa_supplicant *VAR_14)
{
 DBusMessageIter VAR_15;
 DBusMessage *VAR_16 = ((void*)0);
 DBusMessageIter VAR_17;
 struct wpa_dbus_dict_entry VAR_18;
 char *VAR_19 = ((void*)0);
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = -1;
 int VAR_24 = 0;
 u8 VAR_25[VAR_5];
 char *VAR_26 = ((void*)0);
 enum p2p_wps_method VAR_27 = VAR_9;
 int VAR_28;
 char *VAR_29 = ((void*)0);
 char *VAR_30 = ((void*)0);
 int VAR_31;

 if (!FUNC_15(VAR_14, VAR_13, &VAR_16, ((void*)0)))
  return VAR_16;

 FUNC_1(VAR_13, &VAR_17);

 if (!FUNC_14(&VAR_17, &VAR_15, ((void*)0)))
  goto inv_args;

 while (FUNC_13(&VAR_15)) {
  if (!FUNC_12(&VAR_15, &VAR_18))
   goto inv_args;

  if (FUNC_7(VAR_18.key, "peer") == 0 &&
      VAR_18.type == VAR_3) {
   VAR_19 = FUNC_8(VAR_18.str_value);
  } else if (FUNC_7(VAR_18.key, "persistent") == 0 &&
      VAR_18.type == VAR_0) {
   VAR_20 = VAR_18.bool_value;
  } else if (FUNC_7(VAR_18.key, "join") == 0 &&
      VAR_18.type == VAR_0) {
   VAR_21 = VAR_18.bool_value;
  } else if (FUNC_7(VAR_18.key, "authorize_only") == 0 &&
      VAR_18.type == VAR_0) {
   VAR_22 = VAR_18.bool_value;
  } else if (FUNC_7(VAR_18.key, "frequency") == 0 &&
      VAR_18.type == VAR_1) {
   VAR_24 = VAR_18.int32_value;
   if (VAR_24 <= 0)
    goto inv_args_clear;
  } else if (FUNC_7(VAR_18.key, "go_intent") == 0 &&
      VAR_18.type == VAR_1) {
   VAR_23 = VAR_18.int32_value;
   if ((VAR_23 < 0) || (VAR_23 > 15))
    goto inv_args_clear;
  } else if (FUNC_7(VAR_18.key, "wps_method") == 0 &&
      VAR_18.type == VAR_4) {
   if (FUNC_7(VAR_18.str_value, "pbc") == 0)
    VAR_27 = VAR_10;
   else if (FUNC_7(VAR_18.str_value, "pin") == 0)
    VAR_27 = VAR_11;
   else if (FUNC_7(VAR_18.str_value, "display") == 0)
    VAR_27 = VAR_11;
   else if (FUNC_7(VAR_18.str_value, "keypad") == 0)
    VAR_27 = VAR_12;
   else
    goto inv_args_clear;
  } else if (FUNC_7(VAR_18.key, "pin") == 0 &&
      VAR_18.type == VAR_4) {
   VAR_26 = FUNC_8(VAR_18.str_value);
  } else
   goto inv_args_clear;

  FUNC_11(&VAR_18);
 }

 if (VAR_27 == VAR_9 ||
     FUNC_10(VAR_19, VAR_25) < 0 ||
     !FUNC_9(VAR_14->global->p2p, VAR_25))
  goto inv_args;




 if ((!VAR_26 || !VAR_26[0]) && VAR_27 == VAR_12)
  goto inv_args;

 VAR_14 = VAR_14->global->p2p_init_wpa_s;

 VAR_28 = FUNC_18(VAR_14, VAR_25, VAR_26, VAR_27,
       VAR_20, 0, VAR_21, VAR_22,
       VAR_23, VAR_24, 0, -1, 0, 0, 0, 0, 0,
       ((void*)0), 0);

 if (VAR_28 >= 0) {
  char VAR_32[9];
  char *VAR_33;

  VAR_31 = FUNC_5(VAR_32, sizeof(VAR_32), "%08d", VAR_28);
  if (FUNC_6(sizeof(VAR_32), VAR_31)) {
   VAR_16 = FUNC_17(VAR_13,
             "invalid PIN");
   goto out;
  }
  VAR_33 = VAR_32;
  VAR_16 = FUNC_3(VAR_13);
  FUNC_0(VAR_16, VAR_4,
      &VAR_33, VAR_2);
 } else {
  switch (VAR_28) {
  case -2:
   VAR_29 =
    "connect failed due to channel unavailability.";
   VAR_30 = VAR_6;
   break;

  case -3:
   VAR_29 = "connect failed due to unsupported channel.";
   VAR_30 = VAR_7;
   break;

  default:
   VAR_29 = "connect failed due to unspecified error.";
   VAR_30 = VAR_8;
   break;
  }







  VAR_16 = FUNC_2(VAR_13, VAR_30, VAR_29);
 }

out:
 FUNC_4(VAR_19);
 FUNC_4(VAR_26);
 return VAR_16;
inv_args_clear:
 FUNC_11(&VAR_18);
inv_args:
 VAR_16 = FUNC_16(VAR_13, ((void*)0));
 goto out;
}
