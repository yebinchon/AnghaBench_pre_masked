
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {scalar_t__ dh; scalar_t__ ec; void* own_commit_scalar; void* sae_rand; int order; } ;


 int FUNC_0 (struct crypto_bignum*,int) ;
 void* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,void*,struct crypto_bignum*,void*) ;
 scalar_t__ FUNC_3 (struct sae_data*,struct crypto_bignum*) ;
 scalar_t__ FUNC_4 (struct sae_data*,struct crypto_bignum*) ;

__attribute__((used)) static int FUNC_5(struct sae_data *VAR_0)
{
 struct crypto_bignum *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1();
 if (!VAR_0->tmp->sae_rand)
  VAR_0->tmp->sae_rand = FUNC_1();
 if (!VAR_0->tmp->own_commit_scalar)
  VAR_0->tmp->own_commit_scalar = FUNC_1();
 VAR_2 = !VAR_1 || !VAR_0->tmp->sae_rand || !VAR_0->tmp->own_commit_scalar ||
  FUNC_2(VAR_0->tmp->order, VAR_0->tmp->sae_rand,
       VAR_1,
       VAR_0->tmp->own_commit_scalar) < 0 ||
  (VAR_0->tmp->ec &&
   FUNC_3(VAR_0, VAR_1) < 0) ||
  (VAR_0->tmp->dh &&
   FUNC_4(VAR_0, VAR_1) < 0);
 FUNC_0(VAR_1, 1);
 return VAR_2 ? -1 : 0;
}
