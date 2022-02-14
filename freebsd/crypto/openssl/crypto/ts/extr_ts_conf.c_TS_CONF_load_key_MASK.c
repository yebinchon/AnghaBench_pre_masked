
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int * FUNC_2 (int *,int *,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

EVP_PKEY *FUNC_4(const char *VAR_2, const char *VAR_3)
{
    BIO *VAR_4 = ((void*)0);
    EVP_PKEY *VAR_5 = ((void*)0);

    if ((VAR_4 = FUNC_1(VAR_2, "r")) == ((void*)0))
        goto end;
    VAR_5 = FUNC_2(VAR_4, ((void*)0), ((void*)0), (char *)VAR_3);
 end:
    if (VAR_5 == ((void*)0))
        FUNC_3(VAR_0, VAR_1);
    FUNC_0(VAR_4);
    return VAR_5;
}
