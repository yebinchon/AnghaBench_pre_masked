
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; scalar_t__ p2p_mgmt; } ;
struct wpa_ssid {int p2p_group; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_group_formation; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_ssid*) ;

void FUNC_1(struct wpa_supplicant *VAR_0,
          struct wpa_ssid *VAR_1)
{
 if (VAR_0->p2p_mgmt)
  return;







 if (!VAR_1->p2p_group && VAR_0->global->p2p_group_formation != VAR_0)
  FUNC_0(VAR_0, VAR_1);
}
