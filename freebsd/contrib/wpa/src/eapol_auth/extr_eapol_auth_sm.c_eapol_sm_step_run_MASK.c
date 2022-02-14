
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct eapol_state_machine {unsigned int auth_pae_state; unsigned int be_auth_state; unsigned int reauth_timer_state; unsigned int auth_key_tx_state; unsigned int key_rx_state; unsigned int ctrl_dir_state; int sta; struct eapol_authenticator* eapol; TYPE_1__* eap_if; scalar_t__ eap; scalar_t__ initializing; int addr; } ;
struct TYPE_6__ {int ctx; } ;
struct TYPE_5__ {int (* eapol_event ) (int ,int ,int ) ;int (* aaa_send ) (int ,int ,int ,int ) ;} ;
struct eapol_authenticator {TYPE_3__ conf; TYPE_2__ cb; } ;
struct TYPE_4__ {int * aaaEapRespData; scalar_t__ aaaEapResp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct eapol_state_machine*) ;
 scalar_t__ FUNC_3 (struct eapol_authenticator*,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct eapol_state_machine *VAR_10)
{
 struct eapol_authenticator *VAR_11 = VAR_10->eapol;
 u8 VAR_12[VAR_5];
 unsigned int VAR_13, VAR_14, VAR_15,
  VAR_16, VAR_17, VAR_18;
 int VAR_19 = 100;

 FUNC_4(VAR_12, VAR_10->addr, VAR_5);







restart:
 VAR_13 = VAR_10->auth_pae_state;
 VAR_14 = VAR_10->be_auth_state;
 VAR_15 = VAR_10->reauth_timer_state;
 VAR_16 = VAR_10->auth_key_tx_state;
 VAR_17 = VAR_10->key_rx_state;
 VAR_18 = VAR_10->ctrl_dir_state;

 FUNC_0(VAR_1);
 if (VAR_10->initializing || FUNC_3(VAR_11, VAR_12))
  FUNC_0(VAR_2);
 if (VAR_10->initializing || FUNC_3(VAR_11, VAR_12))
  FUNC_0(VAR_9);
 if (VAR_10->initializing || FUNC_3(VAR_11, VAR_12))
  FUNC_0(VAR_0);
 if (VAR_10->initializing || FUNC_3(VAR_11, VAR_12))
  FUNC_0(VAR_7);
 if (VAR_10->initializing || FUNC_3(VAR_11, VAR_12))
  FUNC_0(VAR_3);

 if (VAR_13 != VAR_10->auth_pae_state ||
     VAR_14 != VAR_10->be_auth_state ||
     VAR_15 != VAR_10->reauth_timer_state ||
     VAR_16 != VAR_10->auth_key_tx_state ||
     VAR_17 != VAR_10->key_rx_state ||
     VAR_18 != VAR_10->ctrl_dir_state) {
  if (--VAR_19 > 0)
   goto restart;

  FUNC_2(VAR_10);
  return;
 }

 if (FUNC_3(VAR_11, VAR_12) && VAR_10->eap) {
  if (FUNC_1(VAR_10->eap)) {
   if (--VAR_19 > 0)
    goto restart;

   FUNC_2(VAR_10);
   return;
  }


  if (VAR_10->eap_if->aaaEapResp) {
   VAR_10->eap_if->aaaEapResp = VAR_6;
   if (VAR_10->eap_if->aaaEapRespData == ((void*)0)) {
    FUNC_7(VAR_8, "EAPOL: aaaEapResp set, "
        "but no aaaEapRespData available");
    return;
   }
   VAR_10->eapol->cb.aaa_send(
    VAR_10->eapol->conf.ctx, VAR_10->sta,
    FUNC_8(VAR_10->eap_if->aaaEapRespData),
    FUNC_9(VAR_10->eap_if->aaaEapRespData));
  }
 }

 if (FUNC_3(VAR_11, VAR_12))
  VAR_10->eapol->cb.eapol_event(VAR_10->eapol->conf.ctx, VAR_10->sta,
       VAR_4);
}
