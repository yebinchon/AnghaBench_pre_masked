
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct eapol_sm {int dot1xSuppEapolFramesTx; int dot1xSuppEapolRespFramesTx; int dot1xSuppEapolReqFramesRx; int dot1xSuppEapolReqIdFramesRx; scalar_t__ initial_req; TYPE_1__* ctx; int eap; int eap_proxy; scalar_t__ use_eap_proxy; } ;
struct TYPE_2__ {int eapol_send_ctx; int (* eapol_send ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (int ) ;
 struct wpabuf* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static void FUNC_7(struct eapol_sm *VAR_3)
{
 struct wpabuf *VAR_4;

 FUNC_3(VAR_1, "EAPOL: txSuppRsp");
 VAR_4 = FUNC_0(VAR_3->eap);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_2, "EAPOL: txSuppRsp - EAP response data "
      "not available");
  return;
 }


 VAR_3->ctx->eapol_send(VAR_3->ctx->eapol_send_ctx,
       VAR_0, FUNC_5(VAR_4),
       FUNC_6(VAR_4));


 FUNC_4(VAR_4);

 if (VAR_3->initial_req)
  VAR_3->dot1xSuppEapolReqIdFramesRx++;
 else
  VAR_3->dot1xSuppEapolReqFramesRx++;
 VAR_3->dot1xSuppEapolRespFramesTx++;
 VAR_3->dot1xSuppEapolFramesTx++;
}
