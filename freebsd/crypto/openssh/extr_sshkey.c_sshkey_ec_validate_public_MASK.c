
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const EC_POINT ;
typedef int EC_GROUP ;
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
 int FUNC_8 (int const*,int *,int *) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*,int const*,int *,int *,int *) ;
 int FUNC_13 (int const*,int const*) ;
 int FUNC_14 (int const*,int const*,int *,int const*,int *,int *) ;
 int const* FUNC_15 (int const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_16(const EC_GROUP *VAR_4, const EC_POINT *VAR_5)
{
 BN_CTX *VAR_6;
 EC_POINT *VAR_7 = ((void*)0);
 BIGNUM *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12 = VAR_2;
 if ((VAR_6 = FUNC_2()) == ((void*)0))
  return VAR_1;
 FUNC_3(VAR_6);





 if (FUNC_10(FUNC_9(VAR_4)) !=
     VAR_0)
  goto out;


 if (FUNC_13(VAR_4, VAR_5))
  goto out;

 if ((VAR_9 = FUNC_1(VAR_6)) == ((void*)0) ||
     (VAR_10 = FUNC_1(VAR_6)) == ((void*)0) ||
     (VAR_8 = FUNC_1(VAR_6)) == ((void*)0) ||
     (VAR_11 = FUNC_1(VAR_6)) == ((void*)0)) {
  VAR_12 = VAR_1;
  goto out;
 }


 if (FUNC_8(VAR_4, VAR_8, VAR_6) != 1 ||
     FUNC_12(VAR_4, VAR_5,
     VAR_9, VAR_10, VAR_6) != 1) {
  VAR_12 = VAR_3;
  goto out;
 }
 if (FUNC_5(VAR_9) <= FUNC_5(VAR_8) / 2 ||
     FUNC_5(VAR_10) <= FUNC_5(VAR_8) / 2)
  goto out;


 if ((VAR_7 = FUNC_15(VAR_4)) == ((void*)0)) {
  VAR_12 = VAR_1;
  goto out;
 }
 if (FUNC_14(VAR_4, VAR_7, ((void*)0), VAR_5, VAR_8, VAR_6) != 1) {
  VAR_12 = VAR_3;
  goto out;
 }
 if (FUNC_13(VAR_4, VAR_7) != 1)
  goto out;


 if (!FUNC_6(VAR_11, VAR_8, FUNC_7())) {
  VAR_12 = VAR_3;
  goto out;
 }
 if (FUNC_4(VAR_9, VAR_11) >= 0 || FUNC_4(VAR_10, VAR_11) >= 0)
  goto out;
 VAR_12 = 0;
 out:
 FUNC_0(VAR_6);
 FUNC_11(VAR_7);
 return VAR_12;
}
