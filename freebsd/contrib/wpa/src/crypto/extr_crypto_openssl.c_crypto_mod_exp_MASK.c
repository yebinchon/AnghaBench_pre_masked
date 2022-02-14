
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
 size_t FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_6 () ;

int FUNC_7(const u8 *VAR_0, size_t VAR_1,
     const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     u8 *VAR_6, size_t *VAR_7)
{
 BIGNUM *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = -1;
 BN_CTX *VAR_13;

 VAR_13 = FUNC_1();
 if (VAR_13 == ((void*)0))
  return -1;

 VAR_8 = FUNC_2(VAR_0, VAR_1, ((void*)0));
 VAR_9 = FUNC_2(VAR_2, VAR_3, ((void*)0));
 VAR_10 = FUNC_2(VAR_4, VAR_5, ((void*)0));
 VAR_11 = FUNC_6();

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
     VAR_11 == ((void*)0))
  goto error;

 if (FUNC_5(VAR_11, VAR_8, VAR_9, VAR_10,
          VAR_13, ((void*)0)) != 1)
  goto error;

 *VAR_7 = FUNC_3(VAR_11, VAR_6);
 VAR_12 = 0;

error:
 FUNC_4(VAR_8);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_0(VAR_13);
 return VAR_12;
}
