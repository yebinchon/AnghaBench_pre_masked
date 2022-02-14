
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ p2p_in_provisioning; TYPE_1__* global; int ap_iface; } ;
struct TYPE_2__ {scalar_t__ p2p_fail_on_wps_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2, int VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;
 if (!VAR_4->ap_iface)
  return;
 FUNC_1(VAR_0, "P2P: GO - group %sidle", VAR_3 ? "" : "not ");
 if (VAR_3) {
  if (VAR_4->global->p2p_fail_on_wps_complete &&
      VAR_4->p2p_in_provisioning) {
   FUNC_2(VAR_4);
   return;
  }
  FUNC_3(VAR_4);
 } else
  FUNC_0(VAR_1, VAR_4, ((void*)0));
}
