
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_bignum {int dummy; } ;
typedef int BIGNUM ;


 int FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int *,size_t,int const*) ;
 int FUNC_2 (int const*,int *,size_t) ;
 int FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(const struct crypto_bignum *VAR_0,
    u8 *VAR_1, size_t VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;

 if (FUNC_4())
  return -1;

 if (VAR_3 > VAR_2)
  return -1;

 if (VAR_3) {
 }

 VAR_4 = FUNC_3((const BIGNUM *) VAR_0);
 if ((size_t) VAR_4 > VAR_2)
  return -1;
 if (VAR_3 > (size_t) VAR_4)
  VAR_5 = VAR_3 - VAR_4;
 else
  VAR_5 = 0;

 FUNC_5(VAR_1, 0, VAR_5);
 FUNC_0((const BIGNUM *) VAR_0, VAR_1 + VAR_5);

 return VAR_4 + VAR_5;
}
