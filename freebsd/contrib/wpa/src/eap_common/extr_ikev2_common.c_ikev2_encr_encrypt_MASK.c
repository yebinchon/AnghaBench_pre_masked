
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_cipher*) ;
 scalar_t__ FUNC_1 (struct crypto_cipher*,int const*,int *,size_t) ;
 struct crypto_cipher* FUNC_2 (int,int const*,int const*,size_t) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(int VAR_4, const u8 *VAR_5, size_t VAR_6, const u8 *VAR_7,
         const u8 *VAR_8, u8 *VAR_9, size_t VAR_10)
{
 struct crypto_cipher *VAR_11;
 int VAR_12;

 switch (VAR_4) {
 case 129:
  VAR_12 = VAR_0;
  break;
 case 128:
  VAR_12 = VAR_1;
  break;
 default:
  FUNC_3(VAR_2, "IKEV2: Unsupported encr alg %d", VAR_4);
  return -1;
 }

 VAR_11 = FUNC_2(VAR_12, VAR_7, VAR_5, VAR_6);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_3, "IKEV2: Failed to initialize cipher");
  return -1;
 }

 if (FUNC_1(VAR_11, VAR_8, VAR_9, VAR_10) < 0) {
  FUNC_3(VAR_3, "IKEV2: Encryption failed");
  FUNC_0(VAR_11);
  return -1;
 }
 FUNC_0(VAR_11);

 return 0;
}
