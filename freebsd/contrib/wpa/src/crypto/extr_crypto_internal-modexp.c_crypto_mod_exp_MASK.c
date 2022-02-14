
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bignum {int dummy; } ;


 int FUNC_0 (struct bignum*) ;
 scalar_t__ FUNC_1 (struct bignum*,struct bignum*,struct bignum*,struct bignum*) ;
 int FUNC_2 (struct bignum*,int *,size_t*) ;
 struct bignum* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct bignum*,int const*,size_t) ;

int FUNC_5(const u8 *VAR_0, size_t VAR_1,
     const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     u8 *VAR_6, size_t *VAR_7)
{
 struct bignum *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = -1;

 VAR_8 = FUNC_3();
 VAR_9 = FUNC_3();
 VAR_10 = FUNC_3();
 VAR_11 = FUNC_3();

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
     VAR_11 == ((void*)0))
  goto error;

 if (FUNC_4(VAR_8, VAR_0, VAR_1) < 0 ||
     FUNC_4(VAR_9, VAR_2, VAR_3) < 0 ||
     FUNC_4(VAR_10, VAR_4, VAR_5) < 0)
  goto error;

 if (FUNC_1(VAR_8, VAR_9, VAR_10, VAR_11) < 0)
  goto error;

 VAR_12 = FUNC_2(VAR_11, VAR_6, VAR_7);

error:
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);
 return VAR_12;
}
