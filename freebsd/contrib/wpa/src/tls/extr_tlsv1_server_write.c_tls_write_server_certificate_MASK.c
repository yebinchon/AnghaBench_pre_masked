
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct x509_certificate {int cert_len; int issuer; int cert_start; } ;
struct TYPE_4__ {int cipher_suite; } ;
struct tlsv1_server {int verify; TYPE_2__ rl; TYPE_1__* cred; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;
struct TYPE_3__ {struct x509_certificate* cert; int trusted_certs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct tls_cipher_suite* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_5 (struct tlsv1_server*,int ,int ) ;
 int FUNC_6 (struct tlsv1_server*,char*) ;
 int FUNC_7 (int ,char*,...) ;
 struct x509_certificate* FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct x509_certificate*) ;

__attribute__((used)) static int FUNC_10(struct tlsv1_server *VAR_7,
     u8 **VAR_8, u8 *VAR_9)
{
 u8 *VAR_10, *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 size_t VAR_15;
 struct x509_certificate *VAR_16;
 const struct tls_cipher_suite *VAR_17;

 VAR_17 = FUNC_2(VAR_7->rl.cipher_suite);
 if (VAR_17 && VAR_17->key_exchange == VAR_5) {
  FUNC_7(VAR_0, "TLSv1: Do not send Certificate when "
      "using anonymous DH");
  return 0;
 }

 VAR_10 = *VAR_8;
 if (VAR_6 + 1 + 3 + 3 > VAR_9 - VAR_10) {
  FUNC_5(VAR_7, VAR_2,
       VAR_1);
  return -1;
 }

 FUNC_6(VAR_7, "Send Certificate");
 VAR_11 = VAR_10;
 VAR_10 += VAR_6;




 VAR_12 = VAR_10;

 *VAR_10++ = VAR_4;

 VAR_13 = VAR_10;
 VAR_10 += 3;


 VAR_14 = VAR_10;
 VAR_10 += 3;
 VAR_16 = VAR_7->cred->cert;
 while (VAR_16) {
  if (3 + VAR_16->cert_len > (size_t) (VAR_9 - VAR_10)) {
   FUNC_7(VAR_0, "TLSv1: Not enough buffer space "
       "for Certificate (cert_len=%lu left=%lu)",
       (unsigned long) VAR_16->cert_len,
       (unsigned long) (VAR_9 - VAR_10));
   FUNC_5(VAR_7, VAR_2,
        VAR_1);
   return -1;
  }
  FUNC_0(VAR_10, VAR_16->cert_len);
  VAR_10 += 3;
  FUNC_1(VAR_10, VAR_16->cert_start, VAR_16->cert_len);
  VAR_10 += VAR_16->cert_len;

  if (FUNC_9(VAR_16))
   break;
  VAR_16 = FUNC_8(VAR_7->cred->trusted_certs,
          &VAR_16->issuer);
 }
 if (VAR_16 == VAR_7->cred->cert || VAR_16 == ((void*)0)) {






  FUNC_7(VAR_0, "TLSv1: Full server certificate chain "
      "not configured - validation may fail");
 }
 FUNC_0(VAR_14, VAR_10 - VAR_14 - 3);

 FUNC_0(VAR_13, VAR_10 - VAR_13 - 3);

 if (FUNC_4(&VAR_7->rl, VAR_3,
         VAR_11, VAR_9 - VAR_11, VAR_12, VAR_10 - VAR_12,
         &VAR_15) < 0) {
  FUNC_7(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_5(VAR_7, VAR_2,
       VAR_1);
  return -1;
 }
 VAR_10 = VAR_11 + VAR_15;

 FUNC_3(&VAR_7->verify, VAR_12, VAR_10 - VAR_12);

 *VAR_8 = VAR_10;

 return 0;
}
