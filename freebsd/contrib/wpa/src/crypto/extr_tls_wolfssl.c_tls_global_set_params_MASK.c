
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; scalar_t__ ocsp_stapling_response; scalar_t__ openssl_ecdh_curves; scalar_t__ openssl_ciphers; int dh_file; int dh_blob_len; int dh_blob; int private_key; int private_key_passwd; int client_cert; int ca_cert; scalar_t__ check_cert_subject; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (void*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (void*,int ,int ,int *) ;
 int FUNC_5 (void*,scalar_t__) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,scalar_t__) ;
 int FUNC_8 (int ,char*,...) ;

int FUNC_9(void *VAR_5,
     const struct tls_connection_params *VAR_6)
{
 FUNC_8(VAR_0, "SSL: global set params");

 if (VAR_6->check_cert_subject)
  return -1;

 if (FUNC_0(VAR_5, VAR_6->ca_cert) < 0) {
  FUNC_8(VAR_1, "SSL: Failed to load ca cert file '%s'",
      VAR_6->ca_cert);
  return -1;
 }

 if (FUNC_1(VAR_5, VAR_6->client_cert) < 0) {
  FUNC_8(VAR_1,
      "SSL: Failed to load client cert file '%s'",
      VAR_6->client_cert);
  return -1;
 }

 if (FUNC_3(VAR_5, VAR_6->private_key,
       VAR_6->private_key_passwd) < 0) {
  FUNC_8(VAR_1,
      "SSL: Failed to load private key file '%s'",
      VAR_6->private_key);
  return -1;
 }

 if (FUNC_2(VAR_5, VAR_6->dh_file, VAR_6->dh_blob,
     VAR_6->dh_blob_len) < 0) {
  FUNC_8(VAR_1, "SSL: Failed to load DH file '%s'",
      VAR_6->dh_file);
  return -1;
 }

 if (VAR_6->openssl_ciphers &&
     FUNC_7(VAR_5,
     VAR_6->openssl_ciphers) != 1) {
  FUNC_8(VAR_1,
      "wolfSSL: Failed to set cipher string '%s'",
      VAR_6->openssl_ciphers);
  return -1;
 }

 if (VAR_6->openssl_ecdh_curves) {
  FUNC_8(VAR_1,
      "wolfSSL: openssl_ecdh_curves not supported");
  return -1;
 }
 return 0;
}
