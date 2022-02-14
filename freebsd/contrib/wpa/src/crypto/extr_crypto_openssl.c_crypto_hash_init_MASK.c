
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_hash {int ctx; } ;
typedef enum crypto_hash_alg { ____Placeholder_crypto_hash_alg } crypto_hash_alg ;
typedef int EVP_MD ;





 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int const*,size_t,int const*,int *) ;
 int FUNC_6 (struct crypto_hash*,int) ;
 int FUNC_7 (struct crypto_hash*) ;
 struct crypto_hash* FUNC_8 (int) ;

struct crypto_hash * FUNC_9(enum crypto_hash_alg VAR_0, const u8 *VAR_1,
          size_t VAR_2)
{
 struct crypto_hash *VAR_3;
 const EVP_MD *VAR_4;

 switch (VAR_0) {

 case 130:
  VAR_4 = FUNC_0();
  break;


 case 129:
  VAR_4 = FUNC_1();
  break;
 default:
  return ((void*)0);
 }

 VAR_3 = FUNC_8(sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->ctx = FUNC_4();
 if (!VAR_3->ctx) {
  FUNC_7(VAR_3);
  return ((void*)0);
 }

 if (FUNC_5(VAR_3->ctx, VAR_1, VAR_2, VAR_4, ((void*)0)) != 1) {
  FUNC_3(VAR_3->ctx);
  FUNC_6(VAR_3, sizeof(*VAR_3));
  return ((void*)0);
 }

 return VAR_3;
}
