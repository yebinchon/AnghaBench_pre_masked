
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mp_int ;
typedef int WC_RNG ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(struct crypto_bignum *VAR_0, const struct crypto_bignum *VAR_1)
{
 int VAR_2 = 0;
 WC_RNG VAR_3;

 if (FUNC_0())
  return -1;
 if (FUNC_5(&VAR_3) != 0)
  return -1;
 if (FUNC_3((mp_int *) VAR_0,
     (FUNC_1((mp_int *) VAR_1) + 7) / 8 * 2,
     &VAR_3, ((void*)0)) != 0)
  VAR_2 = -1;
 if (VAR_2 == 0 &&
     FUNC_2((mp_int *) VAR_0, (mp_int *) VAR_1, (mp_int *) VAR_0) != 0)
  VAR_2 = -1;
 FUNC_4(&VAR_3);
 return VAR_2;
}
