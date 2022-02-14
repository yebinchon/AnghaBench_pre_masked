
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_server {int state; TYPE_1__ rl; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 struct tls_cipher_suite* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tlsv1_server*,scalar_t__ const*,scalar_t__ const*) ;
 scalar_t__ FUNC_3 (struct tlsv1_server*,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_4 (struct tlsv1_server*,int ,int ) ;
 int FUNC_5 (struct tlsv1_server*,char*,...) ;
 int FUNC_6 (int ,char*,scalar_t__ const*,size_t) ;

__attribute__((used)) static int FUNC_7(struct tlsv1_server *VAR_10, u8 VAR_11,
        const u8 *VAR_12, size_t *VAR_13)
{
 const u8 *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 u8 VAR_18;
 tls_key_exchange VAR_19;
 const struct tls_cipher_suite *VAR_20;

 if (VAR_11 != VAR_5) {
  FUNC_5(VAR_10, "Expected Handshake; received content type 0x%x",
     VAR_11);
  FUNC_4(VAR_10, VAR_3,
       VAR_4);
  return -1;
 }

 VAR_14 = VAR_12;
 VAR_16 = *VAR_13;

 if (VAR_16 < 4) {
  FUNC_5(VAR_10, "Too short ClientKeyExchange (Left=%lu)",
     (unsigned long) VAR_16);
  FUNC_4(VAR_10, VAR_3,
       VAR_2);
  return -1;
 }

 VAR_18 = *VAR_14++;
 VAR_17 = FUNC_0(VAR_14);
 VAR_14 += 3;
 VAR_16 -= 4;

 if (VAR_17 > VAR_16) {
  FUNC_5(VAR_10, "Mismatch in ClientKeyExchange length (len=%lu != left=%lu)",
     (unsigned long) VAR_17, (unsigned long) VAR_16);
  FUNC_4(VAR_10, VAR_3,
       VAR_2);
  return -1;
 }

 VAR_15 = VAR_14 + VAR_17;

 if (VAR_18 != VAR_6) {
  FUNC_5(VAR_10, "Received unexpected handshake message %d (expected ClientKeyExchange)",
     VAR_18);
  FUNC_4(VAR_10, VAR_3,
       VAR_4);
  return -1;
 }

 FUNC_5(VAR_10, "Received ClientKeyExchange");

 FUNC_6(VAR_1, "TLSv1: ClientKeyExchange", VAR_14, VAR_17);

 VAR_20 = FUNC_1(VAR_10->rl.cipher_suite);
 if (VAR_20 == ((void*)0))
  VAR_19 = VAR_9;
 else
  VAR_19 = VAR_20->key_exchange;

 if ((VAR_19 == VAR_8 || VAR_19 == VAR_7) &&
     FUNC_2(VAR_10, VAR_14, VAR_15) < 0)
  return -1;

 if (VAR_19 != VAR_8 && VAR_19 != VAR_7 &&
     FUNC_3(VAR_10, VAR_14, VAR_15) < 0)
  return -1;

 *VAR_13 = VAR_15 - VAR_12;

 VAR_10->state = VAR_0;

 return 0;
}
