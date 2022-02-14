
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_4__ {scalar_t__ tls_version; int cipher_suite; } ;
struct tlsv1_server {scalar_t__* dh_secret; size_t dh_secret_len; int test_flags; int verify; TYPE_2__ rl; TYPE_1__* cred; int server_random; int client_random; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;
struct TYPE_3__ {char* dh_g; int dh_g_len; int key; int * dh_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (char*,int,scalar_t__*,size_t,scalar_t__ const*,size_t,scalar_t__*,size_t*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int,scalar_t__*,size_t*) ;
 int FUNC_4 (scalar_t__*) ;
 void* FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__ const*,size_t) ;
 int FUNC_7 (scalar_t__*,...) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_9 (scalar_t__*,size_t) ;
 struct tls_cipher_suite* FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,int ,int ,scalar_t__*,int,scalar_t__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,scalar_t__*,int) ;
 int FUNC_14 (scalar_t__,int ,int ,int ,scalar_t__*,int,scalar_t__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int ,scalar_t__*,int,scalar_t__*,int,size_t*) ;
 int FUNC_16 (struct tlsv1_server*,int ,int ) ;
 int FUNC_17 (struct tlsv1_server*,scalar_t__ const**,size_t*) ;
 int FUNC_18 (struct tlsv1_server*,char*) ;
 int FUNC_19 (int ,char*,scalar_t__*,int) ;
 int FUNC_20 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_21 (int ,char*,...) ;

