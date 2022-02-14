
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; scalar_t__ openssl_ciphers; int dh_blob_len; int dh_blob; int dh_file; int private_key_blob_len; int private_key_blob; int private_key_passwd; int private_key; int client_cert_blob_len; int client_cert_blob; int client_cert; int ca_path; int ca_cert_blob_len; int ca_cert_blob; int ca_cert; int domain_match; int suffix_match; int altsubject_match; int subject_match; } ;
struct tls_connection {int flags; int ssl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (void*,struct tls_connection*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct tls_connection*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct tls_connection*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (void*,struct tls_connection*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct tls_connection*,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (void*,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,char*,...) ;

int FUNC_11(void *VAR_9, struct tls_connection *VAR_10,
         const struct tls_connection_params *VAR_11)
{
 FUNC_10(VAR_0, "SSL: set params");

 if (FUNC_4(VAR_10, VAR_11->subject_match,
          VAR_11->altsubject_match,
          VAR_11->suffix_match,
          VAR_11->domain_match) < 0) {
  FUNC_10(VAR_1, "Error setting subject match");
  return -1;
 }

 if (FUNC_0(VAR_9, VAR_10, VAR_11->ca_cert,
       VAR_11->ca_cert_blob,
       VAR_11->ca_cert_blob_len,
       VAR_11->ca_path) < 0) {
  FUNC_10(VAR_1, "Error setting CA cert");
  return -1;
 }

 if (FUNC_1(VAR_10, VAR_11->client_cert,
           VAR_11->client_cert_blob,
           VAR_11->client_cert_blob_len) < 0) {
  FUNC_10(VAR_1, "Error setting client cert");
  return -1;
 }

 if (FUNC_3(VAR_9, VAR_10, VAR_11->private_key,
           VAR_11->private_key_passwd,
           VAR_11->private_key_blob,
           VAR_11->private_key_blob_len) < 0) {
  FUNC_10(VAR_1, "Error setting private key");
  return -1;
 }

 if (FUNC_2(VAR_10, VAR_11->dh_file, VAR_11->dh_blob,
         VAR_11->dh_blob_len) < 0) {
  FUNC_10(VAR_1, "Error setting DH");
  return -1;
 }

 if (VAR_11->openssl_ciphers &&
     FUNC_9(VAR_10->ssl, VAR_11->openssl_ciphers) != 1) {
  FUNC_10(VAR_1,
      "wolfSSL: Failed to set cipher string '%s'",
      VAR_11->openssl_ciphers);
  return -1;
 }

 FUNC_5(VAR_10->ssl, VAR_11->flags);
 if (VAR_11->flags & VAR_4) {
  FUNC_10(VAR_1,
      "wolfSSL: No OCSP support included - reject configuration");
  return -1;
 }
 if (VAR_11->flags & VAR_3) {
  FUNC_10(VAR_0,
      "wolfSSL: No OCSP support included - allow optional OCSP case to continue");
 }




 VAR_10->flags = VAR_11->flags;

 return 0;
}
