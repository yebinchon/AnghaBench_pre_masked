
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int * rsa; int type; } ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *,int const*,int ) ;
 int FUNC_8 () ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int *,int const**,int const**) ;
 int FUNC_10 (int *,int *,int *,int const**) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int ) ;

int
FUNC_13(struct sshkey *VAR_5, const BIGNUM *VAR_6)
{
 const BIGNUM *VAR_7, *VAR_8, *VAR_9;
 BIGNUM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 BIGNUM *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 BN_CTX *VAR_15 = ((void*)0);
 int VAR_16;

 if (VAR_5 == ((void*)0) || VAR_5->rsa == ((void*)0) ||
     FUNC_12(VAR_5->type) != VAR_1)
  return VAR_3;

 FUNC_10(VAR_5->rsa, ((void*)0), ((void*)0), &VAR_9);
 FUNC_9(VAR_5->rsa, &VAR_7, &VAR_8);

 if ((VAR_15 = FUNC_1()) == ((void*)0))
  return VAR_2;
 if ((VAR_10 = FUNC_5()) == ((void*)0) ||
     (VAR_12 = FUNC_5()) == ((void*)0) ||
     (VAR_13 = FUNC_5()) == ((void*)0))
  return VAR_2;
 if ((VAR_11 = FUNC_3(VAR_9)) == ((void*)0) ||
     (VAR_14 = FUNC_3(VAR_6)) == ((void*)0)) {
  VAR_16 = VAR_2;
  goto out;
 }
 FUNC_6(VAR_10, VAR_0);
 FUNC_6(VAR_11, VAR_0);

 if ((FUNC_7(VAR_10, VAR_8, FUNC_8()) == 0) ||
     (FUNC_4(VAR_12, VAR_11, VAR_10, VAR_15) == 0) ||
     (FUNC_7(VAR_10, VAR_7, FUNC_8()) == 0) ||
     (FUNC_4(VAR_13, VAR_11, VAR_10, VAR_15) == 0)) {
  VAR_16 = VAR_4;
  goto out;
 }
 if (!FUNC_11(VAR_5->rsa, VAR_13, VAR_12, VAR_14)) {
  VAR_16 = VAR_4;
  goto out;
 }
 VAR_13 = VAR_12 = VAR_14 = ((void*)0);

 VAR_16 = 0;
 out:
 FUNC_2(VAR_10);
 FUNC_2(VAR_11);
 FUNC_2(VAR_13);
 FUNC_2(VAR_12);
 FUNC_2(VAR_14);
 FUNC_0(VAR_15);
 return VAR_16;
}
