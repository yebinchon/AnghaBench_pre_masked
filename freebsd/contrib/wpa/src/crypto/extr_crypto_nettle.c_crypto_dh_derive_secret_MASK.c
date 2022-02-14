
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int mpz_t ;


 int FUNC_0 (int const*,size_t,int const*,size_t,int const*,size_t,int *,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,size_t,int,int,int,int ,int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int const*,int const*,size_t) ;

int FUNC_9(u8 VAR_0, const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u8 *VAR_9, size_t *VAR_10)
{
 mpz_t VAR_11;
 int VAR_12 = -1;

 if (VAR_8 > VAR_2 ||
     (VAR_8 == VAR_2 &&
      FUNC_8(VAR_7, VAR_1, VAR_2) >= 0))
  return -1;

 FUNC_5(VAR_11);
 FUNC_4(VAR_11, VAR_8, 1, 1, 1, 0, VAR_7);
 if (FUNC_3(VAR_11, 1) <= 0)
  goto fail;

 if (VAR_3) {
  mpz_t VAR_13, VAR_14, VAR_15;
  int VAR_16;


  FUNC_6(VAR_13, VAR_14, VAR_15, ((void*)0));
  FUNC_4(VAR_13, VAR_2, 1, 1, 1, 0, VAR_1);
  FUNC_4(VAR_14, VAR_4, 1, 1, 1, 0, VAR_3);
  FUNC_7(VAR_15, VAR_11, VAR_14, VAR_13);
  VAR_16 = FUNC_3(VAR_15, 1) != 0;
  FUNC_2(VAR_13, VAR_14, VAR_15, ((void*)0));
  if (VAR_16)
   goto fail;
 }

 VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_5, VAR_6,
        VAR_1, VAR_2, VAR_9, VAR_10);
fail:
 FUNC_1(VAR_11);
 return VAR_12;
}
