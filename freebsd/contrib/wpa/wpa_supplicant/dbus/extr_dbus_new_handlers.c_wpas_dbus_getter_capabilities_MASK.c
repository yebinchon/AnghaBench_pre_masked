
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* conf; } ;
struct wpa_driver_capa {int enc; int key_mgmt; int auth; int flags; int max_scan_ssids; } ;
struct wpa_dbus_property_desc {int dummy; } ;
typedef int dbus_int32_t ;
typedef int dbus_bool_t ;
struct TYPE_2__ {int p2p_disabled; } ;
typedef int DBusMessageIter ;
typedef int DBusError ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char*,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,char const**,int ) ;
 int FUNC_6 (int *,char*,int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (struct wpa_supplicant*,struct wpa_driver_capa*) ;

dbus_bool_t FUNC_12(
 const struct wpa_dbus_property_desc *VAR_29,
 DBusMessageIter *VAR_30, DBusError *VAR_31, void *VAR_32)
{
 struct wpa_supplicant *VAR_33 = VAR_32;
 struct wpa_driver_capa VAR_34;
 int VAR_35;
 DBusMessageIter VAR_36, VAR_37, VAR_38, VAR_39,
  VAR_40;
 const char *VAR_41[] = { "active", "passive", "ssid" };

 if (!FUNC_2(VAR_30, VAR_1,
           "a{sv}", &VAR_40) ||
     !FUNC_9(&VAR_40, &VAR_36))
  goto nomem;

 VAR_35 = FUNC_11(VAR_33, &VAR_34);


 if (VAR_35 < 0) {
  const char *VAR_42[] = {"ccmp", "tkip", "none"};

  if (!FUNC_5(
       &VAR_36, "Pairwise", VAR_42,
       FUNC_0(VAR_42)))
   goto nomem;
 } else {
  if (!FUNC_6(&VAR_36, "Pairwise",
            &VAR_37,
            &VAR_38,
            &VAR_39) ||
      ((VAR_34.enc & VAR_12) &&
       !FUNC_10(
        &VAR_39, "ccmp-256")) ||
      ((VAR_34.enc & VAR_14) &&
       !FUNC_10(
        &VAR_39, "gcmp-256")) ||
      ((VAR_34.enc & VAR_11) &&
       !FUNC_10(
        &VAR_39, "ccmp")) ||
      ((VAR_34.enc & VAR_13) &&
       !FUNC_10(
        &VAR_39, "gcmp")) ||
      ((VAR_34.enc & VAR_15) &&
       !FUNC_10(
        &VAR_39, "tkip")) ||
      ((VAR_34.key_mgmt & VAR_23) &&
       !FUNC_10(
        &VAR_39, "none")) ||
      !FUNC_8(&VAR_36,
          &VAR_37,
          &VAR_38,
          &VAR_39))
   goto nomem;
 }


 if (VAR_35 < 0) {
  const char *VAR_43[] = {
   "ccmp", "tkip", "wep104", "wep40"
  };

  if (!FUNC_5(
       &VAR_36, "Group", VAR_43,
       FUNC_0(VAR_43)))
   goto nomem;
 } else {
  if (!FUNC_6(&VAR_36, "Group",
            &VAR_37,
            &VAR_38,
            &VAR_39) ||
      ((VAR_34.enc & VAR_12) &&
       !FUNC_10(
        &VAR_39, "ccmp-256")) ||
      ((VAR_34.enc & VAR_14) &&
       !FUNC_10(
        &VAR_39, "gcmp-256")) ||
      ((VAR_34.enc & VAR_11) &&
       !FUNC_10(
        &VAR_39, "ccmp")) ||
      ((VAR_34.enc & VAR_13) &&
       !FUNC_10(
        &VAR_39, "gcmp")) ||
      ((VAR_34.enc & VAR_15) &&
       !FUNC_10(
        &VAR_39, "tkip")) ||
      ((VAR_34.enc & VAR_16) &&
       !FUNC_10(
        &VAR_39, "wep104")) ||
      ((VAR_34.enc & VAR_17) &&
       !FUNC_10(
        &VAR_39, "wep40")) ||
      !FUNC_8(&VAR_36,
          &VAR_37,
          &VAR_38,
          &VAR_39))
   goto nomem;
 }

 if (!FUNC_6(&VAR_36, "GroupMgmt",
           &VAR_37,
           &VAR_38,
           &VAR_39) ||
     (VAR_35 == 0 && (VAR_34.enc & VAR_7) &&
      !FUNC_10(
       &VAR_39, "aes-128-cmac")) ||
     (VAR_35 == 0 && (VAR_34.enc & VAR_9) &&
      !FUNC_10(
       &VAR_39, "bip-gmac-128")) ||
     (VAR_35 == 0 && (VAR_34.enc & VAR_10) &&
      !FUNC_10(
       &VAR_39, "bip-gmac-256")) ||
     (VAR_35 == 0 && (VAR_34.enc & VAR_8) &&
      !FUNC_10(
       &VAR_39, "bip-cmac-256")) ||
     !FUNC_8(&VAR_36,
         &VAR_37,
         &VAR_38,
         &VAR_39))
  goto nomem;


 if (VAR_35 < 0) {
  const char *VAR_44[] = {
   "wpa-psk", "wpa-eap", "ieee8021x", "wpa-none",



   "none"
  };
  if (!FUNC_5(
       &VAR_36, "KeyMgmt", VAR_44,
       FUNC_0(VAR_44)))
   goto nomem;
 } else {
  if (!FUNC_6(&VAR_36, "KeyMgmt",
            &VAR_37,
            &VAR_38,
            &VAR_39) ||
      !FUNC_10(&VAR_39,
           "none") ||
      !FUNC_10(&VAR_39,
           "ieee8021x"))
   goto nomem;

  if (VAR_34.key_mgmt & (VAR_20 |
         VAR_21)) {
   if (!FUNC_10(
        &VAR_39, "wpa-eap") ||
       ((VAR_34.key_mgmt & VAR_18) &&
        !FUNC_10(
         &VAR_39, "wpa-ft-eap")))
    goto nomem;







  }

  if (VAR_34.key_mgmt & (VAR_24 |
         VAR_22)) {
   if (!FUNC_10(
        &VAR_39, "wpa-psk") ||
       ((VAR_34.key_mgmt &
         VAR_19) &&
        !FUNC_10(
         &VAR_39, "wpa-ft-psk")))
    goto nomem;







  }

  if ((VAR_34.key_mgmt & VAR_23) &&
      !FUNC_10(&VAR_39,
           "wpa-none"))
   goto nomem;
  if (!FUNC_8(&VAR_36,
          &VAR_37,
          &VAR_38,
          &VAR_39))
   goto nomem;
 }


 if (VAR_35 < 0) {
  const char *VAR_45[] = { "rsn", "wpa" };

  if (!FUNC_5(
       &VAR_36, "Protocol", VAR_45,
       FUNC_0(VAR_45)))
   goto nomem;
 } else {
  if (!FUNC_6(&VAR_36, "Protocol",
            &VAR_37,
            &VAR_38,
            &VAR_39) ||
      ((VAR_34.key_mgmt & (VAR_21 |
           VAR_22)) &&
       !FUNC_10(
        &VAR_39, "rsn")) ||
      ((VAR_34.key_mgmt & (VAR_20 |
           VAR_24)) &&
       !FUNC_10(
        &VAR_39, "wpa")) ||
      !FUNC_8(&VAR_36,
          &VAR_37,
          &VAR_38,
          &VAR_39))
   goto nomem;
 }


 if (VAR_35 < 0) {
  const char *VAR_46[] = { "open", "shared", "leap" };

  if (!FUNC_5(
       &VAR_36, "AuthAlg", VAR_46,
       FUNC_0(VAR_46)))
   goto nomem;
 } else {
  if (!FUNC_6(&VAR_36, "AuthAlg",
            &VAR_37,
            &VAR_38,
            &VAR_39))
   goto nomem;

  if (((VAR_34.auth & VAR_5) &&
       !FUNC_10(
        &VAR_39, "open")) ||
      ((VAR_34.auth & VAR_6) &&
       !FUNC_10(
        &VAR_39, "shared")) ||
      ((VAR_34.auth & VAR_4) &&
       !FUNC_10(
        &VAR_39, "leap")) ||
      !FUNC_8(&VAR_36,
          &VAR_37,
          &VAR_38,
          &VAR_39))
   goto nomem;
 }


 if (!FUNC_5(&VAR_36, "Scan", VAR_41,
            FUNC_0(VAR_41)))
  goto nomem;


 if (!FUNC_6(&VAR_36, "Modes",
           &VAR_37,
           &VAR_38,
           &VAR_39) ||
     !FUNC_10(
      &VAR_39, "infrastructure") ||
     (VAR_35 >= 0 && (VAR_34.flags & VAR_26) &&
      !FUNC_10(
       &VAR_39, "ad-hoc")) ||
     (VAR_35 >= 0 && (VAR_34.flags & VAR_25) &&
      !FUNC_10(
       &VAR_39, "ap")) ||
     (VAR_35 >= 0 && (VAR_34.flags & VAR_28) &&
      !VAR_33->conf->p2p_disabled &&
      !FUNC_10(
       &VAR_39, "p2p")) ||





     !FUNC_8(&VAR_36,
         &VAR_37,
         &VAR_38,
         &VAR_39))
  goto nomem;


 if (VAR_35 >= 0) {
  dbus_int32_t VAR_47 = VAR_34.max_scan_ssids;

  if (!FUNC_4(&VAR_36, "MaxScanSSID",
      VAR_47))
   goto nomem;
 }

 if (!FUNC_7(&VAR_40, &VAR_36) ||
     !FUNC_1(VAR_30, &VAR_40))
  goto nomem;

 return VAR_3;

nomem:
 FUNC_3(VAR_31, VAR_0, "no memory");
 return VAR_2;
}
