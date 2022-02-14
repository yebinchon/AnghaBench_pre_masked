
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tlsconf ;
struct tls_config {int fips_mode; int cert_in_cb; struct eap_sm* cb_ctx; int event_cb; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; } ;
struct eapol_callbacks {int dummy; } ;
struct eap_sm {int * ssl_ctx2; int * ssl_ctx; int erp_keys; int wps; int ClientTimeout; void* msg_ctx; struct eapol_callbacks const* eapol_cb; void* eapol_ctx; } ;
struct eap_config {int cert_in_cb; int openssl_ciphers; int pkcs11_module_path; int pkcs11_engine_path; int opensc_engine_path; int wps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct eap_sm*) ;
 int FUNC_2 (struct tls_config*,int ,int) ;
 struct eap_sm* FUNC_3 (int) ;
 void* FUNC_4 (struct tls_config*) ;
 int FUNC_5 (int ,char*) ;

struct eap_sm * FUNC_6(void *VAR_4,
     const struct eapol_callbacks *VAR_5,
     void *VAR_6, struct eap_config *VAR_7)
{
 struct eap_sm *VAR_8;
 struct tls_config VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 VAR_8->eapol_ctx = VAR_4;
 VAR_8->eapol_cb = VAR_5;
 VAR_8->msg_ctx = VAR_6;
 VAR_8->ClientTimeout = VAR_0;
 VAR_8->wps = VAR_7->wps;
 FUNC_0(&VAR_8->erp_keys);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.opensc_engine_path = VAR_7->opensc_engine_path;
 VAR_9.pkcs11_engine_path = VAR_7->pkcs11_engine_path;
 VAR_9.pkcs11_module_path = VAR_7->pkcs11_module_path;
 VAR_9.openssl_ciphers = VAR_7->openssl_ciphers;



 VAR_9.event_cb = VAR_3;
 VAR_9.cb_ctx = VAR_8;
 VAR_9.cert_in_cb = VAR_7->cert_in_cb;
 VAR_8->ssl_ctx = FUNC_4(&VAR_9);
 if (VAR_8->ssl_ctx == ((void*)0)) {
  FUNC_5(VAR_2, "SSL: Failed to initialize TLS "
      "context.");
  FUNC_1(VAR_8);
  return ((void*)0);
 }

 VAR_8->ssl_ctx2 = FUNC_4(&VAR_9);
 if (VAR_8->ssl_ctx2 == ((void*)0)) {
  FUNC_5(VAR_1, "SSL: Failed to initialize TLS "
      "context (2).");

 }

 return VAR_8;
}
