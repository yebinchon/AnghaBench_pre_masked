
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_credentials {int server_cert_only; int cert_probe; int trusted_certs; int ca_cert_verify; int srv_cert_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,int) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (int *,char const*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

int FUNC_5(struct tlsv1_credentials *VAR_2, const char *VAR_3,
        const u8 *VAR_4, size_t VAR_5,
        const char *VAR_6)
{
 if (VAR_3 && FUNC_2(VAR_3, "hash://", 7) == 0) {
  const char *VAR_7 = VAR_3 + 7;
  if (FUNC_2(VAR_7, "server/sha256/", 14) != 0) {
   FUNC_4(VAR_0,
       "TLSv1: Unsupported ca_cert hash value '%s'",
       VAR_3);
   return -1;
  }
  VAR_7 += 14;
  if (FUNC_1(VAR_7) != 32 * 2) {
   FUNC_4(VAR_0,
       "TLSv1: Unexpected SHA256 hash length in ca_cert '%s'",
       VAR_3);
   return -1;
  }
  if (FUNC_0(VAR_7, VAR_2->srv_cert_hash, 32) < 0) {
   FUNC_4(VAR_0,
       "TLSv1: Invalid SHA256 hash value in ca_cert '%s'",
       VAR_3);
   return -1;
  }
  VAR_2->server_cert_only = 1;
  VAR_2->ca_cert_verify = 0;
  FUNC_4(VAR_0,
      "TLSv1: Checking only server certificate match");
  return 0;
 }

 if (VAR_3 && FUNC_2(VAR_3, "probe://", 8) == 0) {
  VAR_2->cert_probe = 1;
  VAR_2->ca_cert_verify = 0;
  FUNC_4(VAR_0, "TLSv1: Only probe server certificate");
  return 0;
 }

 VAR_2->ca_cert_verify = VAR_3 || VAR_4 || VAR_6;

 if (FUNC_3(&VAR_2->trusted_certs, VAR_3,
     VAR_4, VAR_5) < 0)
  return -1;

 if (VAR_6) {

  FUNC_4(VAR_1, "TLSv1: Use of CA certificate directory "
      "not yet supported");
  return -1;
 }

 return 0;
}
