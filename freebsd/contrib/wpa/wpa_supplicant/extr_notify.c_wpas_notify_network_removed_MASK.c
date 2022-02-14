
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2p_mgmt; TYPE_1__* global; scalar_t__ wpa; struct wpa_ssid* next_ssid; } ;
struct wpa_ssid {int id; int p2p_group; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_group_formation; } ;


 scalar_t__ FUNC_0 (struct wpa_ssid*) ;
 int FUNC_1 (scalar_t__,struct wpa_ssid*) ;
 int FUNC_2 (struct wpa_supplicant*,int ) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_ssid*) ;
 int FUNC_4 (struct wpa_supplicant*,struct wpa_ssid*) ;

void FUNC_5(struct wpa_supplicant *VAR_0,
     struct wpa_ssid *VAR_1)
{
 if (VAR_0->next_ssid == VAR_1)
  VAR_0->next_ssid = ((void*)0);
 if (VAR_0->wpa)
  FUNC_1(VAR_0->wpa, VAR_1);
 if (!VAR_1->p2p_group && VAR_0->global->p2p_group_formation != VAR_0 &&
     !VAR_0->p2p_mgmt)
  FUNC_2(VAR_0, VAR_1->id);
 if (FUNC_0(VAR_1))
  FUNC_3(VAR_0, VAR_1);

 FUNC_4(VAR_0, VAR_1);
}
