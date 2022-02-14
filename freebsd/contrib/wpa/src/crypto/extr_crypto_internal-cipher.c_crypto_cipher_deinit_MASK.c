
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx_dec; int ctx_enc; } ;
struct TYPE_4__ {TYPE_1__ aes; } ;
struct crypto_cipher {int alg; TYPE_2__ u; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct crypto_cipher*) ;

void FUNC_3(struct crypto_cipher *VAR_0)
{
 switch (VAR_0->alg) {
 case 128:
  FUNC_1(VAR_0->u.aes.ctx_enc);
  FUNC_0(VAR_0->u.aes.ctx_dec);
  break;
 case 129:
  break;
 default:
  break;
 }
 FUNC_2(VAR_0);
}
