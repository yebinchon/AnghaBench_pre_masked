
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ec_point {int dummy; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_3__ {int group; } ;
typedef TYPE_1__ EAP_PWD_group ;


 int VAR_0 ;
 struct crypto_bignum* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_ec_point*,int ) ;
 struct crypto_ec_point* FUNC_2 (int ,int const*) ;
 scalar_t__ FUNC_3 (int ,struct crypto_ec_point*) ;
 int FUNC_4 (int ,struct crypto_ec_point*) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct crypto_bignum const*,int const*,size_t) ;
 int FUNC_7 (int ,char*) ;

struct crypto_ec_point * FUNC_8(EAP_PWD_group *VAR_1,
          const u8 *VAR_2)
{
 struct crypto_ec_point *VAR_3;
 const struct crypto_bignum *VAR_4;
 size_t VAR_5;

 VAR_4 = FUNC_0(VAR_1->group);
 VAR_5 = FUNC_5(VAR_1->group);


 if (!FUNC_6(VAR_4, VAR_2, VAR_5) ||
     !FUNC_6(VAR_4, VAR_2 + VAR_5, VAR_5)) {
  FUNC_7(VAR_0, "EAP-pwd: Invalid coordinate in element");
  return ((void*)0);
 }

 VAR_3 = FUNC_2(VAR_1->group, VAR_2);
 if (!VAR_3) {
  FUNC_7(VAR_0, "EAP-pwd: EC point from element failed");
  return ((void*)0);
 }


 if (!FUNC_4(VAR_1->group, VAR_3) ||
     FUNC_3(VAR_1->group, VAR_3)) {
  FUNC_7(VAR_0, "EAP-pwd: Invalid element");
  goto fail;
 }

out:
 return VAR_3;
fail:
 FUNC_1(VAR_3, 0);
 VAR_3 = ((void*)0);
 goto out;
}
