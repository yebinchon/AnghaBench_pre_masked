
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_KEY ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int const*) ;
 int * FUNC_10 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_11(const EC_KEY *VAR_3)
{
 BN_CTX *VAR_4;
 BIGNUM *VAR_5, *VAR_6;
 int VAR_7 = VAR_1;

 if ((VAR_4 = FUNC_2()) == ((void*)0))
  return VAR_0;
 FUNC_3(VAR_4);

 if ((VAR_5 = FUNC_1(VAR_4)) == ((void*)0) ||
     (VAR_6 = FUNC_1(VAR_4)) == ((void*)0)) {
  VAR_7 = VAR_0;
  goto out;
 }


 if (FUNC_8(FUNC_9(VAR_3), VAR_5, VAR_4) != 1) {
  VAR_7 = VAR_2;
  goto out;
 }
 if (FUNC_5(FUNC_10(VAR_3)) <=
     FUNC_5(VAR_5) / 2)
  goto out;


 if (!FUNC_6(VAR_6, VAR_5, FUNC_7())) {
  VAR_7 = VAR_2;
  goto out;
 }
 if (FUNC_4(FUNC_10(VAR_3), VAR_6) >= 0)
  goto out;
 VAR_7 = 0;
 out:
 FUNC_0(VAR_4);
 return VAR_7;
}
