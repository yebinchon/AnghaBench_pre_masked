
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *,int *) ;

DH *
FUNC_3(BIGNUM *VAR_0, BIGNUM *VAR_1)
{
 DH *VAR_2;

 if ((VAR_2 = FUNC_1()) == ((void*)0))
  return ((void*)0);
 if (!FUNC_2(VAR_2, VAR_1, ((void*)0), VAR_0)) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
