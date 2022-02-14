
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ p2p_long_listen; scalar_t__ max_remain_on_chan; TYPE_1__* global; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpa_supplicant*,scalar_t__) ;
 int FUNC_5 (struct wpa_supplicant*) ;

void FUNC_6(struct wpa_supplicant *VAR_1,
       unsigned int VAR_2)
{
 FUNC_3(VAR_0, "P2P: Cancel remain-on-channel callback "
     "(p2p_long_listen=%d ms pending_action_tx=%p)",
     VAR_1->p2p_long_listen, FUNC_0(VAR_1));
 FUNC_5(VAR_1);
 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return;
 if (VAR_1->p2p_long_listen > 0)
  VAR_1->p2p_long_listen -= VAR_1->max_remain_on_chan;
 if (FUNC_1(VAR_1->global->p2p, VAR_2) > 0)
  return;
 if (FUNC_0(VAR_1))
  return;
 if (VAR_1->p2p_long_listen > 0) {
  FUNC_3(VAR_0, "P2P: Continuing long Listen state");
  FUNC_4(VAR_1, VAR_1->p2p_long_listen);
 } else {




  FUNC_2(VAR_1->global->p2p);
 }
}
