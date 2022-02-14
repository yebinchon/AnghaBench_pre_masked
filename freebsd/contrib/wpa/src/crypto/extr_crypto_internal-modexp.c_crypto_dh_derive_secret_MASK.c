
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bignum {int dummy; } ;


 scalar_t__ FUNC_0 (struct bignum*,int) ;
 int FUNC_1 (struct bignum*) ;
 scalar_t__ FUNC_2 (struct bignum*,struct bignum*,struct bignum*,struct bignum*) ;
 struct bignum* FUNC_3 () ;
 scalar_t__ FUNC_4 (struct bignum*,int const*,size_t) ;
 int FUNC_5 (int const*,size_t,int const*,size_t,int const*,size_t,int *,size_t*) ;
 scalar_t__ FUNC_6 (int const*,int const*,size_t) ;

int FUNC_7(u8 VAR_0, const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u8 *VAR_9, size_t *VAR_10)
{
 struct bignum *VAR_11;
 int VAR_12 = -1;

 if (VAR_8 > VAR_2 ||
     (VAR_8 == VAR_2 &&
      FUNC_6(VAR_7, VAR_1, VAR_2) >= 0))
  return -1;

 VAR_11 = FUNC_3();
 if (!VAR_11 || FUNC_4(VAR_11, VAR_7, VAR_8) < 0 ||
     FUNC_0(VAR_11, 1) <= 0)
  goto fail;

 if (VAR_3) {
  struct bignum *VAR_13, *VAR_14, *VAR_15;
  int VAR_16;


  VAR_13 = FUNC_3();
  VAR_14 = FUNC_3();
  VAR_15 = FUNC_3();
  VAR_16 = !VAR_13 || !VAR_14 || !VAR_15 ||
   FUNC_4(VAR_13, VAR_1, VAR_2) < 0 ||
   FUNC_4(VAR_14, VAR_3, VAR_4) < 0 ||
   FUNC_2(VAR_11, VAR_14, VAR_13, VAR_15) < 0 ||
   FUNC_0(VAR_15, 1) != 0;
  FUNC_1(VAR_13);
  FUNC_1(VAR_14);
  FUNC_1(VAR_15);
  if (VAR_16)
   goto fail;
 }

 VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_5, VAR_6,
        VAR_1, VAR_2, VAR_9, VAR_10);
fail:
 FUNC_1(VAR_11);
 return VAR_12;
}
