
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;
typedef int mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int *) ;

struct crypto_bignum * FUNC_4(const u8 *VAR_1, size_t VAR_2)
{
 mp_int *VAR_3;

 if (FUNC_0())
  return ((void*)0);

 VAR_3 = (mp_int *) FUNC_1();
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_2(VAR_3, VAR_1, VAR_2) != VAR_0) {
  FUNC_3(VAR_3);
  VAR_3 = ((void*)0);
 }

 return (struct crypto_bignum *) VAR_3;
}
