
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_go_group_formation_completed; TYPE_2__* global; scalar_t__ p2p_in_invitation; scalar_t__ p2p_in_provisioning; int group_formation_reported; int p2pdev; } ;
struct TYPE_3__ {scalar_t__ sec; } ;
struct TYPE_4__ {TYPE_1__ p2p_go_wait_client; int * p2p_group_formation; scalar_t__ p2p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (scalar_t__,int const*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*,int,int ) ;
 int FUNC_5 (struct wpa_supplicant*,int const*) ;
 int VAR_1 ;

void FUNC_6(struct wpa_supplicant *VAR_2,
           const u8 *VAR_3)
{
 if (FUNC_0(VAR_1,
     VAR_2->p2pdev, ((void*)0)) > 0) {
  FUNC_3(VAR_0, "P2P: Canceled P2P group formation timeout on data connection");

  if (!VAR_2->p2p_go_group_formation_completed &&
      !VAR_2->group_formation_reported) {







   if (VAR_2->global->p2p)
    FUNC_1(VAR_2->global->p2p, VAR_3);
   FUNC_4(VAR_2, 1, 0);
  }
 }
 if (!VAR_2->p2p_go_group_formation_completed) {
  FUNC_2(VAR_2, VAR_0, "P2P: Marking group formation completed on GO on first data connection");
  VAR_2->p2p_go_group_formation_completed = 1;
  VAR_2->global->p2p_group_formation = ((void*)0);
  VAR_2->p2p_in_provisioning = 0;
  VAR_2->p2p_in_invitation = 0;
 }
 VAR_2->global->p2p_go_wait_client.sec = 0;
 if (VAR_3 == ((void*)0))
  return;
 FUNC_5(VAR_2, VAR_3);
}
