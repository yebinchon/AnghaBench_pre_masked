
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sae_data {scalar_t__ state; TYPE_1__* tmp; struct crypto_bignum* peer_commit_scalar; } ;
struct crypto_bignum {int dummy; } ;
struct TYPE_2__ {int prime_len; struct crypto_bignum* order; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_2 (int const*,int) ;
 scalar_t__ FUNC_3 (struct crypto_bignum*) ;
 scalar_t__ FUNC_4 (struct crypto_bignum*) ;
 int FUNC_5 (int ,char*,int const*,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static u16 FUNC_7(struct sae_data *VAR_4, const u8 **VAR_5,
       const u8 *VAR_6)
{
 struct crypto_bignum *VAR_7;

 if (VAR_4->tmp->prime_len > VAR_6 - *VAR_5) {
  FUNC_6(VAR_0, "SAE: Not enough data for scalar");
  return VAR_3;
 }

 VAR_7 = FUNC_2(*VAR_5, VAR_4->tmp->prime_len);
 if (VAR_7 == ((void*)0))
  return VAR_3;







 if (VAR_4->state == VAR_1 && VAR_4->peer_commit_scalar &&
     FUNC_0(VAR_4->peer_commit_scalar, VAR_7) == 0) {
  FUNC_6(VAR_0, "SAE: Do not accept re-use of previous "
      "peer-commit-scalar");
  FUNC_1(VAR_7, 0);
  return VAR_3;
 }


 if (FUNC_4(VAR_7) ||
     FUNC_3(VAR_7) ||
     FUNC_0(VAR_7, VAR_4->tmp->order) >= 0) {
  FUNC_6(VAR_0, "SAE: Invalid peer scalar");
  FUNC_1(VAR_7, 0);
  return VAR_3;
 }


 FUNC_1(VAR_4->peer_commit_scalar, 0);
 VAR_4->peer_commit_scalar = VAR_7;
 FUNC_5(VAR_0, "SAE: Peer commit-scalar",
      *VAR_5, VAR_4->tmp->prime_len);
 *VAR_5 += VAR_4->tmp->prime_len;

 return VAR_2;
}
