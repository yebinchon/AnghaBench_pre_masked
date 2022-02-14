
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_sm_ctx {int deauthenticate; int cancel_auth_timeout; int mlme_setprotection; int get_network_ctx; int set_key; int alloc_eapol; int get_beacon_ie; int ether_send; int get_state; int set_state; int msg_ctx; struct ibss_rsn_peer* ctx; } ;
struct ibss_rsn_peer {int supp_ie_len; int addr; int * supp; int supp_ie; TYPE_1__* ibss_rsn; } ;
struct TYPE_2__ {int wpa_s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct wpa_sm_ctx*) ;
 struct wpa_sm_ctx* FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (struct wpa_sm_ctx*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int const*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_9(struct ibss_rsn_peer *VAR_20, const u8 *VAR_21,
         const u8 *VAR_22)
{
 struct wpa_sm_ctx *VAR_23 = FUNC_1(sizeof(*VAR_23));
 if (VAR_23 == ((void*)0))
  return -1;

 VAR_23->ctx = VAR_20;
 VAR_23->msg_ctx = VAR_20->ibss_rsn->wpa_s;
 VAR_23->set_state = VAR_19;
 VAR_23->get_state = VAR_16;
 VAR_23->ether_send = VAR_13;
 VAR_23->get_beacon_ie = VAR_14;
 VAR_23->alloc_eapol = VAR_10;
 VAR_23->set_key = VAR_18;
 VAR_23->get_network_ctx = VAR_15;
 VAR_23->mlme_setprotection = VAR_17;
 VAR_23->cancel_auth_timeout = VAR_11;
 VAR_23->deauthenticate = VAR_12;
 VAR_20->supp = FUNC_3(VAR_23);
 if (VAR_20->supp == ((void*)0)) {
  FUNC_2(VAR_0, "SUPP: wpa_sm_init() failed");
  FUNC_0(VAR_23);
  return -1;
 }

 FUNC_6(VAR_20->supp, VAR_21);
 FUNC_7(VAR_20->supp, VAR_8, 1);
 FUNC_7(VAR_20->supp, VAR_7, VAR_9);
 FUNC_7(VAR_20->supp, VAR_6, VAR_2);
 FUNC_7(VAR_20->supp, VAR_4, VAR_2);
 FUNC_7(VAR_20->supp, VAR_5, VAR_3);
 FUNC_8(VAR_20->supp, VAR_22, VAR_1, ((void*)0), ((void*)0));

 VAR_20->supp_ie_len = sizeof(VAR_20->supp_ie);
 if (FUNC_5(VAR_20->supp, VAR_20->supp_ie,
         &VAR_20->supp_ie_len) < 0) {
  FUNC_2(VAR_0, "SUPP: wpa_sm_set_assoc_wpa_ie_default()"
      " failed");
  return -1;
 }

 FUNC_4(VAR_20->supp, VAR_20->addr);

 return 0;
}
