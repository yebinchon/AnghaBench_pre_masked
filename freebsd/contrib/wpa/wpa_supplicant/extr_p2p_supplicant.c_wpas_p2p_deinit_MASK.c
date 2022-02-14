
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ p2p_group_common_freqs_num; TYPE_3__* p2p_group_common_freqs; int * p2p_oob_dev_pw; TYPE_2__* p2p_send_action_work; scalar_t__ p2p_long_listen; TYPE_3__* go_params; TYPE_1__* global; scalar_t__ drv_priv; scalar_t__ driver; } ;
struct TYPE_6__ {int peer_device_addr; } ;
struct TYPE_5__ {TYPE_3__* ctx; } ;
struct TYPE_4__ {int p2p; } ;


 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct wpa_supplicant*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct wpa_supplicant*) ;
 int VAR_6 ;

void FUNC_8(struct wpa_supplicant *VAR_7)
{
 if (VAR_7->driver && VAR_7->drv_priv)
  FUNC_4(VAR_7, 0);

 if (VAR_7->go_params) {

  FUNC_2(
   VAR_7->global->p2p,
   VAR_7->go_params->peer_device_addr);
 }

 FUNC_1(VAR_7->go_params);
 VAR_7->go_params = ((void*)0);
 FUNC_0(VAR_5, VAR_7, ((void*)0));
 FUNC_0(VAR_0, VAR_7, ((void*)0));
 FUNC_0(VAR_3, VAR_7, ((void*)0));
 VAR_7->p2p_long_listen = 0;
 FUNC_0(VAR_4, VAR_7, ((void*)0));
 FUNC_0(VAR_2, VAR_7, ((void*)0));
 FUNC_7(VAR_7);
 FUNC_0(VAR_1, VAR_7, ((void*)0));
 FUNC_6(VAR_7);
 if (VAR_7->p2p_send_action_work) {
  FUNC_1(VAR_7->p2p_send_action_work->ctx);
  FUNC_3(VAR_7->p2p_send_action_work);
  VAR_7->p2p_send_action_work = ((void*)0);
 }
 FUNC_0(VAR_6, VAR_7, ((void*)0));

 FUNC_5(VAR_7->p2p_oob_dev_pw);
 VAR_7->p2p_oob_dev_pw = ((void*)0);

 FUNC_1(VAR_7->p2p_group_common_freqs);
 VAR_7->p2p_group_common_freqs = ((void*)0);
 VAR_7->p2p_group_common_freqs_num = 0;



}
