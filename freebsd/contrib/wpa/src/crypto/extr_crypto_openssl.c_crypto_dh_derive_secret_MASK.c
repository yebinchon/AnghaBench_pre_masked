
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int const*,size_t,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int const*,size_t,int const*,size_t,int const*,size_t,int *,size_t*) ;

int FUNC_10(u8 VAR_0, const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u8 *VAR_9, size_t *VAR_10)
{
 BIGNUM *VAR_11, *VAR_12;
 int VAR_13 = -1;

 VAR_11 = FUNC_2(VAR_7, VAR_8, ((void*)0));
 VAR_12 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 if (!VAR_11 || !VAR_12 || FUNC_6(VAR_11) || FUNC_5(VAR_11) ||
     FUNC_4(VAR_11, VAR_12) >= 0)
  goto fail;

 if (VAR_3) {
  BN_CTX *VAR_14;
  BIGNUM *VAR_15, *VAR_16;
  int VAR_17;


  VAR_15 = FUNC_2(VAR_3, VAR_4, ((void*)0));
  VAR_14 = FUNC_1();
  VAR_16 = FUNC_8();
  VAR_17 = !VAR_15 || !VAR_14 || !VAR_16 ||
   !FUNC_7(VAR_16, VAR_11, VAR_15, VAR_12, VAR_14) ||
   !FUNC_5(VAR_16);
  FUNC_3(VAR_15);
  FUNC_3(VAR_16);
  FUNC_0(VAR_14);
  if (VAR_17)
   goto fail;
 }

 VAR_13 = FUNC_9(VAR_7, VAR_8, VAR_5, VAR_6,
        VAR_1, VAR_2, VAR_9, VAR_10);
fail:
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
 return VAR_13;
}
