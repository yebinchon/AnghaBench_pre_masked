
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bignum {int dummy; } ;
typedef int mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bignum*) ;
 struct bignum* FUNC_2 (int) ;

struct bignum * FUNC_3(void)
{
 struct bignum *VAR_1 = FUNC_2(sizeof(mp_int));
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 if (FUNC_0((mp_int *) VAR_1) != VAR_0) {
  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
 return VAR_1;
}
