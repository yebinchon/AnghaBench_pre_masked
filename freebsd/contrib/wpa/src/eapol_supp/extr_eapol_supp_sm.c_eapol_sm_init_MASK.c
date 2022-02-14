
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int heldPeriod; int startPeriod; int maxStart; int authPeriod; int timer_tick_enabled; void* initialize; void* force_authorized_update; int * eap_proxy; struct eapol_ctx* ctx; void* use_eap_proxy; int * eap; int portControl; } ;
struct eapol_ctx {int msg_ctx; int cert_in_cb; int wps; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; } ;
struct eap_config {int cert_in_cb; int wps; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; } ;
typedef int conf ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int * FUNC_0 (struct eapol_sm*,int *,int ,struct eap_config*) ;
 int * FUNC_1 (struct eapol_sm*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct eapol_sm*) ;
 scalar_t__ FUNC_3 (int,int ,int ,int *,struct eapol_sm*) ;
 int FUNC_4 (struct eapol_sm*) ;
 int FUNC_5 (struct eap_config*,int ,int) ;
 struct eapol_sm* FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;

struct eapol_sm *FUNC_8(struct eapol_ctx *VAR_6)
{
 struct eapol_sm *VAR_7;
 struct eap_config VAR_8;
 VAR_7 = FUNC_6(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_7->ctx = VAR_6;

 VAR_7->portControl = VAR_0;


 VAR_7->heldPeriod = 60;
 VAR_7->startPeriod = 30;
 VAR_7->maxStart = 3;


 VAR_7->authPeriod = 30;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.opensc_engine_path = VAR_6->opensc_engine_path;
 VAR_8.pkcs11_engine_path = VAR_6->pkcs11_engine_path;
 VAR_8.pkcs11_module_path = VAR_6->pkcs11_module_path;
 VAR_8.openssl_ciphers = VAR_6->openssl_ciphers;
 VAR_8.wps = VAR_6->wps;
 VAR_8.cert_in_cb = VAR_6->cert_in_cb;

 VAR_7->eap = FUNC_0(VAR_7, &VAR_4, VAR_7->ctx->msg_ctx, &VAR_8);
 if (VAR_7->eap == ((void*)0)) {
  FUNC_4(VAR_7);
  return ((void*)0);
 }
 VAR_7->force_authorized_update = VAR_3;
 VAR_7->initialize = VAR_3;
 FUNC_2(VAR_7);
 VAR_7->initialize = VAR_1;
 FUNC_2(VAR_7);

 if (FUNC_3(1, 0, VAR_5, ((void*)0), VAR_7) == 0)
  VAR_7->timer_tick_enabled = 1;

 return VAR_7;
}
