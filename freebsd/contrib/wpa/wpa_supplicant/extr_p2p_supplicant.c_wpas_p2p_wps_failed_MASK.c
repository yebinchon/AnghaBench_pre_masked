
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_event_fail {int dummy; } ;
struct wpa_supplicant {int p2pdev; TYPE_1__* global; TYPE_2__* go_params; int p2p_in_provisioning; } ;
struct TYPE_4__ {int peer_device_addr; } ;
struct TYPE_3__ {int p2p_fail_on_wps_complete; struct wpa_supplicant* p2p_group_formation; int p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_supplicant*,struct wps_event_fail*) ;
 int VAR_1 ;

void FUNC_4(struct wpa_supplicant *VAR_2,
    struct wps_event_fail *VAR_3)
{
 if (!VAR_2->p2p_in_provisioning) {
  FUNC_2(VAR_0, "P2P: Ignore WPS fail event - P2P "
      "provisioning not in progress");
  return;
 }

 if (VAR_2->go_params) {
  FUNC_1(
   VAR_2->global->p2p,
   VAR_2->go_params->peer_device_addr);
 }

 FUNC_3(VAR_2, VAR_3);

 if (VAR_2 == VAR_2->global->p2p_group_formation) {





  FUNC_2(VAR_0, "P2P: WPS step failed during group formation - reject connection from timeout");
  VAR_2->global->p2p_fail_on_wps_complete = 1;
  FUNC_0(0, 50000,
          VAR_1,
          VAR_2->p2pdev, ((void*)0));
 }
}
