
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; int group; } ;
struct crypto_bignum {int dummy; } ;
typedef int counter ;
typedef int addrs ;
struct TYPE_2__ {int prime_len; struct crypto_bignum* pwe_ffc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,size_t) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int*,int*,size_t,int*) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (struct crypto_bignum*,int) ;
 struct crypto_bignum* FUNC_5 () ;
 struct crypto_bignum* FUNC_6 (int*,size_t) ;
 scalar_t__ FUNC_7 (struct crypto_bignum*,int*,size_t,size_t) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int*,int,size_t,int const**,size_t*,int*) ;
 size_t FUNC_10 (char const*) ;
 int* FUNC_11 (size_t) ;
 int FUNC_12 (int const*,int const*,int*) ;
 int FUNC_13 (struct sae_data*,int*,struct crypto_bignum*) ;
 int FUNC_14 (int ,char*,int const*,size_t) ;
 int FUNC_15 (int ,char*,...) ;

__attribute__((used)) static int FUNC_16(struct sae_data *VAR_3, const u8 *VAR_4,
         const u8 *VAR_5, const u8 *VAR_6,
         size_t VAR_7, const char *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11 = 0;
 u8 VAR_12[2 * VAR_0];
 const u8 *VAR_13[3];
 size_t VAR_14[3];
 size_t VAR_15;
 u8 VAR_16 = 0;

 u8 VAR_17;
 struct crypto_bignum *VAR_18;
 size_t VAR_19 = VAR_3->tmp->prime_len * 8;
 u8 *VAR_20;

 FUNC_4(VAR_3->tmp->pwe_ffc, 1);
 VAR_3->tmp->pwe_ffc = ((void*)0);



 VAR_20 = FUNC_11(VAR_19 * 2);
 VAR_18 = FUNC_5();
 if (!VAR_20 || !VAR_18)
  goto fail;

 FUNC_14(VAR_1, "SAE: password",
         VAR_6, VAR_7);






 FUNC_12(VAR_4, VAR_5, VAR_12);

 VAR_13[0] = VAR_6;
 VAR_14[0] = VAR_7;
 VAR_15 = 1;
 if (VAR_8) {
  VAR_13[VAR_15] = (const u8 *) VAR_8;
  VAR_14[VAR_15] = FUNC_10(VAR_8);
  VAR_15++;
 }
 VAR_13[VAR_15] = &VAR_9;
 VAR_14[VAR_15] = sizeof(VAR_9);
 VAR_15++;

 VAR_10 = FUNC_8(VAR_3->group);

 for (VAR_9 = 1; VAR_9 <= VAR_10 || !VAR_16; VAR_9++) {
  u8 VAR_21[VAR_2];
  int VAR_22;

  if (VAR_9 > 200) {

   FUNC_15(VAR_1, "SAE: Failed to derive PWE");
   break;
  }

  FUNC_15(VAR_1, "SAE: counter = %02u", VAR_9);
  if (FUNC_9(VAR_12, sizeof(VAR_12), VAR_15,
           VAR_13, VAR_14, VAR_21) < 0)
   break;
  VAR_22 = FUNC_13(VAR_3, VAR_21, VAR_18);


  if (VAR_22 < 0)
   break;



  if (FUNC_7(VAR_18, VAR_20 + VAR_19, VAR_19,
      VAR_19) < 0)
   break;
  FUNC_2(VAR_16, VAR_20, VAR_20 + VAR_19,
          VAR_19, VAR_20);
  VAR_11 = FUNC_3(VAR_16, VAR_11, VAR_9);
  VAR_17 = FUNC_1(VAR_22, 1);
  VAR_16 = FUNC_3(VAR_16, VAR_16, VAR_17);
 }

 if (!VAR_16)
  goto fail;

 FUNC_15(VAR_1, "SAE: Use PWE from counter = %02u", VAR_11);
 VAR_3->tmp->pwe_ffc = FUNC_6(VAR_20, VAR_19);
fail:
 FUNC_4(VAR_18, 1);
 FUNC_0(VAR_20, VAR_19 * 2);
 return VAR_3->tmp->pwe_ffc ? 0 : -1;
}
