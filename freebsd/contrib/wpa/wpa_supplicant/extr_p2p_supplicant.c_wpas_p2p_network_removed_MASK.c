
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int p2pdev; scalar_t__ p2p_in_provisioning; } ;
struct wpa_ssid {scalar_t__ p2p_group; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

void FUNC_3(struct wpa_supplicant *VAR_2,
         struct wpa_ssid *VAR_3)
{
 if (VAR_2->p2p_in_provisioning && VAR_3->p2p_group &&
     FUNC_0(VAR_1,
     VAR_2->p2pdev, ((void*)0)) > 0) {
  FUNC_2(VAR_0, "P2P: Canceled group formation due to "
      "P2P group network getting removed");
  FUNC_1(0, 0, VAR_1,
           VAR_2->p2pdev, ((void*)0));
 }
}
