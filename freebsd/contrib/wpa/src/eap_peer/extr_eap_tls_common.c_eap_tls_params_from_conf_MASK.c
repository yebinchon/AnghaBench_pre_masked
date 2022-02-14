
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection_params {int flags; int openssl_ciphers; int dh_blob_len; int dh_blob; int dh_file; int private_key_blob_len; int private_key_blob; int private_key; int client_cert_blob_len; int client_cert_blob; int client_cert; int ca_cert_blob_len; int ca_cert_blob; int ca_cert; } ;
struct eap_ssl_data {scalar_t__ eap_type; } ;
struct eap_sm {int ext_cert_check; scalar_t__ workaround; } ;
struct eap_peer_config {int openssl_ciphers; scalar_t__ teap_anon_dh; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int *,int *,int *) ;
 int FUNC_1 (struct tls_connection_params*,struct eap_peer_config*) ;
 int FUNC_2 (struct tls_connection_params*,struct eap_peer_config*) ;
 int FUNC_3 (struct tls_connection_params*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_16,
        struct eap_ssl_data *VAR_17,
        struct tls_connection_params *VAR_18,
        struct eap_peer_config *VAR_19, int VAR_20)
{
 FUNC_3(VAR_18, 0, sizeof(*VAR_18));
 if (VAR_16->workaround && VAR_17->eap_type != VAR_0 &&
     VAR_17->eap_type != VAR_2) {
  VAR_18->flags |= VAR_9;
 }
 if (VAR_17->eap_type == VAR_2) {

  VAR_18->flags |= VAR_10 |
   VAR_11;
  if (VAR_19->teap_anon_dh)
   VAR_18->flags |= VAR_15;
 }
 if (VAR_17->eap_type == VAR_0 ||
     VAR_17->eap_type == VAR_2 ||
     VAR_17->eap_type == VAR_4 ||
     VAR_17->eap_type == VAR_1) {


  VAR_18->flags |= VAR_12;
 }
 if (VAR_17->eap_type == VAR_3 ||
     VAR_17->eap_type == VAR_5 ||
     VAR_17->eap_type == VAR_6) {







  VAR_18->flags |= VAR_12;
 }
 if (VAR_20) {
  FUNC_4(VAR_7, "TLS: using phase2 config options");
  FUNC_2(VAR_18, VAR_19);
 } else {
  FUNC_4(VAR_7, "TLS: using phase1 config options");
  FUNC_1(VAR_18, VAR_19);
  if (VAR_17->eap_type == VAR_0)
   VAR_18->flags |= VAR_13;
 }





 if (FUNC_0(VAR_16, &VAR_18->ca_cert, &VAR_18->ca_cert_blob,
          &VAR_18->ca_cert_blob_len) ||
     FUNC_0(VAR_16, &VAR_18->client_cert,
          &VAR_18->client_cert_blob,
          &VAR_18->client_cert_blob_len) ||
     FUNC_0(VAR_16, &VAR_18->private_key,
          &VAR_18->private_key_blob,
          &VAR_18->private_key_blob_len) ||
     FUNC_0(VAR_16, &VAR_18->dh_file, &VAR_18->dh_blob,
          &VAR_18->dh_blob_len)) {
  FUNC_4(VAR_8, "SSL: Failed to get configuration blobs");
  return -1;
 }

 VAR_18->openssl_ciphers = VAR_19->openssl_ciphers;

 VAR_16->ext_cert_check = !!(VAR_18->flags & VAR_14);

 return 0;
}
