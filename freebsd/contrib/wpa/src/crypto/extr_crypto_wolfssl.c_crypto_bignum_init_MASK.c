
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

struct crypto_bignum * FUNC_4(void)
{
 mp_int *VAR_1;

 if (FUNC_0())
  return ((void*)0);

 VAR_1 = FUNC_3(sizeof(*VAR_1));
 if (!VAR_1 || FUNC_1(VAR_1) != VAR_0) {
  FUNC_2(VAR_1);
  VAR_1 = ((void*)0);
 }

 return (struct crypto_bignum *) VAR_1;
}
