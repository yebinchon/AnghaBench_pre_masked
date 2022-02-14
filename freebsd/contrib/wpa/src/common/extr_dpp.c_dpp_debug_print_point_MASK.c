
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int const*,int const*,int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,char const*,char*,char*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_2, const EC_GROUP *VAR_3,
      const EC_POINT *VAR_4)
{
 BIGNUM *VAR_5, *VAR_6;
 BN_CTX *VAR_7;
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

 if (!VAR_1)
  return;

 VAR_7 = FUNC_1();
 VAR_5 = FUNC_4();
 VAR_6 = FUNC_4();
 if (!VAR_7 || !VAR_5 || !VAR_6 ||
     FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7) != 1)
  goto fail;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_2(VAR_6);
 if (!VAR_8 || !VAR_9)
  goto fail;

 FUNC_7(VAR_0, "%s (%s,%s)", VAR_2, VAR_8, VAR_9);

fail:
 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_0(VAR_7);
}
