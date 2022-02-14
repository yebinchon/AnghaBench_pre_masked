
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_go_group_formation_completed; TYPE_1__* global; int p2pdev; int bssid; int p2p_in_provisioning; struct wpa_ssid* current_ssid; } ;
struct wpa_ssid {scalar_t__ mode; int ssid_len; int ssid; } ;
struct TYPE_2__ {scalar_t__ p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (scalar_t__,int const*) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpa_supplicant*,int,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct wpa_supplicant*,int *,int ,int ) ;

void FUNC_9(struct wpa_supplicant *VAR_6, const u8 *VAR_7,
     int VAR_8)
{
 struct wpa_ssid *VAR_9 = VAR_6->current_ssid;

 if (!VAR_6->p2p_in_provisioning) {
  FUNC_6(VAR_1, "P2P: Ignore WPS success event - P2P "
      "provisioning not in progress");
  return;
 }

 if (VAR_9 && VAR_9->mode == VAR_4) {
  u8 VAR_10[VAR_0];
  FUNC_2(VAR_10, VAR_6->bssid, VAR_0);
  FUNC_8(VAR_6, VAR_10, VAR_9->ssid,
       VAR_9->ssid_len);

  FUNC_3(VAR_6->global->p2p, VAR_10);
 }

 FUNC_0(VAR_5, VAR_6->p2pdev,
        ((void*)0));
 VAR_6->p2p_go_group_formation_completed = 1;
 if (VAR_9 && VAR_9->mode == VAR_4) {






  FUNC_5(VAR_6, VAR_1,
   "P2P: Re-start group formation timeout (%d seconds) as client for initial connection",
   VAR_2);
  FUNC_1(VAR_2, 0,
           VAR_5,
           VAR_6->p2pdev, ((void*)0));

  VAR_6->p2p_go_group_formation_completed = 0;
 } else if (VAR_9) {





  FUNC_5(VAR_6, VAR_1,
   "P2P: Re-start group formation timeout (%d seconds) as GO for initial connection",
   VAR_3);
  FUNC_1(VAR_3, 0,
           VAR_5,
           VAR_6->p2pdev, ((void*)0));



  VAR_6->p2p_go_group_formation_completed = 0;
 }
 if (VAR_6->global->p2p)
  FUNC_4(VAR_6->global->p2p, VAR_7);
 FUNC_7(VAR_6, 1, 0);
}
