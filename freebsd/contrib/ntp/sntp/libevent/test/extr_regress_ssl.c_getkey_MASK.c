
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static EVP_PKEY *
FUNC_4(void)
{
 EVP_PKEY *VAR_1;
 BIO *VAR_2;


 VAR_2 = FUNC_1((char*)VAR_0, -1);
 FUNC_3(VAR_2);

 VAR_1 = FUNC_2(VAR_2,((void*)0),((void*)0),((void*)0));
 FUNC_0(VAR_2);
 FUNC_3(VAR_1);

 return VAR_1;
end:
 return ((void*)0);
}
