
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2p_in_provisioning; TYPE_1__* global; } ;
struct TYPE_2__ {int p2p_fail_on_wps_complete; } ;


 int FUNC_0 (struct wpa_supplicant*) ;

int FUNC_1(struct wpa_supplicant *VAR_0)
{
 if (!VAR_0->global->p2p_fail_on_wps_complete ||
     !VAR_0->p2p_in_provisioning)
  return 0;

 FUNC_0(VAR_0);

 return 1;
}
