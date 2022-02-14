
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ca_cert_verify; int cert_probe; int server_cert_only; int srv_cert_hash; int ssl; } ;
typedef int WOLFSSL_X509_STORE ;
typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,char const*,int ) ;
 scalar_t__ FUNC_4 (int *,int const*,size_t,int ) ;
 scalar_t__ FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(void *VAR_6, struct tls_connection *VAR_7,
      const char *VAR_8,
      const u8 *VAR_9, size_t VAR_10,
      const char *VAR_11)
{
 WOLFSSL_CTX *VAR_12 = VAR_6;

 FUNC_8(VAR_7->ssl, VAR_4, VAR_5);
 VAR_7->ca_cert_verify = 1;

 if (VAR_8 && FUNC_2(VAR_8, "probe://", 8) == 0) {
  FUNC_9(VAR_0,
      "wolfSSL: Probe for server certificate chain");
  VAR_7->cert_probe = 1;
  VAR_7->ca_cert_verify = 0;
  return 0;
 }

 if (VAR_8 && FUNC_2(VAR_8, "hash://", 7) == 0) {
  FUNC_9(VAR_1,
      "No SHA256 included in the build - cannot validate server certificate hash");
  return -1;

 }

 if (VAR_9) {
  if (FUNC_4(VAR_12, VAR_9, VAR_10,
         VAR_2) !=
      VAR_3) {
   FUNC_9(VAR_1, "SSL: failed to load CA blob");
   return -1;
  }
  FUNC_9(VAR_0, "SSL: use CA cert blob OK");
  return 0;
 }

 if (VAR_8 || VAR_11) {
  WOLFSSL_X509_STORE *VAR_13 = FUNC_7();

  if (!VAR_13) {
   FUNC_9(VAR_1,
       "SSL: failed to create certificate store");
   return -1;
  }
  FUNC_6(VAR_12, VAR_13);

  if (FUNC_5(VAR_12, VAR_8, VAR_11) !=
      VAR_3) {
   FUNC_9(VAR_1,
       "SSL: failed to load ca_cert as PEM");

   if (!VAR_8)
    return -1;

   if (FUNC_3(
        VAR_12, VAR_8, VAR_2) !=
       VAR_3) {
    FUNC_9(VAR_1,
        "SSL: failed to load ca_cert as DER");
    return -1;
   }
  }
  return 0;
 }

 VAR_7->ca_cert_verify = 0;
 return 0;
}
