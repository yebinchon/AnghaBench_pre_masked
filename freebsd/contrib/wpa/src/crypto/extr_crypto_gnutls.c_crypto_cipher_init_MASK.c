
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_cipher {int dec; int enc; } ;
typedef scalar_t__ gcry_error_t ;
typedef enum gcry_cipher_algos { ____Placeholder_gcry_cipher_algos } gcry_cipher_algos ;
typedef enum crypto_cipher_alg { ____Placeholder_crypto_cipher_alg } crypto_cipher_alg ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int const*,int) ;
 scalar_t__ FUNC_4 (int ,int const*,size_t) ;
 int FUNC_5 (struct crypto_cipher*) ;
 struct crypto_cipher* FUNC_6 (int) ;

struct crypto_cipher * FUNC_7(enum crypto_cipher_alg VAR_11,
       const u8 *VAR_12, const u8 *VAR_13,
       size_t VAR_14)
{
 struct crypto_cipher *VAR_15;
 gcry_error_t VAR_16;
 enum gcry_cipher_algos VAR_17;
 int VAR_18;

 VAR_15 = FUNC_6(sizeof(*VAR_15));
 if (VAR_15 == ((void*)0))
  return ((void*)0);

 switch (VAR_11) {
 case 128:
  VAR_17 = VAR_4;
  VAR_16 = FUNC_2(&VAR_15->enc, VAR_17, VAR_7,
           0);
  FUNC_2(&VAR_15->dec, VAR_17, VAR_7, 0);
  break;
 case 131:
  if (VAR_14 == 24)
   VAR_17 = VAR_2;
  else if (VAR_14 == 32)
   VAR_17 = VAR_3;
  else
   VAR_17 = VAR_1;
  VAR_16 = FUNC_2(&VAR_15->enc, VAR_17, VAR_6, 0);
  FUNC_2(&VAR_15->dec, VAR_17, VAR_6, 0);
  break;
 case 132:
  VAR_17 = VAR_0;
  VAR_16 = FUNC_2(&VAR_15->enc, VAR_17, VAR_6, 0);
  FUNC_2(&VAR_15->dec, VAR_17, VAR_6, 0);
  break;
 case 130:
  VAR_17 = VAR_5;
  VAR_16 = FUNC_2(&VAR_15->enc, VAR_17, VAR_6, 0);
  FUNC_2(&VAR_15->dec, VAR_17, VAR_6, 0);
  break;
 case 129:
  if (VAR_14 == 5)
   VAR_17 = VAR_9;
  else
   VAR_17 = VAR_8;
  VAR_16 = FUNC_2(&VAR_15->enc, VAR_17, VAR_6, 0);
  FUNC_2(&VAR_15->dec, VAR_17, VAR_6, 0);
  break;
 default:
  FUNC_5(VAR_15);
  return ((void*)0);
 }

 if (VAR_16 != VAR_10) {
  FUNC_5(VAR_15);
  return ((void*)0);
 }

 if (FUNC_4(VAR_15->enc, VAR_13, VAR_14) != VAR_10 ||
     FUNC_4(VAR_15->dec, VAR_13, VAR_14) != VAR_10) {
  FUNC_0(VAR_15->enc);
  FUNC_0(VAR_15->dec);
  FUNC_5(VAR_15);
  return ((void*)0);
 }

 VAR_18 = FUNC_1(VAR_17);
 if (FUNC_3(VAR_15->enc, VAR_12, VAR_18) != VAR_10 ||
     FUNC_3(VAR_15->dec, VAR_12, VAR_18) != VAR_10) {
  FUNC_0(VAR_15->enc);
  FUNC_0(VAR_15->dec);
  FUNC_5(VAR_15);
  return ((void*)0);
 }

 return VAR_15;
}
