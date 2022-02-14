
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int x_cand_bin ;
typedef int x_bin ;
typedef int u8 ;
struct sae_data {TYPE_1__* tmp; int group; } ;
struct crypto_bignum {int dummy; } ;
typedef int qr_bin ;
typedef int qnr_bin ;
typedef int pwd_seed ;
typedef int prime ;
typedef int counter ;
typedef int addrs ;
struct TYPE_2__ {size_t prime_len; scalar_t__ pwe_ecc; int ec; struct crypto_bignum* prime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int,int*,int const*,size_t,int*) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (struct crypto_bignum*,int) ;
 struct crypto_bignum* FUNC_4 (int*,size_t) ;
 scalar_t__ FUNC_5 (struct crypto_bignum*,int*,int,size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,struct crypto_bignum*,int) ;
 scalar_t__ FUNC_8 (struct crypto_bignum*,struct crypto_bignum**,struct crypto_bignum**) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int*,int,size_t,int const**,size_t*,int*) ;
 int FUNC_11 (int*) ;
 int* FUNC_12 (size_t) ;
 int FUNC_13 (int*,int ,int) ;
 size_t FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (int*,size_t) ;
 int FUNC_16 (int const*,int const*,int*) ;
 int FUNC_17 (struct sae_data*,int*,int*,int*,int*,int*) ;
 int FUNC_18 (int ,char*,int const*,size_t) ;
 int FUNC_19 (int ,char*,...) ;

__attribute__((used)) static int FUNC_20(struct sae_data *VAR_4, const u8 *VAR_5,
         const u8 *VAR_6, const u8 *VAR_7,
         size_t VAR_8, const char *VAR_9)
{
 u8 VAR_10, VAR_11;
 u8 VAR_12[2 * VAR_0];
 const u8 *VAR_13[3];
 size_t VAR_14[3];
 size_t VAR_15;
 u8 *VAR_16, *VAR_17;
 int VAR_18 = 0;
 u8 VAR_19[VAR_2];
 size_t VAR_20;
 struct crypto_bignum *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
 u8 VAR_24[VAR_2];
 u8 VAR_25[VAR_2];
 u8 VAR_26[VAR_2];
 u8 VAR_27[VAR_2];
 int VAR_28 = -1;
 u8 VAR_29 = 0;


 FUNC_13(VAR_24, 0, sizeof(VAR_24));

 VAR_16 = FUNC_12(VAR_8);
 VAR_17 = FUNC_12(VAR_8);
 if (!VAR_16 || !VAR_17 ||
     FUNC_15(VAR_16, VAR_8) < 0)
  goto fail;

 VAR_20 = VAR_4->tmp->prime_len;
 if (FUNC_5(VAR_4->tmp->prime, VAR_19, sizeof(VAR_19),
     VAR_20) < 0)
  goto fail;





 if (FUNC_8(VAR_4->tmp->prime, &VAR_22, &VAR_23) < 0 ||
     FUNC_5(VAR_22, VAR_26, sizeof(VAR_26), VAR_20) < 0 ||
     FUNC_5(VAR_23, VAR_27, sizeof(VAR_27), VAR_20) < 0)
  goto fail;

 FUNC_18(VAR_1, "SAE: password",
         VAR_7, VAR_8);
 if (VAR_9)
  FUNC_19(VAR_1, "SAE: password identifier: %s",
      VAR_9);







 FUNC_16(VAR_5, VAR_6, VAR_12);

 VAR_13[0] = VAR_17;
 VAR_14[0] = VAR_8;
 VAR_15 = 1;
 if (VAR_9) {
  VAR_13[VAR_15] = (const u8 *) VAR_9;
  VAR_14[VAR_15] = FUNC_14(VAR_9);
  VAR_15++;
 }
 VAR_13[VAR_15] = &VAR_10;
 VAR_14[VAR_15] = sizeof(VAR_10);
 VAR_15++;






 VAR_11 = FUNC_9(VAR_4->group);

 for (VAR_10 = 1; VAR_10 <= VAR_11 || !VAR_29; VAR_10++) {
  u8 VAR_30[VAR_3];

  if (VAR_10 > 200) {

   FUNC_19(VAR_1, "SAE: Failed to derive PWE");
   break;
  }

  FUNC_19(VAR_1, "SAE: counter = %03u", VAR_10);
  FUNC_1(VAR_29, VAR_16, VAR_7,
          VAR_8, VAR_17);
  if (FUNC_10(VAR_12, sizeof(VAR_12), VAR_15,
           VAR_13, VAR_14, VAR_30) < 0)
   break;

  VAR_28 = FUNC_17(VAR_4, VAR_30,
         VAR_19, VAR_26, VAR_27, VAR_25);
  FUNC_1(VAR_29, VAR_24, VAR_25, VAR_20,
          VAR_24);
  VAR_18 = FUNC_2(
   VAR_29, VAR_18,
   VAR_30[VAR_3 - 1] & 0x01);
  FUNC_13(VAR_30, 0, sizeof(VAR_30));
  if (VAR_28 < 0)
   goto fail;
  VAR_29 |= VAR_28 * 0xff;
  FUNC_19(VAR_1, "SAE: pwd-seed result %d found=0x%02x",
      VAR_28, VAR_29);
 }

 if (!VAR_29) {
  FUNC_19(VAR_1, "SAE: Could not generate PWE");
  VAR_28 = -1;
  goto fail;
 }

 VAR_21 = FUNC_4(VAR_24, VAR_20);
 if (!VAR_21) {
  VAR_28 = -1;
  goto fail;
 }

 if (!VAR_4->tmp->pwe_ecc)
  VAR_4->tmp->pwe_ecc = FUNC_6(VAR_4->tmp->ec);
 if (!VAR_4->tmp->pwe_ecc)
  VAR_28 = -1;
 else
  VAR_28 = FUNC_7(VAR_4->tmp->ec,
          VAR_4->tmp->pwe_ecc, VAR_21,
          VAR_18);
 if (VAR_28 < 0) {




  FUNC_19(VAR_1, "SAE: Could not solve y");
 }

fail:
 FUNC_3(VAR_22, 0);
 FUNC_3(VAR_23, 0);
 FUNC_11(VAR_16);
 FUNC_0(VAR_17, VAR_8);
 FUNC_3(VAR_21, 1);
 FUNC_13(VAR_24, 0, sizeof(VAR_24));
 FUNC_13(VAR_25, 0, sizeof(VAR_25));

 return VAR_28;
}
