
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int arcfour_ctx; } ;
struct crypto_cipher {int alg; TYPE_1__ u; } ;
typedef enum crypto_cipher_alg { ____Placeholder_crypto_cipher_alg } crypto_cipher_alg ;



 int FUNC_0 (int *,size_t,int const*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 struct crypto_cipher* FUNC_2 (int) ;

struct crypto_cipher * FUNC_3(enum crypto_cipher_alg VAR_0,
       const u8 *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 struct crypto_cipher *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->alg = VAR_0;

 switch (VAR_0) {
 case 128:
  FUNC_0(&VAR_4->u.arcfour_ctx, VAR_3, VAR_2);
  break;
 default:
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
