
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 () ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0)
{
    EVP_MD_CTX *VAR_1;

    VAR_1 = FUNC_2();
    if (VAR_1 == ((void*)0))
        return 0;

    FUNC_1(VAR_0, 1);
    FUNC_0(VAR_0, VAR_1);

    return 1;
}
