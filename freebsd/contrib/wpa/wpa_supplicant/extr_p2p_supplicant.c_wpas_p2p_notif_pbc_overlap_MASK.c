
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_group_interface; struct wpa_supplicant* p2pdev; int p2p_in_provisioning; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wpa_supplicant*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;

int FUNC_3(struct wpa_supplicant *VAR_4)
{
 if (VAR_4->p2p_group_interface != VAR_2 &&
     !VAR_4->p2p_in_provisioning)
  return 0;

 FUNC_1(VAR_0, "P2P: Terminate connection due to WPS PBC "
     "session overlap");
 if (VAR_4 != VAR_4->p2pdev)
  FUNC_0(VAR_4->p2pdev, VAR_1, VAR_3);
 FUNC_2(VAR_4, 0);
 return 1;
}
