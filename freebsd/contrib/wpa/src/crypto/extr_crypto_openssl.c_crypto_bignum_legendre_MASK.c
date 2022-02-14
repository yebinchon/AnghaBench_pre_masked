
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int *,int const*,int *,int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int const*,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 unsigned int FUNC_11 (int ,int) ;
 int FUNC_12 (unsigned int,int,int) ;

int FUNC_13(const struct crypto_bignum *VAR_0,
      const struct crypto_bignum *VAR_1)
{
 BN_CTX *VAR_2;
 BIGNUM *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 int VAR_5 = -2;
 unsigned int VAR_6;

 if (FUNC_10())
  return -2;

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  return -2;

 VAR_3 = FUNC_6();
 VAR_4 = FUNC_6();
 if (!VAR_3 || !VAR_4 ||

     !FUNC_8(VAR_3, (const BIGNUM *) VAR_1, FUNC_9()) ||
     !FUNC_7(VAR_3, VAR_3) ||
     !FUNC_5(VAR_4, (const BIGNUM *) VAR_0, VAR_3,
           (const BIGNUM *) VAR_1, VAR_2, ((void*)0)))
  goto fail;



 VAR_5 = -1;
 VAR_6 = FUNC_11(FUNC_3(VAR_4, 1), 1);
 VAR_5 = FUNC_12(VAR_6, 1, VAR_5);
 VAR_6 = FUNC_11(FUNC_4(VAR_4), 1);
 VAR_5 = FUNC_12(VAR_6, 0, VAR_5);

fail:
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 FUNC_0(VAR_2);
 return VAR_5;
}
