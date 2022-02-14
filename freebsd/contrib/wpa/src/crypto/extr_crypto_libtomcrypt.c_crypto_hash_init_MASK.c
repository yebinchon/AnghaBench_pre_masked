
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hmac; int md; } ;
struct crypto_hash {int alg; TYPE_1__ u; } ;
typedef enum crypto_hash_alg { ____Placeholder_crypto_hash_alg } crypto_hash_alg ;






 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int const*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct crypto_hash*) ;
 struct crypto_hash* FUNC_4 (int) ;
 int FUNC_5 (int *) ;

struct crypto_hash * FUNC_6(enum crypto_hash_alg VAR_1, const u8 *VAR_2,
          size_t VAR_3)
{
 struct crypto_hash *VAR_4;

 VAR_4 = FUNC_4(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->alg = VAR_1;

 switch (VAR_1) {
 case 129:
  if (FUNC_2(&VAR_4->u.md) != VAR_0)
   goto fail;
  break;
 case 128:
  if (FUNC_5(&VAR_4->u.md) != VAR_0)
   goto fail;
  break;
 case 131:
  if (FUNC_1(&VAR_4->u.hmac, FUNC_0("md5"), VAR_2, VAR_3) !=
      VAR_0)
   goto fail;
  break;
 case 130:
  if (FUNC_1(&VAR_4->u.hmac, FUNC_0("sha1"), VAR_2, VAR_3) !=
      VAR_0)
   goto fail;
  break;
 default:
  goto fail;
 }

 return VAR_4;

fail:
 FUNC_3(VAR_4);
 return ((void*)0);
}
