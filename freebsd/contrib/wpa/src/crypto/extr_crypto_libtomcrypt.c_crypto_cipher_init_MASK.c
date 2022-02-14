
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {size_t keylen; int key; } ;
struct TYPE_4__ {int cbc; TYPE_1__ rc4; } ;
struct crypto_cipher {int rc4; TYPE_2__ u; } ;
typedef enum crypto_cipher_alg { ____Placeholder_crypto_cipher_alg } crypto_cipher_alg ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const*,int const*,size_t,int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct crypto_cipher*) ;
 int FUNC_4 (int ,int const*,size_t) ;
 struct crypto_cipher* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,int ) ;

struct crypto_cipher * FUNC_7(enum crypto_cipher_alg VAR_2,
       const u8 *VAR_3, const u8 *VAR_4,
       size_t VAR_5)
{
 struct crypto_cipher *VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 switch (VAR_2) {
 case 131:
  VAR_7 = FUNC_2("aes");
  break;
 case 132:
  VAR_7 = FUNC_2("3des");
  break;
 case 130:
  VAR_7 = FUNC_2("des");
  break;
 case 129:
  VAR_7 = FUNC_2("rc2");
  break;
 case 128:
  VAR_7 = -1;
  VAR_9 = 1;
  break;
 default:
  return ((void*)0);
 }

 VAR_6 = FUNC_5(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_9) {
  VAR_6->rc4 = 1;
  if (VAR_5 > sizeof(VAR_6->u.rc4.key)) {
   FUNC_3(VAR_6);
   return ((void*)0);
  }
  VAR_6->u.rc4.keylen = VAR_5;
  FUNC_4(VAR_6->u.rc4.key, VAR_4, VAR_5);
 } else {
  VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, 0, &VAR_6->u.cbc);
  if (VAR_8 != VAR_0) {
   FUNC_6(VAR_1, "LibTomCrypt: Cipher start "
       "failed: %s", FUNC_1(VAR_8));
   FUNC_3(VAR_6);
   return ((void*)0);
  }
 }

 return VAR_6;
}
