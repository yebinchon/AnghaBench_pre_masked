
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_registrar {TYPE_1__* wps; } ;
struct wps_credential {int encr_type; int auth_type; } ;
struct TYPE_2__ {int (* cred_cb ) (int ,struct wps_credential*) ;int cb_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct wps_credential*) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct wps_registrar *VAR_8,
       struct wps_credential *VAR_9)
{
 FUNC_1(VAR_0, "WPS: encr_type=0x%x", VAR_9->encr_type);
 if (!(VAR_9->encr_type & (VAR_5 | VAR_6 |
     VAR_4))) {
  if (VAR_9->encr_type & VAR_7) {
   FUNC_1(VAR_1, "WPS: Reject new AP settings "
       "due to WEP configuration");
   return -1;
  }

  FUNC_1(VAR_1, "WPS: Reject new AP settings due to "
      "invalid encr_type 0x%x", VAR_9->encr_type);
  return -1;
 }

 if ((VAR_9->encr_type & (VAR_6 | VAR_4)) ==
     VAR_6) {
  FUNC_1(VAR_0, "WPS: Upgrade encr_type TKIP -> "
      "TKIP+AES");
  VAR_9->encr_type |= VAR_4;
 }

 if ((VAR_9->auth_type & (VAR_3 | VAR_2)) ==
     VAR_3) {
  FUNC_1(VAR_0, "WPS: Upgrade auth_type WPAPSK -> "
      "WPAPSK+WPA2PSK");
  VAR_9->auth_type |= VAR_2;
 }

 if (VAR_8->wps->cred_cb)
  return VAR_8->wps->cred_cb(VAR_8->wps->cb_ctx, VAR_9);

 return -1;
}
