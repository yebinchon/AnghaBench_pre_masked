
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u8 ;
struct sae_data {int * pmk; TYPE_1__* tmp; int * pmkid; int peer_commit_scalar; } ;
struct crypto_bignum {int dummy; } ;
typedef int null_key ;
typedef int keyseed ;
typedef int keys ;
struct TYPE_2__ {int * kck; int order_len; int order; int own_commit_scalar; int prime_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,struct crypto_bignum*) ;
 int FUNC_1 (struct crypto_bignum*,int ) ;
 struct crypto_bignum* FUNC_2 () ;
 int FUNC_3 (struct crypto_bignum*,int ,struct crypto_bignum*) ;
 int FUNC_4 (struct crypto_bignum*,int *,int,int ) ;
 int FUNC_5 (int *,int,int const*,int ,int *) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int *,int,char*,int *,int ,int *,int) ;
 int FUNC_9 (int ,char*,int *,int) ;
 int FUNC_10 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_11(struct sae_data *VAR_7, const u8 *VAR_8)
{
 u8 VAR_9[VAR_2], VAR_10[VAR_3];
 u8 VAR_11[VAR_6];
 u8 VAR_12[VAR_1 + VAR_5];
 struct crypto_bignum *VAR_13;
 int VAR_14 = -1;

 VAR_13 = FUNC_2();
 if (VAR_13 == ((void*)0))
  goto fail;







 FUNC_7(VAR_9, 0, sizeof(VAR_9));
 FUNC_5(VAR_9, sizeof(VAR_9), VAR_8, VAR_7->tmp->prime_len,
      VAR_11);
 FUNC_10(VAR_0, "SAE: keyseed", VAR_11, sizeof(VAR_11));

 FUNC_0(VAR_7->tmp->own_commit_scalar, VAR_7->peer_commit_scalar,
     VAR_13);
 FUNC_3(VAR_13, VAR_7->tmp->order, VAR_13);






 FUNC_4(VAR_13, VAR_10, sizeof(VAR_10), VAR_7->tmp->order_len);
 FUNC_9(VAR_0, "SAE: PMKID", VAR_10, VAR_4);
 if (FUNC_8(VAR_11, sizeof(VAR_11), "SAE KCK and PMK",
         VAR_10, VAR_7->tmp->order_len, VAR_12, sizeof(VAR_12)) < 0)
  goto fail;
 FUNC_7(VAR_11, 0, sizeof(VAR_11));
 FUNC_6(VAR_7->tmp->kck, VAR_12, VAR_1);
 FUNC_6(VAR_7->pmk, VAR_12 + VAR_1, VAR_5);
 FUNC_6(VAR_7->pmkid, VAR_10, VAR_4);
 FUNC_7(VAR_12, 0, sizeof(VAR_12));
 FUNC_10(VAR_0, "SAE: KCK", VAR_7->tmp->kck, VAR_1);
 FUNC_10(VAR_0, "SAE: PMK", VAR_7->pmk, VAR_5);

 VAR_14 = 0;
fail:
 FUNC_1(VAR_13, 0);
 return VAR_14;
}
