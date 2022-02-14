
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_credentials {int dummy; } ;
struct tls_connection_params {int flags; int dh_blob_len; int dh_blob; int dh_file; int private_key_blob_len; int private_key_blob; int private_key_passwd; int private_key; int client_cert_blob_len; int client_cert_blob; int client_cert; int ca_path; int ca_cert_blob_len; int ca_cert_blob; int ca_cert; scalar_t__ openssl_ecdh_curves; scalar_t__ openssl_ciphers; scalar_t__ domain_match; scalar_t__ suffix_match; scalar_t__ altsubject_match; scalar_t__ subject_match; } ;
struct tls_connection {int * client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct tlsv1_credentials*) ;
 int FUNC_1 (int *,int) ;
 struct tlsv1_credentials* FUNC_2 () ;
 int FUNC_3 (struct tlsv1_credentials*) ;
 scalar_t__ FUNC_4 (struct tlsv1_credentials*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct tlsv1_credentials*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct tlsv1_credentials*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct tlsv1_credentials*,int ,int ,int ,int ) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(void *VAR_2, struct tls_connection *VAR_3,
         const struct tls_connection_params *VAR_4)
{
 return -1;

}
