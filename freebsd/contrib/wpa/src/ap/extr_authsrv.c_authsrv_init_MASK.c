
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_connection_params {scalar_t__ crl_reload_interval; int check_cert_subject; int ocsp_stapling_response_multi; int ocsp_stapling_response; int openssl_ecdh_curves; int openssl_ciphers; scalar_t__ dh_file; int private_key_passwd2; int private_key_passwd; scalar_t__ private_key2; scalar_t__ private_key; scalar_t__ client_cert2; scalar_t__ client_cert; scalar_t__ ca_cert; struct hostapd_data* cb_ctx; int event_cb; int tls_flags; int tls_session_lifetime; } ;
struct tls_config {scalar_t__ crl_reload_interval; int check_cert_subject; int ocsp_stapling_response_multi; int ocsp_stapling_response; int openssl_ecdh_curves; int openssl_ciphers; scalar_t__ dh_file; int private_key_passwd2; int private_key_passwd; scalar_t__ private_key2; scalar_t__ private_key; scalar_t__ client_cert2; scalar_t__ client_cert; scalar_t__ ca_cert; struct hostapd_data* cb_ctx; int event_cb; int tls_flags; int tls_session_lifetime; } ;
struct hostapd_data {TYPE_1__* conf; int * eap_sim_db_priv; int * ssl_ctx; } ;
typedef int params ;
typedef int conf ;
struct TYPE_2__ {scalar_t__ crl_reload_interval; scalar_t__ check_crl; scalar_t__ radius_server_clients; int eap_sim_db_timeout; scalar_t__ eap_sim_db; int check_crl_strict; int check_cert_subject; int ocsp_stapling_response_multi; int ocsp_stapling_response; int openssl_ecdh_curves; int openssl_ciphers; scalar_t__ dh_file; int private_key_passwd2; int private_key_passwd; scalar_t__ private_key2; scalar_t__ private_key; scalar_t__ server_cert2; scalar_t__ server_cert; scalar_t__ ca_cert; int tls_flags; int tls_session_lifetime; scalar_t__ eap_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hostapd_data*) ;
 int VAR_2 ;
 int * FUNC_1 (scalar_t__,int ,int ,struct hostapd_data*) ;
 scalar_t__ FUNC_2 (struct hostapd_data*) ;
 int VAR_3 ;
 int FUNC_3 (struct tls_connection_params*,int ,int) ;
 scalar_t__ FUNC_4 (int *,struct tls_connection_params*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int ) ;
 int * FUNC_6 (struct tls_connection_params*) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(struct hostapd_data *VAR_4)
{
 return 0;
}
