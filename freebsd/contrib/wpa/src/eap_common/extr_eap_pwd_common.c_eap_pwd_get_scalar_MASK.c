
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_bignum {int dummy; } ;
struct TYPE_3__ {int group; } ;
typedef TYPE_1__ EAP_PWD_group ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum const*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_2 (int const*,size_t) ;
 scalar_t__ FUNC_3 (struct crypto_bignum*) ;
 scalar_t__ FUNC_4 (struct crypto_bignum*) ;
 struct crypto_bignum* FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

struct crypto_bignum * FUNC_8(EAP_PWD_group *VAR_1, const u8 *VAR_2)
{
 struct crypto_bignum *VAR_3;
 const struct crypto_bignum *VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_5(VAR_1->group);
 VAR_5 = FUNC_6(VAR_1->group);


 VAR_3 = FUNC_2(VAR_2, VAR_5);
 if (!VAR_3 || FUNC_4(VAR_3) ||
     FUNC_3(VAR_3) ||
     FUNC_0(VAR_3, VAR_4) >= 0) {
  FUNC_7(VAR_0, "EAP-pwd: received scalar is invalid");
  FUNC_1(VAR_3, 0);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
