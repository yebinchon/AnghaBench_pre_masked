
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sae_data {TYPE_1__* tmp; } ;
struct crypto_bignum {int dummy; } ;
typedef int one_bin ;
struct TYPE_2__ {int prime_len; int prime; int order; struct crypto_bignum* peer_commit_element_ffc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_bignum*,struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 scalar_t__ FUNC_2 (struct crypto_bignum*,int ,int ,struct crypto_bignum*) ;
 struct crypto_bignum* FUNC_3 () ;
 void* FUNC_4 (int const*,int) ;
 scalar_t__ FUNC_5 (struct crypto_bignum*) ;
 scalar_t__ FUNC_6 (struct crypto_bignum*) ;
 scalar_t__ FUNC_7 (int ,struct crypto_bignum*,struct crypto_bignum*) ;
 int FUNC_8 (int ,char*,int const*,int) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static u16 FUNC_10(struct sae_data *VAR_3, const u8 **VAR_4,
     const u8 *VAR_5)
{
 struct crypto_bignum *VAR_6, *VAR_7;
 const u8 VAR_8[1] = { 0x01 };

 if (VAR_3->tmp->prime_len > VAR_5 - *VAR_4) {
  FUNC_9(VAR_0, "SAE: Not enough data for "
      "commit-element");
  return VAR_2;
 }
 FUNC_8(VAR_0, "SAE: Peer commit-element", *VAR_4,
      VAR_3->tmp->prime_len);

 FUNC_1(VAR_3->tmp->peer_commit_element_ffc, 0);
 VAR_3->tmp->peer_commit_element_ffc =
  FUNC_4(*VAR_4, VAR_3->tmp->prime_len);
 if (VAR_3->tmp->peer_commit_element_ffc == ((void*)0))
  return VAR_2;

 VAR_6 = FUNC_3();
 VAR_7 = FUNC_4(VAR_8, sizeof(VAR_8));
 if (!VAR_6 || !VAR_7 ||
     FUNC_7(VAR_3->tmp->prime, VAR_7, VAR_6) ||
     FUNC_6(VAR_3->tmp->peer_commit_element_ffc) ||
     FUNC_5(VAR_3->tmp->peer_commit_element_ffc) ||
     FUNC_0(VAR_3->tmp->peer_commit_element_ffc, VAR_6) >= 0) {
  FUNC_1(VAR_6, 0);
  FUNC_1(VAR_7, 0);
  FUNC_9(VAR_0, "SAE: Invalid peer element");
  return VAR_2;
 }
 FUNC_1(VAR_7, 0);


 if (FUNC_2(VAR_3->tmp->peer_commit_element_ffc,
      VAR_3->tmp->order, VAR_3->tmp->prime, VAR_6) < 0 ||
     !FUNC_5(VAR_6)) {
  FUNC_9(VAR_0, "SAE: Invalid peer element (scalar-op)");
  FUNC_1(VAR_6, 0);
  return VAR_2;
 }
 FUNC_1(VAR_6, 0);

 *VAR_4 += VAR_3->tmp->prime_len;

 return VAR_1;
}
