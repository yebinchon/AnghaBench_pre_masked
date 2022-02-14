
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int arcfour_ctx; } ;
struct crypto_cipher {int alg; TYPE_1__ u; } ;



 int FUNC_0 (int *,size_t,int *,int const*) ;

int FUNC_1(struct crypto_cipher *VAR_0, const u8 *VAR_1,
     u8 *VAR_2, size_t VAR_3)
{
 switch (VAR_0->alg) {
 case 128:
  FUNC_0(&VAR_0->u.arcfour_ctx, VAR_3, VAR_2, VAR_1);
  break;
 default:
  return -1;
 }

 return 0;
}
