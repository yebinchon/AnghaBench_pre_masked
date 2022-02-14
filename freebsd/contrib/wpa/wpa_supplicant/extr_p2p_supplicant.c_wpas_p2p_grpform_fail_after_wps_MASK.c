
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; int p2pdev; } ;
struct TYPE_2__ {scalar_t__ p2p_fail_on_wps_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_2)
{
 FUNC_2(VAR_0, "P2P: Reject group formation due to WPS provisioning failure");
 FUNC_0(VAR_1,
        VAR_2->p2pdev, ((void*)0));
 FUNC_1(0, 0, VAR_1,
          VAR_2->p2pdev, ((void*)0));
 VAR_2->global->p2p_fail_on_wps_complete = 0;
}
