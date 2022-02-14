
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2p_go_he; int p2p_go_max_oper_chwidth; int p2p_go_vht; int p2p_go_ht40; int p2p_pd_before_go_neg; int p2p_persistent_id; int p2p_go_vht_center_freq2; int p2p_connect_freq; int p2p_go_intent; int p2p_persistent_group; int p2p_wps_method; int p2p_pin; int pending_join_dev_addr; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_init_wpa_s; struct wpa_supplicant* p2p_group_formation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static int FUNC_4(struct wpa_supplicant *VAR_2,
           int VAR_3)
{
 struct wpa_supplicant *VAR_4 = VAR_2;
 int VAR_5 = 0;

 if (VAR_2->global->p2p_group_formation)
  VAR_4 = VAR_2->global->p2p_group_formation;
 VAR_2 = VAR_2->global->p2p_init_wpa_s;
 FUNC_0(VAR_2);
 if (VAR_3)
  VAR_5 = FUNC_3(VAR_4, VAR_1);
 FUNC_1(VAR_2, VAR_0, "P2P: Fall back to GO Negotiation");
 FUNC_2(VAR_2, VAR_2->pending_join_dev_addr, VAR_2->p2p_pin,
    VAR_2->p2p_wps_method, VAR_2->p2p_persistent_group, 0,
    0, 0, VAR_2->p2p_go_intent, VAR_2->p2p_connect_freq,
    VAR_2->p2p_go_vht_center_freq2,
    VAR_2->p2p_persistent_id,
    VAR_2->p2p_pd_before_go_neg,
    VAR_2->p2p_go_ht40,
    VAR_2->p2p_go_vht,
    VAR_2->p2p_go_max_oper_chwidth,
    VAR_2->p2p_go_he, ((void*)0), 0);
 return VAR_5;
}
