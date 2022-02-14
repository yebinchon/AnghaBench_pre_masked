
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_global {int server; int params_set; int xcred; int * ocsp_stapling_response; } ;
struct tls_connection_params {int flags; scalar_t__ ocsp_stapling_response; int private_key_passwd; int private_key; int client_cert; int ca_cert; scalar_t__ check_cert_subject; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct tls_global*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_10 (int ,char*,...) ;

int FUNC_11(void *VAR_8,
     const struct tls_connection_params *VAR_9)
{
 struct tls_global *VAR_10 = VAR_8;
 int VAR_11;

 if (VAR_9->check_cert_subject)
  return -1;



 VAR_10->server = 1;

 if (VAR_10->params_set) {
  FUNC_1(VAR_10->xcred);
  VAR_10->params_set = 0;
 }

 VAR_11 = FUNC_0(&VAR_10->xcred);
 if (VAR_11) {
  FUNC_10(VAR_4, "Failed to allocate global credentials "
      "%s", FUNC_7(VAR_11));
  return -1;
 }

 if (VAR_9->ca_cert) {
  VAR_11 = FUNC_6(
   VAR_10->xcred, VAR_9->ca_cert, VAR_2);
  if (VAR_11 < 0) {
   FUNC_10(VAR_4, "Failed to read CA cert '%s' "
       "in DER format: %s", VAR_9->ca_cert,
       FUNC_7(VAR_11));
   VAR_11 = FUNC_6(
    VAR_10->xcred, VAR_9->ca_cert,
    VAR_3);
   if (VAR_11 < 0) {
    FUNC_10(VAR_4, "Failed to read CA cert "
        "'%s' in PEM format: %s",
        VAR_9->ca_cert,
        FUNC_7(VAR_11));
    goto fail;
   }
  }

  if (VAR_9->flags & VAR_5) {
   FUNC_3(
    VAR_10->xcred,
    VAR_0);
  }

  if (VAR_9->flags & VAR_6) {
   FUNC_3(
    VAR_10->xcred,
    VAR_1);
  }
 }

 if (VAR_9->client_cert && VAR_9->private_key) {

  VAR_11 = FUNC_4(
   VAR_10->xcred, VAR_9->client_cert,
   VAR_9->private_key, VAR_2);
  if (VAR_11 < 0) {
   FUNC_10(VAR_4, "Failed to read client cert/key "
       "in DER format: %s", FUNC_7(VAR_11));
   VAR_11 = FUNC_4(
    VAR_10->xcred, VAR_9->client_cert,
    VAR_9->private_key, VAR_3);
   if (VAR_11 < 0) {
    FUNC_10(VAR_4, "Failed to read client "
        "cert/key in PEM format: %s",
        FUNC_7(VAR_11));
    goto fail;
   }
  }
 } else if (VAR_9->private_key) {
  int VAR_12 = 0;
  if (!VAR_12) {
   FUNC_10(VAR_4, "GnuTLS: PKCS#12 support not "
       "included");
   goto fail;
  }
 }
 VAR_10->params_set = 1;

 return 0;

fail:
 FUNC_1(VAR_10->xcred);
 return -1;
}
