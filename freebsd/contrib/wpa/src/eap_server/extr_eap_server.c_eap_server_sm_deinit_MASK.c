
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int aaaEapKeyDataLen; int aaaEapKeyData; int aaaEapRespData; int aaaEapReqData; int eapRespData; struct eap_sm* eapSessionId; int eapKeyDataLen; int eapKeyData; int eapReqData; } ;
struct eap_sm {int assoc_p2p_ie; int assoc_wps_ie; int user; TYPE_2__ eap_if; struct eap_sm* eap_fast_a_id_info; struct eap_sm* eap_fast_a_id; struct eap_sm* pac_opaque_encr_key; struct eap_sm* serial_num; struct eap_sm* identity; int lastReqData; scalar_t__ eap_method_priv; TYPE_1__* m; } ;
struct TYPE_3__ {int (* reset ) (struct eap_sm*,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*,scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct eap_sm *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_4(VAR_0, "EAP: Server state machine removed");
 if (VAR_1->m && VAR_1->eap_method_priv)
  VAR_1->m->reset(VAR_1, VAR_1->eap_method_priv);
 FUNC_5(VAR_1->eap_if.eapReqData);
 FUNC_0(VAR_1->eap_if.eapKeyData, VAR_1->eap_if.eapKeyDataLen);
 FUNC_2(VAR_1->eap_if.eapSessionId);
 FUNC_5(VAR_1->lastReqData);
 FUNC_5(VAR_1->eap_if.eapRespData);
 FUNC_2(VAR_1->identity);
 FUNC_2(VAR_1->serial_num);
 FUNC_2(VAR_1->pac_opaque_encr_key);
 FUNC_2(VAR_1->eap_fast_a_id);
 FUNC_2(VAR_1->eap_fast_a_id_info);
 FUNC_5(VAR_1->eap_if.aaaEapReqData);
 FUNC_5(VAR_1->eap_if.aaaEapRespData);
 FUNC_0(VAR_1->eap_if.aaaEapKeyData, VAR_1->eap_if.aaaEapKeyDataLen);
 FUNC_1(VAR_1->user);
 FUNC_5(VAR_1->assoc_wps_ie);
 FUNC_5(VAR_1->assoc_p2p_ie);
 FUNC_2(VAR_1);
}
