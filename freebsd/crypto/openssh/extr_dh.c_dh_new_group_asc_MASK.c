
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *,int *) ;

DH *
FUNC_5(const char *VAR_0, const char *VAR_1)
{
 DH *VAR_2;
 BIGNUM *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

 if ((VAR_2 = FUNC_3()) == ((void*)0))
  return ((void*)0);
 if (FUNC_1(&VAR_3, VAR_1) == 0 ||
     FUNC_1(&VAR_4, VAR_0) == 0)
  goto fail;
 if (!FUNC_4(VAR_2, VAR_3, ((void*)0), VAR_4))
  goto fail;
 return VAR_2;
 fail:
 FUNC_2(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
 return ((void*)0);
}
