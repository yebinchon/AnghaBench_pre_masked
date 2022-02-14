
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; scalar_t__ key_mgmt; int reassociate; int * ctrl_iface; struct wpa_config* conf; int wpa; int eapol; scalar_t__ current_ssid; int * confanother; int * confname; } ;
struct wpa_config {unsigned int changed_parameters; int ap_scan; int fast_reauth; scalar_t__ ctrl_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wpa_config*) ;
 struct wpa_config* FUNC_6 (int *,struct wpa_config*) ;
 int FUNC_7 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct wpa_supplicant*,int ,char*,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct wpa_supplicant*) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (struct wpa_supplicant*) ;
 int FUNC_16 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*) ;
 int FUNC_18 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_19 (struct wpa_supplicant*) ;
 int FUNC_20 (struct wpa_supplicant*) ;

int FUNC_21(struct wpa_supplicant *VAR_7)
{
 struct wpa_config *VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_7->confname == ((void*)0))
  return -1;
 VAR_8 = FUNC_6(VAR_7->confname, ((void*)0));
 if (VAR_8 == ((void*)0)) {
  FUNC_9(VAR_7, VAR_2, "Failed to parse the configuration "
   "file '%s' - exiting", VAR_7->confname);
  return -1;
 }
 if (VAR_7->confanother &&
     !FUNC_6(VAR_7->confanother, VAR_8)) {
  FUNC_9(VAR_7, VAR_2,
   "Failed to parse the configuration file '%s' - exiting",
   VAR_7->confanother);
  return -1;
 }

 VAR_8->changed_parameters = (unsigned int) -1;

 VAR_9 = !!VAR_8->ctrl_interface != !!VAR_7->conf->ctrl_interface
  || (VAR_8->ctrl_interface && VAR_7->conf->ctrl_interface &&
      FUNC_3(VAR_8->ctrl_interface,
         VAR_7->conf->ctrl_interface) != 0);

 if (VAR_9 && VAR_7->ctrl_iface) {
  FUNC_14(VAR_7->ctrl_iface);
  VAR_7->ctrl_iface = ((void*)0);
 }

 FUNC_0(VAR_7->eapol);
 if (VAR_7->current_ssid) {
  if (VAR_7->wpa_state >= VAR_4)
   VAR_7->own_disconnect_req = 1;
  FUNC_16(VAR_7,
           VAR_3);
 }





 if (FUNC_8(VAR_7->key_mgmt) ||
     VAR_7->key_mgmt == VAR_6 ||
     VAR_7->key_mgmt == VAR_5) {




  FUNC_2(VAR_7->eapol, VAR_0);
 }
 FUNC_1(VAR_7->eapol, ((void*)0), ((void*)0));
 FUNC_11(VAR_7->wpa, ((void*)0));
 FUNC_10(VAR_7->wpa, ((void*)0));
 FUNC_12(VAR_7->wpa, VAR_7->conf->fast_reauth);
 FUNC_4(VAR_7->wpa);

 VAR_10 = VAR_7->conf->ap_scan;
 FUNC_5(VAR_7->conf);
 VAR_7->conf = VAR_8;
 if (VAR_10 != VAR_7->conf->ap_scan)
  FUNC_20(VAR_7);

 if (VAR_9)
  VAR_7->ctrl_iface = FUNC_15(VAR_7);

 FUNC_19(VAR_7);

 FUNC_13(VAR_7);
 if (FUNC_17(VAR_7)) {
  VAR_7->reassociate = 1;
  FUNC_18(VAR_7, 0, 0);
 }
 FUNC_7(VAR_7, VAR_1, "Reconfiguration completed");
 return 0;
}
