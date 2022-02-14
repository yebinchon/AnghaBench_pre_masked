
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_client {int flags; int state; TYPE_1__ rl; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 struct tls_cipher_suite* FUNC_2 (int ) ;
 int FUNC_3 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_4 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_5 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct tlsv1_client*,scalar_t__ const*,size_t,scalar_t__) ;
 int FUNC_8 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(struct tlsv1_client *VAR_13, u8 VAR_14,
        const u8 *VAR_15, size_t *VAR_16)
{
 const u8 *VAR_17, *VAR_18;
 size_t VAR_19, VAR_20;
 u8 VAR_21;
 const struct tls_cipher_suite *VAR_22;

 if (VAR_14 != VAR_6) {
  FUNC_9(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_14);
  FUNC_1(VAR_13, VAR_3,
     VAR_4);
  return -1;
 }

 VAR_17 = VAR_15;
 VAR_19 = *VAR_16;

 if (VAR_19 < 4) {
  FUNC_9(VAR_0, "TLSv1: Too short ServerKeyExchange "
      "(Left=%lu)", (unsigned long) VAR_19);
  FUNC_1(VAR_13, VAR_3, VAR_2);
  return -1;
 }

 VAR_21 = *VAR_17++;
 VAR_20 = FUNC_0(VAR_17);
 VAR_17 += 3;
 VAR_19 -= 4;

 if (VAR_20 > VAR_19) {
  FUNC_9(VAR_0, "TLSv1: Mismatch in ServerKeyExchange "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_20, (unsigned long) VAR_19);
  FUNC_1(VAR_13, VAR_3, VAR_2);
  return -1;
 }

 VAR_18 = VAR_17 + VAR_20;

 if ((VAR_13->flags & VAR_5) &&
     VAR_21 == VAR_8)
  return FUNC_4(VAR_13, VAR_14, VAR_15,
            VAR_16);
 if (VAR_21 == VAR_7)
  return FUNC_3(VAR_13, VAR_14, VAR_15,
             VAR_16);
 if (VAR_21 == VAR_9)
  return FUNC_5(VAR_13, VAR_14, VAR_15,
           VAR_16);
 if (VAR_21 != VAR_10) {
  FUNC_9(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected ServerKeyExchange/"
      "CertificateRequest/ServerHelloDone%s)", VAR_21,
      (VAR_13->flags & VAR_5) ?
      "/CertificateStatus" : "");
  FUNC_1(VAR_13, VAR_3,
     VAR_4);
  return -1;
 }

 FUNC_9(VAR_0, "TLSv1: Received ServerKeyExchange");

 if (!FUNC_6(VAR_13->rl.cipher_suite)) {
  FUNC_9(VAR_0, "TLSv1: ServerKeyExchange not allowed "
      "with the selected cipher suite");
  FUNC_1(VAR_13, VAR_3,
     VAR_4);
  return -1;
 }

 FUNC_8(VAR_0, "TLSv1: ServerKeyExchange", VAR_17, VAR_20);
 VAR_22 = FUNC_2(VAR_13->rl.cipher_suite);
 if (VAR_22 && (VAR_22->key_exchange == VAR_12 ||
        VAR_22->key_exchange == VAR_11)) {
  if (FUNC_7(VAR_13, VAR_17, VAR_20,
       VAR_22->key_exchange) < 0) {
   FUNC_1(VAR_13, VAR_3,
      VAR_2);
   return -1;
  }
 } else {
  FUNC_9(VAR_0, "TLSv1: UnexpectedServerKeyExchange");
  FUNC_1(VAR_13, VAR_3,
     VAR_4);
  return -1;
 }

 *VAR_16 = VAR_18 - VAR_15;

 VAR_13->state = VAR_1;

 return 0;
}
