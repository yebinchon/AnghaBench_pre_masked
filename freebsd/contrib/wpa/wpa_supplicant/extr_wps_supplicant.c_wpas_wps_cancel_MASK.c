
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; scalar_t__ after_wps; scalar_t__ ap_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int VAR_5 ;
 int FUNC_7 (struct wpa_supplicant*) ;

int FUNC_8(struct wpa_supplicant *VAR_6)
{







 if (VAR_6->wpa_state == VAR_4 ||
     VAR_6->wpa_state == VAR_3) {
  FUNC_1(VAR_0, "WPS: Cancel operation - cancel scan");
  FUNC_3(VAR_6);
  FUNC_5(VAR_6);
 } else if (VAR_6->wpa_state >= VAR_2) {
  FUNC_1(VAR_0, "WPS: Cancel operation - "
      "deauthenticate");
  VAR_6->own_disconnect_req = 1;
  FUNC_4(VAR_6,
           VAR_1);
  FUNC_5(VAR_6);
 } else {
  FUNC_7(VAR_6);
  FUNC_6(VAR_6);
  if (FUNC_0(VAR_5, VAR_6, ((void*)0)) >
      0)
   FUNC_5(VAR_6);
 }

 VAR_6->after_wps = 0;

 return 0;
}
