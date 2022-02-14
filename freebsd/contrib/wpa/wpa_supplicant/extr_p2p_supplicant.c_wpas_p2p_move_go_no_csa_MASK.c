
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int reassociate; scalar_t__ disconnected; struct wpa_ssid* connect_without_scan; TYPE_1__* global; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ frequency; } ;
struct p2p_go_neg_results {scalar_t__ freq; } ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*,...) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_6 (struct wpa_supplicant*,int ) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,struct p2p_go_neg_results*,int ,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_8(struct wpa_supplicant *VAR_4)
{
 struct p2p_go_neg_results VAR_5;
 struct wpa_ssid *VAR_6 = VAR_4->current_ssid;

 FUNC_2(VAR_4, VAR_1, VAR_2);

 FUNC_1(VAR_4, VAR_0, "P2P: Move GO from freq=%d MHz",
  VAR_6->frequency);




 FUNC_4(VAR_4);


 if (FUNC_7(VAR_4, &VAR_5, 0, 0, 0, 0, 0, 0, ((void*)0))) {
  FUNC_1(VAR_4, VAR_0, "P2P: Failed to reselect freq");
  FUNC_6(VAR_4,
          VAR_3);
  return;
 }
 FUNC_1(VAR_4, VAR_0, "P2P: New freq selected for the GO (%u MHz)",
  VAR_5.freq);

 if (VAR_5.freq &&
     !FUNC_0(VAR_4->global->p2p, VAR_5.freq)) {
  FUNC_3(VAR_0,
      "P2P: Selected freq (%u MHz) is not valid for P2P",
      VAR_5.freq);
  FUNC_6(VAR_4,
          VAR_3);
  return;
 }


 VAR_6->frequency = VAR_5.freq;
 VAR_4->connect_without_scan = VAR_6;
 VAR_4->reassociate = 1;
 VAR_4->disconnected = 0;
 FUNC_5(VAR_4, 0, 0);
}
