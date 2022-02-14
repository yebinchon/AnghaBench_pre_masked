
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_start_params {int type; int role; int bssid; int * pin; int p2p_dev_addr; } ;
struct wpa_supplicant {scalar_t__ ap_iface; } ;
typedef int params ;
typedef int npin ;
typedef int DBusMessageIter ;
typedef int DBusMessage ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct wps_start_params*,int ,int) ;
 int FUNC_9 (char*,int,char*,int) ;
 scalar_t__ FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_17 (struct wpa_supplicant*,int ,int *,char*,int,int ) ;
 int * FUNC_18 (int *,char*) ;
 int * FUNC_19 (int *) ;
 int * FUNC_20 (int *,char*) ;
 scalar_t__ FUNC_21 (int *,char*,int *,struct wps_start_params*,int **) ;
 int FUNC_22 (struct wpa_supplicant*,int ,int ,int ) ;
 int FUNC_23 (struct wpa_supplicant*,int ,int *,int ,int ) ;
 int FUNC_24 (struct wpa_supplicant*,int ,int *,int *) ;

DBusMessage * FUNC_25(DBusMessage *VAR_3,
       struct wpa_supplicant *VAR_4)
{
 DBusMessage *VAR_5 = ((void*)0);
 DBusMessageIter VAR_6, VAR_7, VAR_8;
 struct wps_start_params VAR_9;
 char *VAR_10;
 char VAR_11[9] = { '\0' };
 int VAR_12;

 FUNC_8(&VAR_9, 0, sizeof(VAR_9));
 FUNC_2(VAR_3, &VAR_6);

 FUNC_5(&VAR_6, &VAR_7);
 while (FUNC_0(&VAR_7) ==
        VAR_0) {
  FUNC_5(&VAR_7, &VAR_8);

  FUNC_1(&VAR_8, &VAR_10);
  FUNC_4(&VAR_8);

  if (FUNC_21(VAR_3, VAR_10,
            &VAR_8,
            &VAR_9, &VAR_5))
   return VAR_5;

  FUNC_4(&VAR_7);
 }
 if (VAR_9.role == 0) {
  FUNC_15(VAR_2, "dbus: WPS.Start - Role not specified");
  return FUNC_18(VAR_3,
          "Role not specified");
 } else if (VAR_9.role == 2) {
  if (VAR_9.pin == ((void*)0)) {
   FUNC_15(VAR_2,
       "dbus: WPS.Start - Pin required for registrar role");
   return FUNC_18(
    VAR_3, "Pin required for registrar role.");
  }
  VAR_12 = FUNC_24(VAR_4, VAR_9.bssid, VAR_9.pin,
      ((void*)0));
 } else if (VAR_9.type == 0) {
  FUNC_15(VAR_2, "dbus: WPS.Start - Type not specified");
  return FUNC_18(VAR_3,
          "Type not specified");
 } else if (VAR_9.type == 1) {
  VAR_12 = FUNC_23(VAR_4, VAR_9.bssid,
      VAR_9.pin, 0,
      VAR_1);
  if (VAR_12 > 0) {
   VAR_12 = FUNC_9(VAR_11, sizeof(VAR_11), "%08d", VAR_12);
   if (FUNC_10(sizeof(VAR_11), VAR_12))
    return FUNC_20(
     VAR_3, "invalid PIN");
  }
 } else {
  VAR_12 = FUNC_22(VAR_4, VAR_9.bssid, 0, 0);
 }

 if (VAR_12 < 0) {
  FUNC_15(VAR_2,
      "dbus: WPS.Start wpas_wps_failed in role %s and key %s",
      (VAR_9.role == 1 ? "enrollee" : "registrar"),
      (VAR_9.type == 0 ? "" :
       (VAR_9.type == 1 ? "pin" : "pbc")));
  return FUNC_20(VAR_3,
           "WPS start failed");
 }

 VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5)
  return FUNC_19(VAR_3);

 FUNC_3(VAR_5, &VAR_6);
 if (!FUNC_14(&VAR_6, &VAR_7) ||
     (FUNC_11(VAR_11) > 0 &&
      !FUNC_12(&VAR_7, "Pin", VAR_11)) ||
     !FUNC_13(&VAR_6, &VAR_7)) {
  FUNC_7(VAR_5);
  return FUNC_19(VAR_3);
 }

 return VAR_5;
}