__attribute__((used)) static int FUNC_22(struct tlsv1_server *VAR_15,
      u8 **VAR_16, u8 *VAR_17)
{
 tls_key_exchange VAR_18;
 const struct tls_cipher_suite *VAR_19;
 u8 *VAR_20, *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 size_t VAR_25;
 u8 *VAR_26;
 size_t VAR_27;
 const u8 *VAR_28;
 size_t VAR_29;

 VAR_19 = FUNC_10(VAR_15->rl.cipher_suite);
 if (VAR_19 == ((void*)0))
  VAR_18 = VAR_11;
 else
  VAR_18 = VAR_19->key_exchange;

 if (!FUNC_12(VAR_15->rl.cipher_suite)) {
  FUNC_21(VAR_0, "TLSv1: No ServerKeyExchange needed");
  return 0;
 }

 if (VAR_18 != VAR_10 && VAR_18 != VAR_9) {
  FUNC_21(VAR_0, "TLSv1: ServerKeyExchange not yet "
      "supported with key exchange type %d", VAR_18);
  return -1;
 }

 if (VAR_15->cred == ((void*)0) || VAR_15->cred->dh_p == ((void*)0) ||
     VAR_15->cred->dh_g == ((void*)0)) {
  FUNC_21(VAR_0, "TLSv1: No DH parameters available for "
      "ServerKeyExhcange");
  return -1;
 }

 FUNC_17(VAR_15, &VAR_28, &VAR_29);

 FUNC_4(VAR_15->dh_secret);
 VAR_15->dh_secret_len = VAR_29;
 VAR_15->dh_secret = FUNC_5(VAR_15->dh_secret_len);
 if (VAR_15->dh_secret == ((void*)0)) {
  FUNC_21(VAR_0, "TLSv1: Failed to allocate "
      "memory for secret (Diffie-Hellman)");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  return -1;
 }
 if (FUNC_9(VAR_15->dh_secret, VAR_15->dh_secret_len)) {
  FUNC_21(VAR_0, "TLSv1: Failed to get random "
      "data for Diffie-Hellman");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  FUNC_4(VAR_15->dh_secret);
  VAR_15->dh_secret = ((void*)0);
  return -1;
 }

 if (FUNC_6(VAR_15->dh_secret, VAR_28, VAR_15->dh_secret_len) > 0)
  VAR_15->dh_secret[0] = 0;

 VAR_20 = VAR_15->dh_secret;
 while (VAR_20 + 1 < VAR_15->dh_secret + VAR_15->dh_secret_len && *VAR_20 == 0)
  VAR_20++;
 if (VAR_20 != VAR_15->dh_secret) {
  FUNC_8(VAR_15->dh_secret, VAR_20,
      VAR_15->dh_secret_len - (VAR_20 - VAR_15->dh_secret));
  VAR_15->dh_secret_len -= VAR_20 - VAR_15->dh_secret;
 }
 FUNC_20(VAR_0, "TLSv1: DH server's secret value",
   VAR_15->dh_secret, VAR_15->dh_secret_len);


 VAR_27 = VAR_29;
 VAR_26 = FUNC_5(VAR_27);
 if (VAR_26 == ((void*)0)) {
  FUNC_21(VAR_0, "TLSv1: Failed to allocate memory for "
      "Diffie-Hellman");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  return -1;
 }
 if (FUNC_2(VAR_15->cred->dh_g, VAR_15->cred->dh_g_len,
      VAR_15->dh_secret, VAR_15->dh_secret_len,
      VAR_28, VAR_29, VAR_26, &VAR_27)) {
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  FUNC_4(VAR_26);
  return -1;
 }

 FUNC_19(VAR_0, "TLSv1: DH Ys (server's public value)",
      VAR_26, VAR_27);
 VAR_20 = *VAR_16;

 FUNC_18(VAR_15, "Send ServerKeyExchange");
 VAR_21 = VAR_20;
 VAR_20 += VAR_12;




 VAR_22 = VAR_20;

 *VAR_20++ = VAR_7;

 VAR_23 = VAR_20;
 VAR_20 += 3;


 VAR_24 = VAR_20;

 if (2 + VAR_29 > (size_t) (VAR_17 - VAR_20)) {
  FUNC_21(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_p");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  FUNC_4(VAR_26);
  return -1;
 }
 FUNC_0(VAR_20, VAR_29);
 VAR_20 += 2;
 FUNC_7(VAR_20, VAR_28, VAR_29);
 VAR_20 += VAR_29;


 if (2 + VAR_15->cred->dh_g_len > (size_t) (VAR_17 - VAR_20)) {
  FUNC_21(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_g");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  FUNC_4(VAR_26);
  return -1;
 }
 FUNC_0(VAR_20, VAR_15->cred->dh_g_len);
 VAR_20 += 2;
 FUNC_7(VAR_20, VAR_15->cred->dh_g, VAR_15->cred->dh_g_len);
 VAR_20 += VAR_15->cred->dh_g_len;


 if (2 + VAR_27 > (size_t) (VAR_17 - VAR_20)) {
  FUNC_21(VAR_0, "TLSv1: Not enough buffer space for "
      "dh_Ys");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  FUNC_4(VAR_26);
  return -1;
 }
 FUNC_0(VAR_20, VAR_27);
 VAR_20 += 2;
 FUNC_7(VAR_20, VAR_26, VAR_27);
 VAR_20 += VAR_27;
 FUNC_4(VAR_26);
 if (VAR_18 == VAR_9) {
  u8 VAR_30[100];
  u8 *VAR_31;
  size_t VAR_32;
  int VAR_33;

  if (VAR_15->rl.tls_version >= VAR_14) {
   FUNC_16(VAR_15, VAR_3,
        VAR_2);
   return -1;

  } else {
   VAR_33 = FUNC_11(
    VAR_15->rl.tls_version, VAR_15->client_random,
    VAR_15->server_random, VAR_24,
    VAR_20 - VAR_24, VAR_30);
  }

  if (VAR_33 < 0) {
   FUNC_16(VAR_15, VAR_3,
        VAR_2);
   return -1;
  }

  FUNC_19(VAR_1, "TLS: ServerKeyExchange signed_params hash",
       VAR_30, VAR_33);
  VAR_31 = VAR_20;
  VAR_20 += 2;
  VAR_32 = VAR_17 - VAR_20;
  if (VAR_15->cred == ((void*)0) ||
      FUNC_3(VAR_15->cred->key, VAR_30, VAR_33,
        VAR_20, &VAR_32) < 0) {
   FUNC_21(VAR_0, "TLSv1: Failed to sign hash (PKCS #1)");
   FUNC_16(VAR_15, VAR_3,
        VAR_2);
   return -1;
  }
  FUNC_0(VAR_31, VAR_32);







  VAR_20 += VAR_32;
 }

 FUNC_1(VAR_23, VAR_20 - VAR_23 - 3);

 if (FUNC_15(&VAR_15->rl, VAR_6,
         VAR_21, VAR_17 - VAR_21, VAR_22, VAR_20 - VAR_22,
         &VAR_25) < 0) {
  FUNC_21(VAR_0, "TLSv1: Failed to generate a record");
  FUNC_16(VAR_15, VAR_3,
       VAR_2);
  return -1;
 }
 VAR_20 = VAR_21 + VAR_25;

 FUNC_13(&VAR_15->verify, VAR_22, VAR_20 - VAR_22);

 *VAR_16 = VAR_20;

 return 0;
}
