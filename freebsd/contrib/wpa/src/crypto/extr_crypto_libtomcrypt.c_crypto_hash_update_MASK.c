
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int hmac; int md; } ;
struct crypto_hash {int error; int alg; TYPE_1__ u; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;

void FUNC_3(struct crypto_hash *VAR_1, const u8 *VAR_2, size_t VAR_3)
{
 if (VAR_1 == ((void*)0) || VAR_1->error)
  return;

 switch (VAR_1->alg) {
 case 129:
  VAR_1->error = FUNC_1(&VAR_1->u.md, VAR_2, VAR_3) != VAR_0;
  break;
 case 128:
  VAR_1->error = FUNC_2(&VAR_1->u.md, VAR_2, VAR_3) != VAR_0;
  break;
 case 131:
 case 130:
  VAR_1->error = FUNC_0(&VAR_1->u.hmac, VAR_2, VAR_3) != VAR_0;
  break;
 }
}
