
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ wpa_state; int own_disconnect_req; int scan_interval; int network_select; int auto_network_select; scalar_t__ after_wps; scalar_t__ owe_transition_search; TYPE_1__* conf; scalar_t__ p2p_in_invitation; scalar_t__ show_group_started; scalar_t__ p2p_in_provisioning; struct wpa_ssid* current_ssid; scalar_t__ ifmsh; scalar_t__ p2p_mgmt; } ;
struct wpa_ssid {int dummy; } ;
struct wpa_bss {int dummy; } ;
struct TYPE_2__ {scalar_t__ cred; scalar_t__ interworking; scalar_t__ auto_interworking; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_6 (struct wpa_supplicant*,int *,struct wpa_ssid*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,struct wpa_bss*,struct wpa_ssid*) ;
 int FUNC_8 (struct wpa_supplicant*,int ) ;
 int FUNC_9 (struct wpa_supplicant*,struct wpa_bss*,struct wpa_ssid*) ;
 struct wpa_bss* FUNC_10 (struct wpa_supplicant*,struct wpa_ssid**) ;
 struct wpa_ssid* FUNC_11 (struct wpa_supplicant*) ;
 int FUNC_12 (struct wpa_supplicant*,int,int) ;
 scalar_t__ FUNC_13 (struct wpa_supplicant*) ;
 int FUNC_14 (struct wpa_supplicant*) ;
 int VAR_5 ;
 int FUNC_15 (struct wpa_supplicant*) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_17 (struct wpa_supplicant*) ;

__attribute__((used)) static int FUNC_18(struct wpa_supplicant *VAR_6,
           int VAR_7, int VAR_8)
{
 struct wpa_bss *VAR_9;
 struct wpa_ssid *VAR_10 = ((void*)0);
 int VAR_11 = FUNC_16(VAR_6);

 if (VAR_11 > 0) {
  FUNC_3(VAR_6, VAR_0,
   "Postpone network selection by %d seconds since all networks are disabled",
   VAR_11);
  FUNC_0(VAR_5, VAR_6, ((void*)0));
  FUNC_1(VAR_11, 0,
           VAR_5, VAR_6, ((void*)0));
  return 0;
 }

 if (VAR_6->p2p_mgmt)
  return 0;

 VAR_6->owe_transition_search = 0;
 VAR_9 = FUNC_10(VAR_6, &VAR_10);
 if (VAR_9) {
  int VAR_12;
  VAR_12 = !FUNC_9(VAR_6, VAR_9, VAR_10);
  if (VAR_12) {
   if (VAR_7)
    FUNC_14(VAR_6);
   return 0;
  }

  if (VAR_10 != VAR_6->current_ssid &&
      VAR_6->wpa_state >= VAR_3) {
   VAR_6->own_disconnect_req = 1;
   FUNC_8(
    VAR_6, VAR_2);
  }

  if (FUNC_7(VAR_6, VAR_9, VAR_10) < 0) {
   FUNC_3(VAR_6, VAR_0, "Connect failed");
   return -1;
  }
  if (VAR_7)
   FUNC_14(VAR_6);





  return 1;
 } else {
  FUNC_3(VAR_6, VAR_0, "No suitable network found");
  VAR_10 = FUNC_11(VAR_6);
  if (VAR_10) {
   FUNC_3(VAR_6, VAR_0, "Setup a new network");
   FUNC_6(VAR_6, ((void*)0), VAR_10);
   if (VAR_7)
    FUNC_14(VAR_6);
  } else if (VAR_8) {





   int VAR_13 = VAR_6->scan_interval;
   int VAR_14 = 0;
   if (FUNC_13(VAR_6))
    FUNC_12(VAR_6, VAR_13,
           VAR_14);

   FUNC_5(VAR_6, VAR_1,
         VAR_4);
  }
 }
 return 0;
}
