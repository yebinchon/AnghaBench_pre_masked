
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* ifmsh; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {int no_auto_peer; } ;
struct sta_info {scalar_t__ plink_state; TYPE_2__* sae; } ;
struct mesh_conf {scalar_t__ security; } ;
struct hostapd_data {int mesh_required_peer; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {struct mesh_conf* mconf; struct hostapd_data** bss; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (struct wpa_supplicant*,struct sta_info*,scalar_t__) ;
 int FUNC_3 (struct wpa_supplicant*,struct sta_info*) ;
 int FUNC_4 (int ,int const*,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;

int FUNC_6(struct wpa_supplicant *VAR_7, const u8 *VAR_8,
     int VAR_9)
{
 struct wpa_ssid *VAR_10 = VAR_7->current_ssid;
 struct hostapd_data *VAR_11;
 struct sta_info *VAR_12;
 struct mesh_conf *VAR_13;

 if (!VAR_7->ifmsh) {
  FUNC_5(VAR_7, VAR_2, "Mesh is not prepared yet");
  return -1;
 }

 if (!VAR_10 || !VAR_10->no_auto_peer) {
  FUNC_5(VAR_7, VAR_2,
   "This command is available only with no_auto_peer mesh network");
  return -1;
 }

 VAR_11 = VAR_7->ifmsh->bss[0];
 VAR_13 = VAR_7->ifmsh->mconf;

 VAR_12 = FUNC_0(VAR_11, VAR_8);
 if (!VAR_12) {
  FUNC_5(VAR_7, VAR_2, "No such mesh peer");
  return -1;
 }

 if ((VAR_4 <= VAR_12->plink_state &&
     VAR_12->plink_state <= VAR_3) ||
     (VAR_12->sae && VAR_12->sae->state > VAR_5)) {
  FUNC_5(VAR_7, VAR_2,
   "Specified peer is connecting/connected");
  return -1;
 }

 if (VAR_13->security == VAR_1) {
  FUNC_2(VAR_7, VAR_12, VAR_4);
 } else {
  FUNC_3(VAR_7, VAR_12);
  FUNC_4(VAR_11->mesh_required_peer, VAR_8, VAR_0);
  FUNC_1(VAR_9 == -1 ? 10 : VAR_9, 0,
           VAR_6, VAR_7, ((void*)0));
 }

 return 0;
}
