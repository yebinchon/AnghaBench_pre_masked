
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {scalar_t__ p2p; struct wpa_supplicant* p2p_init_wpa_s; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 if (VAR_1 == VAR_1->global->p2p_init_wpa_s && VAR_1->global->p2p) {
  FUNC_0(VAR_1, VAR_0, "P2P: Disable P2P since removing "
   "the management interface is being removed");
  FUNC_1(VAR_1->global);
 }
}
