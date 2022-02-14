
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int cbc; int dk; int ek; } ;
struct TYPE_8__ {int cbc; int key; } ;
struct TYPE_7__ {int cbc; int * ctx_enc; int * ctx_dec; } ;
struct TYPE_6__ {size_t keylen; int key; } ;
struct TYPE_10__ {TYPE_4__ des; TYPE_3__ des3; TYPE_2__ aes; TYPE_1__ rc4; } ;
struct crypto_cipher {int alg; TYPE_5__ u; } ;
typedef enum crypto_cipher_alg { ____Placeholder_crypto_cipher_alg } crypto_cipher_alg ;


 int VAR_0 ;




 int * FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (int const*,int ,int ) ;
 int FUNC_5 (struct crypto_cipher*) ;
 int FUNC_6 (int ,int const*,int) ;
 struct crypto_cipher* FUNC_7 (int) ;

struct crypto_cipher * FUNC_8(enum crypto_cipher_alg VAR_1,
       const u8 *VAR_2, const u8 *VAR_3,
       size_t VAR_4)
{
 struct crypto_cipher *VAR_5;

 VAR_5 = FUNC_7(sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->alg = VAR_1;

 switch (VAR_1) {
 case 128:
  if (VAR_4 > sizeof(VAR_5->u.rc4.key)) {
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  VAR_5->u.rc4.keylen = VAR_4;
  FUNC_6(VAR_5->u.rc4.key, VAR_3, VAR_4);
  break;
 case 130:
  VAR_5->u.aes.ctx_enc = FUNC_2(VAR_3, VAR_4);
  if (VAR_5->u.aes.ctx_enc == ((void*)0)) {
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  VAR_5->u.aes.ctx_dec = FUNC_0(VAR_3, VAR_4);
  if (VAR_5->u.aes.ctx_dec == ((void*)0)) {
   FUNC_1(VAR_5->u.aes.ctx_enc);
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  FUNC_6(VAR_5->u.aes.cbc, VAR_2, VAR_0);
  break;
 case 131:
  if (VAR_4 != 24) {
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  FUNC_3(VAR_3, &VAR_5->u.des3.key);
  FUNC_6(VAR_5->u.des3.cbc, VAR_2, 8);
  break;
 case 129:
  if (VAR_4 != 8) {
   FUNC_5(VAR_5);
   return ((void*)0);
  }
  FUNC_4(VAR_3, VAR_5->u.des.ek, VAR_5->u.des.dk);
  FUNC_6(VAR_5->u.des.cbc, VAR_2, 8);
  break;
 default:
  FUNC_5(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
