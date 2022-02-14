
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_bignum {int dummy; } ;
typedef int mp_int ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int *) ;

int FUNC_8(const struct crypto_bignum *VAR_1,
      const struct crypto_bignum *VAR_2)
{
 mp_int VAR_3;
 int VAR_4;
 int VAR_5 = -2;

 if (FUNC_0())
  return -2;

 if (FUNC_3(&VAR_3) != VAR_0)
  return -2;


 VAR_4 = FUNC_7((mp_int *) VAR_2, 1, &VAR_3);
 if (VAR_4 == VAR_0)
  FUNC_6(&VAR_3, 1);
 if (VAR_4 == VAR_0)
  VAR_4 = FUNC_2((mp_int *) VAR_1, &VAR_3, (mp_int *) VAR_2, &VAR_3);
 if (VAR_4 == VAR_0) {
  if (FUNC_4(&VAR_3))
   VAR_5 = 1;
  else if (FUNC_5(&VAR_3))
   VAR_5 = 0;
  else
   VAR_5 = -1;
 }

 FUNC_1(&VAR_3);
 return VAR_5;
}
