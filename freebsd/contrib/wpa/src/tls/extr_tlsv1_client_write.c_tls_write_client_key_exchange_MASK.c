
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ tls_key_exchange ;
struct TYPE_2__ {int cipher_suite; } ;
struct tlsv1_client {int verify; TYPE_1__ rl; } ;
struct tls_cipher_suite {scalar_t__ key_exchange; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 struct tls_cipher_suite* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_5 (struct tlsv1_client*,int **,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int *,int,int *,int,size_t*) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_client *VAR_9,
      u8 **VAR_10, u8 *VAR_11)
{
 u8 *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 size_t VAR_16;
 tls_key_exchange VAR_17;
 const struct tls_cipher_suite *VAR_18;

 VAR_18 = FUNC_2(VAR_9->rl.cipher_suite);
 if (VAR_18 == ((void*)0))
  VAR_17 = VAR_7;
 else
  VAR_17 = VAR_18->key_exchange;

 VAR_12 = *VAR_10;

 FUNC_7(VAR_0, "TLSv1: Send ClientKeyExchange");

 VAR_13 = VAR_12;
 VAR_12 += VAR_8;




 VAR_14 = VAR_12;

 *VAR_12++ = VAR_4;

 VAR_15 = VAR_12;
 VAR_12 += 3;

 if (VAR_17 == VAR_6 || VAR_17 == VAR_5) {
  if (FUNC_4(VAR_9, &VAR_12, VAR_11) < 0)
   return -1;
 } else {
  if (FUNC_5(VAR_9, &VAR_12, VAR_11) < 0)
   return -1;
 }

 FUNC_0(VAR_15, VAR_12 - VAR_15 - 3);

 if (FUNC_6(&VAR_9->rl, VAR_3,
         VAR_13, VAR_11 - VAR_13, VAR_14, VAR_12 - VAR_14,
         &VAR_16) < 0) {
  FUNC_7(VAR_0, "TLSv1: Failed to create a record");
  FUNC_1(VAR_9, VAR_2,
     VAR_1);
  return -1;
 }
 VAR_12 = VAR_13 + VAR_16;
 FUNC_3(&VAR_9->verify, VAR_14, VAR_12 - VAR_14);

 *VAR_10 = VAR_12;

 return 0;
}
